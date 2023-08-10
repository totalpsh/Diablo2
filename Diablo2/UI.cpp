#include "Stdafx.h"
#include "Ui.h"

HRESULT Ui::init()
{
	_lButton = RectMakeCenter(WINSIZE_X / 800 * 140, WINSIZE_Y / 600 * 577, 48, 48);
	_rButton = RectMakeCenter(WINSIZE_X / 800 * 660, WINSIZE_Y / 600 * 577, 48, 48);

	IMAGEMANAGER->addFrameImage("커서", "Resources/Images/Object/커서.bmp", 256, 28, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("허드", "Resources/Images/Object/UI/HUDUI.bmp", 800, 103, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("hp볼", "Resources/Images/Object/UI/HP볼.bmp", 80, 80, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("mp볼", "Resources/Images/Object/UI/MP볼.bmp", 80, 80, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("평타논클릭", "Resources/Images/Object/Button/평타논클릭.bmp", 48, 48);
	IMAGEMANAGER->addImage("평타클릭", "Resources/Images/Object/Button/평타클릭.bmp", 48, 48);
	IMAGEMANAGER->addImage("파이어월아이콘논클릭", "Resources/Images/Object/Button/파이어월논클릭.bmp", 48, 48);
	IMAGEMANAGER->addImage("파이어월아이콘클릭", "Resources/Images/Object/Button/ 파이어월클릭.bmp", 48, 48);

	_lClick = false;
	_rClick = false;

	return S_OK;
}

Ui::~Ui()
{

}

void Ui::updateUI()
{
	if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
	{
		if (PtInRect(&_lButton, _ptMouse))
		{
			_lClick = true;
		}
	}

	if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
	{
		if (PtInRect(&_rButton, _ptMouse))
		{
			_rClick = true;
		}
	}
	if (KEYMANAGER->isOnceKeyUp(VK_LBUTTON))
	{
		if (PtInRect(&_rButton, _ptMouse))
		{
			_rClick = false;
		}
	}

}

void Ui::rendUI(HDC hdc)
{
	IMAGEMANAGER->render("허드", hdc, 0, WINSIZE_Y / 600 * 497);
	IMAGEMANAGER->render("hp볼", hdc, WINSIZE_X / 800 * 28, WINSIZE_Y / 600 * 508);
	IMAGEMANAGER->render("mp볼", hdc, WINSIZE_X / 800 * 692, WINSIZE_Y / 600 * 508);

	if (_rClick == false)
	{
		IMAGEMANAGER->render("평타논클릭", hdc, _rButton.left, _rButton.top);
	}
	else
	{
		IMAGEMANAGER->render("평타클릭", hdc, _rButton.left, _rButton.top);
	}

	IMAGEMANAGER->render("평타논클릭", hdc, WINSIZE_X / 800 * 116, WINSIZE_Y / 600 * 553, 0, 0, 48, 48, 48, 48);


	if (KEYMANAGER->isToggleKey(VK_F1))
	{
		DrawRectMake(hdc, _rButton);
		DrawRectMake(hdc, _lButton);
	}

}

int Ui::cursorframe()
{
	int count = 0;
	int frameX = 0;

	count++;
	
	if (count % 3 == 0)
	{
		frameX++;

		if (frameX > 6)
		{
			frameX = 0;
		}
	}

	return frameX;
}

void Ui::cursorRender(HDC hdc)
{

	ShowCursor(false);

	IMAGEMANAGER->frameRender("커서", hdc, _ptMouse.x, _ptMouse.y, cursorframe(), 0);

}
