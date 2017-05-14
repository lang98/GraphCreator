#include "MainControl.h"
#include <Windows.h>
using namespace std;

int main()
{
	HWND hwnd;
	HDC hdc;
	HPEN hpen;
	hwnd = GetConsoleWindow();
	hdc = GetDC(hwnd);
	system("color F0");
	system("cls");
	hpen=CreatePen(PS_SOLID,1,RGB(255,0,0));
	SelectObject(hdc,hpen);
	
	CMainControl mainControl(hdc);
	mainControl.Main();
	
	DeleteObject(hpen);
	ReleaseDC(hwnd,hdc);
	
	system("pause");
	return 0;
}