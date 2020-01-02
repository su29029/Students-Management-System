//�����������õ�ͷ�ļ�����framework.h��
#include "../framework.h"
//�����򴰿ڿؼ��������ID������ǰ��������ȫ�ֱ�����������resource.h��
#include "../resource.h"
//�����޸���Ϣ����
void SetResizeSettingPage(HWND hWnd) {
	InvalidateRect(hWnd, 0, true);
	DestroyWindow(hReturn);
	DestroyWindow(hResizeUsername);
	DestroyWindow(hResizeText);
	DestroyWindow(hResizeButton);
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
	hTitle = CreateWindow(TEXT("static"), TEXT("�޸���Ϣ"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 180 /*x����*/, 60 /*y����*/, 360 /*���*/, 80 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_BIG_TITLE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hTitle, WM_SETFONT, (WPARAM)hFontTitle, NULL);

	//ѧ���Ļ�����Ϣ���������Ա�רҵ������
	hResizeSettingName = CreateWindow(TEXT("static"), TEXT("������������"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 210 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_RESIZE_SETTING_NAME /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hResizeSettingName, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeSettingSex = CreateWindow(TEXT("static"), TEXT("�������Ա�"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 245 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_RESIZE_SETTING_SEX /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hResizeSettingSex, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeSettingMajor = CreateWindow(TEXT("static"), TEXT("������רҵ��"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 280 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_RESIZE_SETTING_MAJOR /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hResizeSettingMajor, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeSettingGrade = CreateWindow(TEXT("static"), TEXT("�������꼶��"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 315 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_RESIZE_SETTING_GRADE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hResizeSettingGrade, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeSettingAge = CreateWindow(TEXT("static"), TEXT("���������䣺"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 350 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_RESIZE_SETTING_AGE /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hResizeSettingAge, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeSettingMidTermScore = CreateWindow(TEXT("static"), TEXT("���������гɼ���"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 385 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_RESIZE_SETTING_MID /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hResizeSettingMidTermScore, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeSettingFinalTermScore = CreateWindow(TEXT("static"), TEXT("��������ĩ�ɼ���"),
		WS_CHILD | WS_VISIBLE | SS_CENTERIMAGE | SS_CENTER,
		rect.right / 2 - 270 /*x����*/, 420 /*y����*/, 140 /*���*/, 22 /*�߶�*/,
		hWnd /*�����ھ��*/, (HMENU)ID_RESIZE_SETTING_FINAL /*�ؼ�ID*/, hInst /*��ǰ����ʵ�����*/, NULL
	);
	SendMessage(hResizeSettingFinalTermScore, WM_SETFONT, (WPARAM)hFont, NULL);

	hResizeSettingButton = CreateWindow(L"Button", L"ȷ���޸�", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON | BS_FLAT,
		rect.right / 2 - 100, 460, 300, 22, hWnd, (HMENU)ID_RESIZE_SETTING_ACK, hInst, NULL);
	SendMessage(hResizeSettingButton, WM_SETFONT, (WPARAM)hFont, NULL);

	hResizeNameText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 210, 300, 22, hWnd, (HMENU)ID_RESIZE_SETTING_NAME_TEXT, hInst, NULL);
	SendMessage(hResizeNameText, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeSexText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 245, 300, 22, hWnd, (HMENU)ID_RESIZE_SETTING_SEX_TEXT, hInst, NULL);
	SendMessage(hResizeSexText, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeMajorText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 280, 300, 22, hWnd, (HMENU)ID_RESIZE_SETTING_MAJOR_TEXT, hInst, NULL);
	SendMessage(hResizeMajorText, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeGradeText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 315, 300, 22, hWnd, (HMENU)ID_RESIZE_SETTING_GRADE_TEXT, hInst, NULL);
	SendMessage(hResizeGradeText, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeAgeText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 350, 300, 22, hWnd, (HMENU)ID_RESIZE_SETTING_AGE_TEXT, hInst, NULL);
	SendMessage(hResizeAgeText, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeMidText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 385, 300, 22, hWnd, (HMENU)ID_RESIZE_SETTING_MID_TEXT, hInst, NULL);
	SendMessage(hResizeMidText, WM_SETFONT, (WPARAM)hFont, NULL);
	hResizeFinalText = CreateWindow(TEXT("edit"), NULL, WS_CHILD | WS_VISIBLE |
		WS_BORDER | ES_LEFT | ES_MULTILINE | ES_AUTOHSCROLL |
		ES_AUTOVSCROLL, rect.right / 2 - 100, 420, 300, 22, hWnd, (HMENU)ID_RESIZE_SETTING_FINAL_TEXT, hInst, NULL);
	SendMessage(hResizeFinalText, WM_SETFONT, (WPARAM)hFont, NULL);
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