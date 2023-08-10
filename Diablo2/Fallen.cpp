#include "Stdafx.h"
#include "Fallen.h"


Fallen::Fallen()
{
	IMAGEMANAGER->addFrameImage("폴른_대기", "Resources/Images/Object/Monster/Fallen/폴른_IDLE.bmp", 1180, 548, 20, 8, true, RGB(255, 0, 255));

	for (int i = 0; i < 3; i++)
	{
		_fallen._name = "폴른";
		_fallen._att = 10;
		_fallen.ranX = RND->getFromIntTo(-160, 160);
		_fallen.ranY = RND->getFromIntTo(-80, 80);
		_fallen._monX = MAP->getTileInfo(4, 4)._pivotX + _fallen.ranX;
		_fallen._monY = MAP->getTileInfo(4, 4)._pivotY + _fallen.ranY;
		_fallen._hp = 100;
		_fallen._die = false;
		_fallen._monster = RectMakeCenter(_fallen._monX, _fallen._monY, 59, 68);
		_fallen._range = RectMake(_fallen._monster.left - 320, _fallen._monster.top - 160, 640, 320);

		_fallenMake.push_back(_fallen);
	}

	_count = 0;
	_frameX = 0;
}

Fallen::~Fallen()
{
}

void Fallen::FallenUpdate()
{
	_count++;

	if (_count % 3 == 0)
	{
		_frameX++;

		if (_frameX > 20)
		{
			_frameX = 0;
		}
	}

	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			MAP->getTileInfo(j, i)._pivotX;
			MAP->getTileInfo(j, i)._pivotY;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		_fallenMake.at(i)._monX = MAP->getTileInfo(4, 4)._pivotX + _fallenMake.at(i).ranX;
		_fallenMake.at(i)._monY = MAP->getTileInfo(4, 4)._pivotY + _fallenMake.at(i).ranY;

		_fallenMake.at(i)._monster = RectMakeCenter(_fallenMake.at(i)._monX, _fallenMake.at(i)._monY, 59, 68);

		_fallenRgn.push_back(_fallenMake.at(i)._monster);
	}
}

void Fallen::MakeFallen(HDC hdc)
{
	if (KEYMANAGER->isToggleKey(VK_F1))
	{
		for (int i = 0; i < 3; i++)
		{
			DrawRectMake(hdc, _fallenMake.at(i)._monster);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		IMAGEMANAGER->frameRender("폴른_대기", hdc, _fallenMake.at(i)._monster.left, _fallenMake.at(i)._monster.top, _frameX, 3);
	}

	/*for (int i = 0; i < 3; i++)
	{
		if (PtInRect(&_fallenRgn.at(i), _ptMouse))
		{
			IMAGEMANAGER->render("몬스터체력바", hdc, 340, 0, 0, 0, 120, 30);
		}

	}*/

}
