//�����������õ�ͷ�ļ�����framework.h��
#include "framework.h"
//�����򴰿ڿؼ��������ID������ǰ��������ȫ�ֱ�����������resource.h��
#include "resource.h"
//���Ƶ�¼����ҳ��
void SetMainPage(HWND hWnd) {

	//ɾ��ҳ��ԭ�пؼ�
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

	//�����µĿؼ�
	hTitle = CreateWindow(TEXT("static"), TEXT("��ӭ��¼����ѡ��"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 180 /*x����*/, 60 /*y����*/, 360 /*���*/, 80 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_BIG_TITLE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hTitle, WM_SETFONT, (WPARAM)hFontTitle, NULL);
	hSearch = CreateWindow(TEXT("Button"), TEXT("��ѯ��Ϣ"),
		WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 120 /*x����*/, 180 /*y����*/, 240 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_SEARCH /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hSearch, WM_SETFONT, (WPARAM)hFont, NULL);
	hResize = CreateWindow(TEXT("Button"), TEXT("�޸���Ϣ"),
		WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 120 /*x����*/, 240 /*y����*/, 240 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_RESIZE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hResize, WM_SETFONT, (WPARAM)hFont, NULL);
	hAdd = CreateWindow(TEXT("Button"), TEXT("�����Ϣ"),
		WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 120 /*x����*/, 300 /*y����*/, 240 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_ADD /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hAdd, WM_SETFONT, (WPARAM)hFont, NULL);
	hDelete = CreateWindow(TEXT("Button"), TEXT("ɾ����Ϣ"),
		WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 120 /*x����*/, 360 /*y����*/, 240 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_DELETE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hDelete, WM_SETFONT, (WPARAM)hFont, NULL);
	hFooter = CreateWindow(TEXT("static"), TEXT("ѧ����Ϣ����ϵͳ @ HQ WYQ SYQ"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 120 /*x����*/, 500 /*y����*/, 240 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_FOOTER /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hFooter, WM_SETFONT, (WPARAM)hFontFooter, NULL);

	UpdateWindow(hWnd);

}