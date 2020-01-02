
//�����������õ�ͷ�ļ�����framework.h��
#include "../framework.h"
//�����򴰿ڿؼ��������ID������ǰ��������ȫ�ֱ�����������resource.h��
#include "../resource.h"
//��ʼ���׽���
void InitSocketClient(char* ip, int port) {

	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
	{
		perror("Error in initialing socket.");
		MessageBox(NULL, TEXT("����������ʧ��"), TEXT(""), MB_OK);
		return;
	}
	//�����׽���
	if ((connfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == INITIAL_SOCKET_ERROR) {
		perror("Error in initialing socket.\n in socket().");
		MessageBox(NULL, TEXT("����������ʧ��"), TEXT(""), MB_OK);
		return;
	}
	//���ò���
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(port);

	inet_pton(AF_INET, ip, &serverAddr.sin_addr);
}