//�����������õ�ͷ�ļ�����framework.h��
#include "framework.h"
//�����򴰿ڿؼ��������ID������ǰ��������ȫ�ֱ�����������resource.h��
#include "resource.h"
//���Ƶ�¼��Ϣ����
void SetLoginPage(HWND hWnd) {
	isLogin = STATUS_LOGIN_NO;
	//ɾ��ԭ�пؼ�
	InvalidateRect(hWnd, 0, true);
	DestroyAll();
	//��������
	hBrush = CreateSolidBrush(RGB(0x41, 0x96, 0x4F));
	hFontTitle = CreateFont(-28/*��*/, -14/*��*/, 0, 0, 700 /*����*/,
		FALSE/*б��*/, FALSE/*�»���*/, FALSE/*ɾ����*/, DEFAULT_CHARSET,
		OUT_CHARACTER_PRECIS, CLIP_CHARACTER_PRECIS, DEFAULT_QUALITY,
		FF_DONTCARE, TEXT("΢���ź�")
	);
	hFont = CreateFont(-16/*��*/, -8/*��*/, 0, 0, 500 /*����*/,
		FALSE/*б��*/, FALSE/*�»���*/, FALSE/*ɾ����*/, DEFAULT_CHARSET,
		OUT_CHARACTER_PRECIS, CLIP_CHARACTER_PRECIS, DEFAULT_QUALITY,
		FF_DONTCARE, TEXT("΢���ź�")
	);
	hFontFooter = CreateFont(-14/*��*/, -7/*��*/, 0, 0, 200 /*����*/,
		FALSE/*б��*/, FALSE/*�»���*/, FALSE/*ɾ����*/, DEFAULT_CHARSET,
		OUT_CHARACTER_PRECIS, CLIP_CHARACTER_PRECIS, DEFAULT_QUALITY,
		FF_DONTCARE, TEXT("΢���ź�")
	);


	//����µĿؼ�
	hTitle = CreateWindow(TEXT("static"), TEXT("��ӭʹ��ѧ����Ϣ����ϵͳ"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 180 /*x����*/, 60 /*y����*/, 360 /*���*/, 80 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_BIG_TITLE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hTitle, WM_SETFONT, (WPARAM)hFontTitle, NULL);

	hUsername = CreateWindow(TEXT("static"), TEXT("ѧ��"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 230 /*x����*/, 220 /*y����*/, 60 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_LOGIN_USERNAME /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hUsername, WM_SETFONT, (WPARAM)hFont, NULL);

	hPassword = CreateWindow(TEXT("static"), TEXT("����"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 230 /*x����*/, 260 /*y����*/, 60 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_LOGIN_PASSWORD /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hPassword, WM_SETFONT, (WPARAM)hFont, NULL);

	hFooter = CreateWindow(TEXT("static"), TEXT("ѧ����Ϣ����ϵͳ @ HQ WYQ SYQ"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 120 /*x����*/, 500 /*y����*/, 240 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_FOOTER /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hFooter, WM_SETFONT, (WPARAM)hFontFooter, NULL);

	hLogin = CreateWindow(L"Button", L"��¼", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 150, 300, 100, 30, hWnd, (HMENU)IDBTN_LOG, hInst, NULL);
	SendMessage(hLogin, WM_SETFONT, (WPARAM)hFontFooter, NULL);

	hRegister = CreateWindow(L"Button", L"ע��", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 + 50, 300, 100, 30, hWnd, (HMENU)IDBTN_REG, hInst, NULL);
	SendMessage(hRegister, WM_SETFONT, (WPARAM)hFontFooter, NULL);

	hLoginText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 150, 220, 300, 22, hWnd, (HMENU)ID_LOGIN_USERNAME_TEXT, hInst, NULL);

	hPasswordText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_PASSWORD, rect.right / 2 - 150, 260, 300, 22, hWnd, (HMENU)ID_LOGIN_PASSWORD_TEXT, hInst, NULL);

	UpdateWindow(hWnd);

}