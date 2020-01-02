//�����������õ�ͷ�ļ�����framework.h��
#include "../framework.h"
//�����򴰿ڿؼ��������ID������ǰ��������ȫ�ֱ�����������resource.h��
#include "../resource.h"
//���������Ϣ��ע�ᣩ����
void SetAddPage(HWND hWnd) {
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
	hTitle = CreateWindow(TEXT("static"), TEXT("�����Ϣ/ע����Ϣ"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 180 /*x����*/, 60 /*y����*/, 360 /*���*/, 80 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_BIG_TITLE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hTitle, WM_SETFONT, (WPARAM)hFontTitle, NULL);


	//ѧ���Ļ�����Ϣ��ѧ�ţ����룬�������Ա�רҵ���꼶������
	hAddID = CreateWindow(TEXT("static"), TEXT("������ѧ�ţ�"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 210 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_ADD_ID /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hAddID, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddPassword = CreateWindow(TEXT("static"), TEXT("���������룺"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 245 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_ADD_PASSWORD /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hAddPassword, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddName = CreateWindow(TEXT("static"), TEXT("������������"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 280 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_ADD_NAME /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hAddName, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddSex = CreateWindow(TEXT("static"), TEXT("�������Ա�"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 315 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_ADD_SEX /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hAddSex, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddMajor = CreateWindow(TEXT("static"), TEXT("������רҵ��"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 350 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_ADD_MAJOR /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hAddMajor, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddGrade = CreateWindow(TEXT("static"), TEXT("�������꼶��"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 385 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_ADD_GRADE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hAddGrade, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddAge = CreateWindow(TEXT("static"), TEXT("���������䣺"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 420 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_ADD_AGE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hAddAge, WM_SETFONT, (WPARAM)hFont, NULL);

	hAddButton = CreateWindow(L"Button", L"ȷ�����", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 100, 460, 300, 22, hWnd, (HMENU)ID_ADD_ACK, hInst, NULL);
	SendMessage(hAddButton, WM_SETFONT, (WPARAM)hFont, NULL);

	hAddIDText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 210, 300, 22, hWnd, (HMENU)ID_ADD_ID_TEXT, hInst, NULL);
	SendMessage(hAddIDText, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddPasswordText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 245, 300, 22, hWnd, (HMENU)ID_ADD_PASSWORD_TEXT, hInst, NULL);
	SendMessage(hAddPasswordText, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddNameText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 280, 300, 22, hWnd, (HMENU)ID_ADD_NAME_TEXT, hInst, NULL);
	SendMessage(hAddNameText, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddSexText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 315, 300, 22, hWnd, (HMENU)ID_ADD_SEX_TEXT, hInst, NULL);
	SendMessage(hAddSexText, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddMajorText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 350, 300, 22, hWnd, (HMENU)ID_ADD_MAJOR_TEXT, hInst, NULL);
	SendMessage(hAddMajorText, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddGradeText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 385, 300, 22, hWnd, (HMENU)ID_ADD_GRADE_TEXT, hInst, NULL);
	SendMessage(hAddGradeText, WM_SETFONT, (WPARAM)hFont, NULL);
	hAddAgeText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 420, 300, 22, hWnd, (HMENU)ID_ADD_AGE_TEXT, hInst, NULL);
	SendMessage(hAddAgeText, WM_SETFONT, (WPARAM)hFont, NULL);


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