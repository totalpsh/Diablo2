#include "Stdafx.h"
#include "Cursor.h"

HRESULT Cursor::init()
{
	IMAGEMANAGER->addFrameImage("커서", "Resources/Images/Object/커서.bmp", 256, 28, 8, 1, true, RGB(255, 0, 255));

	_count = 0;
	_cursorFrame = 0;

	return S_OK;
}

Cursor::~Cursor()
{
}

void Cursor::update()
{
	_count++;

	if (_count % 40 == 0)
	{
		_cursorFrame++;
		
		if (_cursorFrame > 8)
		{
			_cursorFrame = 0;
		}
	}
}

void Cursor::render(HDC hdc)
{
	ShowCursor(false);

	IMAGEMANAGER->frameRender("커서", hdc, _ptMouse.x, _ptMouse.y, _cursorFrame, 0);
}