#include <windows.h>
#define NORMAL_SIZE                     64
#define MAX_LOADSTRING     100
#define MAX_BUFF           20480
HINSTANCE                  hInst;                                    // ��ǰʵ��
WCHAR                      szTitle[MAX_LOADSTRING];                  // �������ı�
WCHAR                      szWindowClass[MAX_LOADSTRING];            // ����������
RECT                       rect;									 // ���ھ���

HFONT               hFontTitle;       // title����
HFONT               hFontFooter;      // footer����
HFONT               hFont;            // ��ͨ�ı�����
HBRUSH              hBrush;           // ��ˢ

									  // ���������水ť���
HWND                    hReturn;

// ��¼��������ؼ����			   
HWND					   hSearch;
HWND					   hResize;
HWND					   hAdd;
HWND					   hDelete;

// ��½����ؼ����
HWND					   hTitle;
HWND					   hUsername;
HWND					   hPassword;
HWND					   hFooter;
HWND					   hLogin;
HWND					   hRegister;
HWND					   hLoginText;
HWND					   hPasswordText;

// ��ѯ��Ϣ����ؼ����
HWND					   hSearchUsername;
HWND					   hSearchText;
HWND					   hSearchButton;

// �޸���Ϣ-��ѯ����ؼ����
HWND		    		   hResizeUsername;
HWND					   hResizeText;
HWND					   hResizeButton;

// �޸���Ϣ-�޸Ľ���ؼ����
HWND					   hResizeSettingName;
HWND					   hResizeSettingSex;
HWND					   hResizeSettingAge;
HWND					   hResizeSettingMajor;
HWND					   hResizeSettingGrade;
HWND					   hResizeSettingMidTermScore;
HWND					   hResizeSettingFinalTermScore;
HWND					   hResizeNameText;
HWND					   hResizeSexText;
HWND					   hResizeAgeText;
HWND					   hResizeGradeText;
HWND					   hResizeMajorText;
HWND					   hResizeMidText;
HWND					   hResizeFinalText;
HWND					   hResizeSettingButton;

// �����Ϣҳ��ؼ����
HWND				       hAddID;
HWND					   hAddIDText;
HWND					   hAddPassword;
HWND					   hAddPasswordText;
HWND					   hAddName;
HWND					   hAddNameText;
HWND					   hAddSex;
HWND					   hAddSexText;
HWND					   hAddMajor;
HWND					   hAddMajorText;
HWND					   hAddGrade;
HWND					   hAddGradeText;
HWND					   hAddAge;
HWND					   hAddAgeText;
HWND					   hAddButton;

// ɾ����Ϣҳ��ؼ����
HWND					   hDeleteID;
HWND					   hDeleteIDText;
HWND					   hDeleteName;
HWND					   hDeleteNameText;
HWND					   hDeleteButton;

// �û�������û��������뽫�洢�������������������������е����ݱȽ�
WCHAR				   username[64];
WCHAR				   password[64];

// ��¼״̬,Ĭ��Ϊδ��¼
int					   isLogin;


SOCKET                  connfd;                 // �ͻ����׽���������
SOCKET                  sockfd;                 // ������׽���������
SOCKADDR_IN             serverAddr;             // ip���˿�����
WSADATA                 wsaData;                // winsock
char                    sendBuff[MAX_BUFF];     // �������ݰ�
char                    receiveBuff[MAX_BUFF];  // �������ݰ�

char					   rseID[NORMAL_SIZE];     // �޸���Ϣʱ�Ĳ�ѯѧ��
