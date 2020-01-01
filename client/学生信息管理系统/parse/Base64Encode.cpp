//�����������õ�ͷ�ļ�����framework.h��
#include "framework.h"
//�����򴰿ڿؼ��������ID������ǰ��������ȫ�ֱ�����������resource.h��
#include "resource.h"
//base64����
char* Base64Encode(unsigned char* str) {
	int encodeLength;
	int stringLength;
	unsigned char* res;
	int i, j;
	//����base64�����  
	unsigned char* table = (unsigned char*)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

	//���㾭��base64�������ַ�������  
	stringLength = strlen((char*)str);
	if (stringLength % 3 == 0)
		encodeLength = stringLength / 3 * 4;
	else
		encodeLength = (stringLength / 3 + 1) * 4;

	res = (unsigned char*)malloc(sizeof(unsigned char) * encodeLength + 1);
	if (res == NULL) {
		return (char*)"ZXJyb3I=";
	}
	res[encodeLength] = '\0';

	//��3��8λ�ַ�Ϊһ����б���  
	for (i = 0, j = 0; i < encodeLength - 2; j += 3, i += 4)
	{
		res[i] = table[str[j] >> 2]; //ȡ����һ���ַ���ǰ6λ���ҳ���Ӧ�Ľ���ַ�  
		res[i + 1] = table[(str[j] & 0x3) << 4 | (str[j + 1] >> 4)]; //����һ���ַ��ĺ�λ��ڶ����ַ���ǰ4λ������ϲ��ҵ���Ӧ�Ľ���ַ�  
		res[i + 2] = table[(str[j + 1] & 0xf) << 2 | (str[j + 2] >> 6)]; //���ڶ����ַ��ĺ�4λ��������ַ���ǰ2λ��ϲ��ҳ���Ӧ�Ľ���ַ�  
		res[i + 3] = table[str[j + 2] & 0x3f]; //ȡ���������ַ��ĺ�6λ���ҳ�����ַ�  
	}

	switch (stringLength % 3)
	{
	case 1:
		res[i - 2] = '=';
		res[i - 1] = '=';
		break;
	case 2:
		res[i - 1] = '=';
		break;
	}

	return (char*)res;
}