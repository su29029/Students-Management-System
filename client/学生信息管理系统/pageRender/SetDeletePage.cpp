//�����������õ�ͷ�ļ�����framework.h��
#include "framework.h"
//�����򴰿ڿؼ��������ID������ǰ��������ȫ�ֱ�����������resource.h��
#include "resource.h"
//����ɾ����Ϣ����
void SetDeletePage(HWND hWnd) {
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
	hTitle = CreateWindow(TEXT("static"), TEXT("ɾ����Ϣ"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 180 /*x����*/, 60 /*y����*/, 360 /*���*/, 80 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_BIG_TITLE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hTitle, WM_SETFONT, (WPARAM)hFontTitle, NULL);

	hDeleteButton = CreateWindow(L"Button", L"ȷ��ɾ��", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 100, 440, 300, 22, hWnd, (HMENU)ID_DELETE_ACK, hInst, NULL);
	SendMessage(hDeleteButton, WM_SETFONT, (WPARAM)hFont, NULL);
	//ѧ���Ļ�����Ϣ��ѧ�ţ����룬�������Ա�רҵ���꼶������
	hDeleteID = CreateWindow(TEXT("static"), TEXT("������ѧ�ţ�"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 220 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_DELETE_ID /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hDeleteID, WM_SETFONT, (WPARAM)hFont, NULL);

	hDeleteName = CreateWindow(TEXT("static"), TEXT("������������"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 260 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_DELETE_NAME /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hDeleteName, WM_SETFONT, (WPARAM)hFont, NULL);

	hDeleteIDText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 220, 300, 22, hWnd, (HMENU)ID_DELETE_ID_TEXT, hInst, NULL);
	SendMessage(hDeleteIDText, WM_SETFONT, (WPARAM)hFont, NULL);
	hDeleteNameText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 260, 300, 22, hWnd, (HMENU)ID_DELETE_NAME_TEXT, hInst, NULL);
	SendMessage(hResizeNameText, WM_SETFONT, (WPARAM)hFont, NULL);

	hReturn = CreateWindow(L"Button", L"����������", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 400, 60, 120, 22, hWnd, (HMENU)ID_RETURN, hInst, NULL);
	SendMessage(hReturn, WM_SETFONT, (WPARAM)hFont, NULL);
}