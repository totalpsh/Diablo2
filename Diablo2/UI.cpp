#include "Stdafx.h"
#include "Ui.h"

HRESULT Ui::init()
{
	_lButton = RectMakeCenter(WINSIZE_X / 800 * 140, WINSIZE_Y / 600 * 577, 48, 48);
	_rButton = RectMakeCenter(WINSIZE_X / 800 * 660, WINSIZE_Y / 600 * 577, 48, 48);

	IMAGEMANAGER->addFrameImage("Ŀ��", "Resources/Images/Object/Ŀ��.bmp", 256, 28, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("���", "Resources/Images/Object/UI/HUDUI.bmp", 800, 103, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("hp��", "Resources/Images/Object/UI/HP��.bmp", 80, 80, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("mp��", "Resources/Images/Object/UI/MP��.bmp", 80, 80, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("��Ÿ��Ŭ��", "Resources/Images/Object/Button/��Ÿ��Ŭ��.bmp", 48, 48);
	IMAGEMANAGER->addImage("��ŸŬ��", "Resources/Images/Object/Button/��ŸŬ��.bmp", 48, 48);
	IMAGEMANAGER->addImage("���̾�������ܳ�Ŭ��", "Resources/Images/Object/Button/���̾����Ŭ��.bmp", 48, 48);
	IMAGEMANAGER->addImage("���̾��������Ŭ��", "Resources/Images/Object/Button/ ���̾��Ŭ��.bmp", 48, 48);

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
	IMAGEMANAGER->render("���", hdc, 0, WINSIZE_Y / 600 * 497);
	IMAGEMANAGER->render("hp��", hdc, WINSIZE_X / 800 * 28, WINSIZE_Y / 600 * 508);
	IMAGEMANAGER->render("mp��", hdc, WINSIZE_X / 800 * 692, WINSIZE_Y / 600 * 508);

	if (_rClick == false)
	{
		IMAGEMANAGER->render("��Ÿ��Ŭ��", hdc, _rButton.left, _rButton.top);
	}
	else
	{
		IMAGEMANAGER->render("��ŸŬ��", hdc, _rButton.left, _rButton.top);
	}

	IMAGEMANAGER->render("��Ÿ��Ŭ��", hdc, WINSIZE_X / 800 * 116, WINSIZE_Y / 600 * 553, 0, 0, 48, 48, 48, 48);


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

	IMAGEMANAGER->frameRender("Ŀ��", hdc, _ptMouse.x, _ptMouse.y, cursorframe(), 0);

}
