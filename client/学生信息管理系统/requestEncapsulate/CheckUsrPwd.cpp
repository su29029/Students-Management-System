//�����������õ�ͷ�ļ�����framework.h��
#include "framework.h"
//�����򴰿ڿؼ��������ID������ǰ��������ȫ�ֱ�����������resource.h��
#include "resource.h"

//����û�������
int CheckUsrPwd(char* username, char* password) {
	InitSocketClient((char*)IP, PORT);
	memset(sendBuff, '\0', MAX_BUFF);
	strcat_s(sendBuff, "index=CheckUsrPwd");//ʶ���룬�ж����������ݰ�����¼/��ѯ��Ϣ/�޸���Ϣ��
	strcat_s(sendBuff, "&");
	strcat_s(sendBuff, "username=");
	strcat_s(sendBuff, username);
	strcat_s(sendBuff, "&");
	strcat_s(sendBuff, "password=");
	strcat_s(sendBuff, password);

	sockfd = connect(connfd, (struct sockaddr*) & serverAddr, sizeof(serverAddr));
	if (sockfd != CONNECT_SUCCESS) {
		MessageBox(NULL, TEXT("����������ʧ��"), TEXT(""), MB_OK);
		return STATUS_SERVER_ERROR;
	}
	strcpy_s(sendBuff, Base64Encode((unsigned char*)sendBuff));
	int nBytes = strlen(sendBuff);
	int s = send(connfd, sendBuff, nBytes, 0);
	int r = recv(connfd, receiveBuff, nBytes, 0);
	strcpy_s(receiveBuff, Base64Decode((unsigned char*)receiveBuff));
	if (r == RECEIVE_FAILURE) {
		MessageBox(NULL, TEXT("����������"), TEXT(""), MB_OK);
		closesocket(connfd);
	}
	printf("%s", receiveBuff);
	if (strcmp(receiveBuff, "yes") == COMPARE_STRING_TRUE) {
		MessageBox(NULL, TEXT("��¼�ɹ�"), TEXT(""), MB_OK);
		return LOGIN_SUCCESS;
	}
	else if (strcmp(receiveBuff, "error") == COMPARE_STRING_TRUE) {
		MessageBox(NULL, TEXT("����������"), TEXT(""), MB_OK);
		return STATUS_SERVER_ERROR;
	}
	else {
		closesocket(connfd);
		MessageBox(NULL, TEXT("ѧ�Ż��������"), TEXT("����"), MB_OK);
		return LOGIN_FAILURE;
	}
}