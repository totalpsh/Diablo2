#include "Stdafx.h"
#include "LoadingScene.h"

HRESULT LoadingScene::init(void)
{
	IMAGEMANAGER->addImage("�ε����", "Resource/Images/Background/�ε����.bmp", 1280, 720);
	IMAGEMANAGER->addFrameImage("�ε���", "Resources/Images/Background/�ε�.bmp", 2880, 288, 10, 1, true, RGB(255, 0, 255));

	count = 0;

	frameX = 0;

	_next = false;

	return S_OK;
}

void LoadingScene::release(void)
{
}

void LoadingScene::update(void)
{
	count++;

	if (count % 20 == 0)
	{
		frameX++;

		if (frameX == 10)
		{
			_next = true;
		}
	}

}

void LoadingScene::render(void)
{
	IMAGEMANAGER->render("�ε����", getMemDC(), 0, 0, 0, 0, 1280, 720, WINSIZE_X, WINSIZE_Y);
	IMAGEMANAGER->frameRender("�ε���", getMemDC(), WINSIZE_X / 800 * 250, WINSIZE_Y / 600 * 140, frameX, 0);
}
