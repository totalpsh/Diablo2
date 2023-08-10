#pragma once
#pragma warning(disable : 4005)

#include <SDKDDKVER.h>

#define WIN32_LEAN_AND_MEAN

#pragma comment(linker, "/entry:WinMainCRTStartup /subsystem:console")
#pragma comment(lib, "msimg32.lib")

#include <windows.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <stdio.h>
#include <time.h>

#include <iostream>
#include <chrono>
#include <random>
#include <vector>
#include <map>
#include <unordered_map>
#include <cassert>
#include <bitset>
#include <queue>
#include <list>
#include <functional>

using namespace std;

#include "CommonMacroFunction.h"
#include "RandomFuction.h"
#include "SingletonBase.h"
#include "KeyManager.h"
#include "ImageManager.h"
#include "TempSoundManager.h"
#include "Player.h"
#include "Map.h"
#include "Cursor.h"
#include "Ui.h"
#include "FontManager.h"


#define RND RandomFunction::getSingleton()
#define KEYMANAGER KeyManager::getSingleton()
#define IMAGEMANAGER ImageManager::getSingleton()
#define TEMPSOUNDMANAGER TempSoundManager::getSingleton()
#define FONTMANAGER FontManager::getSingleton()
#define PLAYER Player::getSingleton()
#define MAP Map::getSingleton()
#define CURSOR Cursor::getSingleton()
#define UI Ui::getSingleton()


//#define //FULLSCREEN

#define WINNAME (LPTSTR)(TEXT("Diablo 2"))

#ifdef FULLSCREEN

#define WINSTART_X
#define WiNSTART_Y
#define WINSIZE_X 
#define WINSZIE_Y 
#define WINSTYLE  

#else

#define WINSTART_X 500
#define WINSTART_Y 300
#define WINSIZE_X 800
#define WINSIZE_Y 600
#define WINSTYLE  WS_CAPTION | WS_SYSMENU

#endif

#define SAFE_DELETE(p)			{if(p) delete (p); (p) = nullptr;}
#define SAFE_DELETE_ARRAY(p)	{if(p) delete[] (p); (p) = nullptr;}
#define SAFE_RELEASE(p)			{if(p) {(p)->release(); (p) = nullptr;}}

extern HINSTANCE _hInstance;
extern HWND _hWnd;
extern POINT _ptMouse;

#define PI 3.14