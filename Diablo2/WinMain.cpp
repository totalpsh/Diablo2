#include "Stdafx.h"
#include "MG_Diablo.h"

HINSTANCE _hInstance;
HWND _hWnd;
POINT _ptMouse = { 0, 0 };

MG_Diablo* _mg;

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

void setWindowSize(int x, int y, int width, int height);

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR _lpszCmdParam, int nCmdShow)
{
	_hInstance = hInstance;

	_mg = new MG_Diablo;

	WNDCLASS wndClass;

	wndClass.cbClsExtra = 0;
	wndClass.cbWndExtra = 0;
	wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClass.hInstance = _hInstance;
	wndClass.lpfnWndProc = (WNDPROC)WndProc;
	wndClass.lpszClassName = WINNAME;
	wndClass.lpszMenuName = NULL;

	wndClass.style = CS_HREDRAW | CS_VREDRAW;

	RegisterClass(&wndClass);

#ifdef FULLSCREEN

	DEVMODE dm;
	ZeroMemory(&dm, sizeof(DEVMODE));

	dm.dmSize = sizeof(DEVMODE);
	dm.dmBitsPerPel = 32;
	dm.dmPanningWidth = 1580;
	dm.dmPelsHeigght = 1020;
	dm.dmDisplayFrequency = 60;

	dm.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT | DM_DISPLAYFREQUENCY;

	if (ChangeDisplaySettings(&dm, CDS_FULLSCREEN) != DISP_CHANGE_SUCCESSFUL)
	{
		ChangeDisplaySettings(&dm, 0);
	}

	_hWnd = CreateWindow
	(
		WINNAME,       
		WINNAME,       
		WINSTYLE,    
		WINSTART_X,    
		WINSTART_Y,    
		WINSIZE_X,     
		WINSIZE_Y,     
		NULL,          
		(HMENU)NULL,   
		hInstance,     
		NULL           
					
	);
#else 

	_hWnd = CreateWindow
	(
		WINNAME,             
		WINNAME,             
		WINSTYLE,   
		WINSTART_X,          
		WINSTART_Y,          
		WINSIZE_X,           
		WINSIZE_Y,           
		NULL,                
		(HMENU)NULL,         
		hInstance,           
		NULL                 				
	);

#endif

	setWindowSize(WINSTART_X, WINSTART_Y, WINSIZE_X, WINSIZE_Y);

	ShowWindow(_hWnd, nCmdShow);

	if (FAILED(_mg->init()))
	{
		return 0;
	}

	MSG message;

	while (GetMessage(&message, 0, 0, 0))
	{
		TranslateMessage(&message);
		DispatchMessage(&message);
	}

	_mg->release();
	UnregisterClass(WINNAME, hInstance);

	return (int)message.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	return _mg->MainProc(hWnd, iMessage, wParam, lParam);
}

void setWindowSize(int x, int y, int width, int height)
{
	RECT rc = { 0, 0, width, height };

	AdjustWindowRect(&rc, WINSTYLE, false);

	SetWindowPos(_hWnd, NULL, x, y, (rc.right - rc.left), (rc.bottom - rc.top), SWP_NOZORDER | SWP_NOMOVE);
}
