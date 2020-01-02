//�����������õ�ͷ�ļ�����framework.h��
#include "../framework.h"
//�����򴰿ڿؼ��������ID������ǰ��������ȫ�ֱ�����������resource.h��
#include "../resource.h"
//�����޸Ĳ�ѯ���棨�޸�ǰ���ѯ��Ҫ�޸ĵ���Ϣ�����ڲ����޸ģ�
void SetResizePage(HWND hWnd) {
	//ɾ��ԭ�пؼ�
	InvalidateRect(hWnd, 0, true);
	DestroyAll();

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

	hTitle = CreateWindow(TEXT("static"), TEXT("�޸���Ϣ"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 180 /*x����*/, 60 /*y����*/, 360 /*���*/, 80 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_BIG_TITLE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hTitle, WM_SETFONT, (WPARAM)hFontTitle, NULL);


	hResizeUsername = CreateWindow(TEXT("static"), TEXT("����ѧ�ţ�"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 260 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_RESIZE_USERNAME /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hResizeUsername, WM_SETFONT, (WPARAM)hFont, NULL);

	hResizeText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 260, 300, 22, hWnd, (HMENU)ID_RESIZE_TEXT, hInst, NULL);
	SendMessage(hResizeText, WM_SETFONT, (WPARAM)hFont, NULL);

	hResizeButton = CreateWindow(L"Button", L"��ѯ", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 + 230, 260, 100, 22, hWnd, (HMENU)ID_RESIZE_ACK, hInst, NULL);
	SendMessage(hResizeButton, WM_SETFONT, (WPARAM)hFont, NULL);

	hFooter = CreateWindow(TEXT("static"), TEXT("ѧ����Ϣ����ϵͳ @ HQ WYQ SYQ"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 120 /*x����*/, 500 /*y����*/, 240 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_FOOTER /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hFooter, WM_SETFONT, (WPARAM)hFontFooter, NULL);

	hReturn = CreateWindow(L"Button", L"����������", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 400, 60, 120, 22, hWnd, (HMENU)ID_RETURN, hInst, NULL);
	SendMessage(hReturn, WM_SETFONT, (WPARAM)hFont, NULL);

}