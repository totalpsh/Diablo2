#include "Stdafx.h"
#include "Map.h"

HRESULT Map::init()
{
	IMAGEMANAGER->addImage("포탈_상단", "Resources/Images/BackGround/포탈_상단.bmp", 160, 79, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("포탈_하단", "Resources/Images/BackGround/포탈_하단.bmp", 160, 79, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("포탈_좌측", "Resources/Images/BackGround/포탈_좌측.bmp", 160, 79, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("포탈_우측", "Resources/Images/BackGround/포탈_우측.bmp", 160, 79, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("마을_바닥", "Resources/Images/BackGround/마을-바닥.bmp", 160, 79, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("카타콤벽1", "Resources/Images/BackGround/카타콤벽1.bmp", 160, 195, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("벽1", "Resources/Images/BackGround/벽1.bmp", 160, 299, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("벽2", "Resources/Images/BackGround/벽2.bmp", 160, 299, true, RGB(255, 0, 255));

	_width = 160;
	_height = 80;
	_halfWidth = _width / 2;
	_halfHeight = _height / 2;

	_start.x = -100;
	_start.y = -300;

	_speed = 50;

	_count = 0;

	_run = false;

	// j : y좌표, i : x좌표
	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			_tileInfo[j][i]._pivotX = _start.x + (i - j) * _halfWidth;
			_tileInfo[j][i]._pivotY = _start.y + (i + j) * _halfHeight;
		}
	}

	_inclineX = 0.5;
	_inclineY = -0.5;

	_non = RectMakeCenter(WINSIZE_X / 2, WINSIZE_Y / 600 * 578, 800, 50);

	_entryFrame = 30;
	_moveFrame = 0;
	
	_moveX = 0;
	_moveY = 0;

	index = 0;
	f = 0;

	_move = false;

	return S_OK;
}

void Map::MotionSignal()
{
	if (KEYMANAGER->isStayKeyDown(VK_LBUTTON))
	{

		_moveToX = _ptPlayer.x - _ptMouse.x;
		_moveToY = _ptPlayer.y - _ptMouse.y;

		//cout << _moveToX << "  " << _moveToY << endl;

		_moveX = _start.x - _moveToX;
		_moveY = _start.y - _moveToY;

		cout << _moveX << "  " << _moveY << endl;

		_start.x += _moveToX / _speed;//_start.x - (_ptPlayer.x * (_entryFrame - (f % 20))) + (_moveX * (f % 20)) / _entryFrame;
		_start.y += _moveToY / _speed;//_start.y - (_ptPlayer.y * (_entryFrame - (f % 20))) + (_moveY * (f % 20)) / _entryFrame;

	}

	if (KEYMANAGER->isToggleKey(0x52))
	{
		_run = true;
	}

	cout << _run << endl;

	if (_run == true)
	{
		_speed = 30;
	}
	else
	{
		_speed = 50;
	}

	cout << _speed << endl;
	
	if (KEYMANAGER->isStayKeyDown(VK_UP))
	{
		_start.y += 1;
	}
	if (KEYMANAGER->isStayKeyDown(VK_DOWN))
	{
		_start.y -= 1;
	}
	if (KEYMANAGER->isStayKeyDown(VK_LEFT))
	{
		_start.x += 1;
	}
	if (KEYMANAGER->isStayKeyDown(VK_RIGHT))
	{
		_start.x -= 1;
	}
}

// 선형 보간을 통한 이동 구현
void Map::TileMove(list<Node> path)
{
	if (KEYMANAGER->isStayKeyDown(VK_LBUTTON))
	{
		
			/*if (path.size() == 0)
			{
				break;
			}*/

			//cout << path.back()._x << " " << path.back()._y << endl;

			//_pathPointX.push_back(path.back()._x);
			//_pathPointY.push_back(path.back()._y);

			//cout << "이동 좌표: " << _pathPointX.back() << "  " << _pathPointY.back() << endl;
 
			//path.pop_back();

			//_start.x = (((_pathPointX.back() * (_entryFrame - f)) + (_ptPlayer.x * f)) / _entryFrame);
			//_start.y = (((_pathPointY.back() * (_entryFrame - f)) + (_ptPlayer.y * f)) / _entryFrame);

			//_pathPointX.pop_back();
			//_pathPointY.pop_back();
		
	}
}

void Map::MakeTile(HDC hdc)
{
	char strpos[128];

	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			if (j == 0)
			{
				IMAGEMANAGER->render("카타콤벽1", hdc, _tileInfo[j][i]._pivotX - 80, _tileInfo[j][i]._pivotY - 130);
			}
			else if (i == 0)
			{
				IMAGEMANAGER->render("벽1", hdc, _tileInfo[j][i]._pivotX, _tileInfo[j][i]._pivotY - 190);
			}
			else
			{
				IMAGEMANAGER->render("마을_바닥", hdc, _tileInfo[j][i]._pivotX - 80, _tileInfo[j][i]._pivotY - 40);
			}
		}
	}

	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			_tileInfo[j][i]._pivotX = _start.x + (i - j) * _halfWidth;
			_tileInfo[j][i]._pivotY = _start.y + (i + j) * _halfHeight;
		}
	}

	if (KEYMANAGER->isToggleKey(VK_F1))
	{
		for (int i = 0; i < 40; i++)
		{
			for (int j = 0; j < 40; j++)
			{
				wsprintf(strpos, "(%d, %d)", j, i);
				TextOut(hdc, _tileInfo[j][i]._pivotX, _tileInfo[j][i]._pivotY, strpos, strlen(strpos));

				HPEN MyPen, OldPen; // 1.핸들을 선언한다.

				MyPen = CreatePen(PS_SOLID, 1, RGB(255, 255, 255)); // 2.GDI 오브젝트를 생성한다.

				OldPen = (HPEN)SelectObject(hdc, MyPen); // 3.OldPen에 이전에 사용하던 핸들을 저장한다.

				MoveToEx(hdc, _tileInfo[j][i]._pivotX - 80, _tileInfo[j][i]._pivotY, NULL);
				LineTo(hdc, _tileInfo[j][i]._pivotX, _tileInfo[j][i]._pivotY + 40);
				LineTo(hdc, _tileInfo[j][i]._pivotX + 80, _tileInfo[j][i]._pivotY);
				LineTo(hdc, _tileInfo[j][i]._pivotX, _tileInfo[j][i]._pivotY - 40);
				LineTo(hdc, _tileInfo[j][i]._pivotX - 80, _tileInfo[j][i]._pivotY);

				SelectObject(hdc, MyPen); // 5.선택을 해제한다.
				DeleteObject(MyPen); // 6.메모리에서 삭제한다.
			}
		}
	}

	//UI 클릭시 동작 x
	//if (PtInRect(&_non, _ptMouse))
	//{
	if (KEYMANAGER->isOnceKeyDown(VK_LBUTTON))
	{
		//	
		//}


			//for (int i = 0; i < _pathPoint.size(); i++)
			//{
			//	cout << (_pathPoint.begin() + i)->x << " " << (_pathPoint.begin() + i)->y << endl;
			//}

			/*for (int k = _path.size() - 1; k >= 0; k--)
			{*/
			//	//cout << (_path.begin() + k)->_x << "  " << (_path.begin() + k)->_y << endl;

				//cout << _path.back()._x << "  " << _path.back()._y << endl;

				/*moveX = (_path.back()._x - _currentNodeX);
				moveY = (_path.back()._y - _currentNodeY);*/

				/*_moveX = ((_path.begin() + k)->_x - PlayerTile().x);
				_moveY = ((_path.begin() + k)->_y - PlayerTile().y);*/

				//cout << moveX << "  " << moveY << endl;

				/*int speedX = (moveX * 80) - (moveY * 80);
				int speedY = (moveX * 40) - (moveY * 40);*/

				/*for (int i = 0; i < 40; i++)
				{
					for (int j = 0; j < 40; j++)
					{
						_tileInfo[j][i]._pivotX -= _moveX;
						_tileInfo[j][i]._pivotY -= _moveY;
					}
				}*/
				//_moveFrame;
		/*for (int i = 0; i < 40; i++)
		{
			for (int j = 0; j < 40; j++)
			{
				_tileInfo[j][i]._pivotX = ((_pathPointX.back() * (_entryFrame - _moveFrame)) + (_ptPlayer.x * _moveFrame)) / _entryFrame;
				_tileInfo[j][i]._pivotY = ((_pathPointY.back() * (_entryFrame - _moveFrame)) + (_ptPlayer.y * _moveFrame)) / _entryFrame;
			}
		}*/
		/*
				_start.x -= _moveToX;
				_start.y -= _moveToY;*/
	}
}

POINT Map::PlayerTile()
{
	_startDrawX = _tileInfo[0][0]._pivotX;
	_startDrawY = _tileInfo[0][0]._pivotY - 40; 

	_currentX = PLAYER->getPtPlayer().y - (_inclineX * PLAYER->getPtPlayer().x); // 플레이어x의 b값
	_currentY = PLAYER->getPtPlayer().y - (_inclineY * PLAYER->getPtPlayer().x); // 플레이어y축의 b값

	_axisX = _startDrawY - (_inclineX * _startDrawX); // x축 b값
	_axisY = _startDrawY - (_inclineY * _startDrawX); // y축 b값

	_currentNodeX = abs(_currentX - _axisX) / _height;
	_currentNodeY = abs(_currentY - _axisY) / _height;

	return { _currentNodeX, _currentNodeY };
}

POINT Map::CursorTile()
{
	_startDrawX = _tileInfo[0][0]._pivotX;
	_startDrawY = _tileInfo[0][0]._pivotY - 40;

	_endX = _ptMouse.y - (_inclineX * _ptMouse.x);
	_endY = _ptMouse.y - (_inclineY * _ptMouse.x);

	_axisX = _startDrawY - (_inclineX * _startDrawX); 
	_axisY = _startDrawY - (_inclineY * _startDrawX);

	_endNodeX = abs(_endX - _axisX) / _height;
	_endNodeY = abs(_endY - _axisY) / _height;

	return { _endNodeX, _endNodeY };
}

