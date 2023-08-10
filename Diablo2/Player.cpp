 #include "Stdafx.h"
#include "Player.h"

HRESULT Player::init()
{
	_rcPlayer = RectMakeCenter(WINSIZE_X / 2, WINSIZE_Y / 2, 34, 70);
	
	IMAGEMANAGER->addFrameImage("대기_남", "Resources/Images/Object/town_stand/소서리스-남.bmp", 544, 68, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_남남서", "Resources/Images/Object/town_stand/소서리스-남남서.bmp", 544, 68, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_남서", "Resources/Images/Object/town_stand/소서리스-남서.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_서남서", "Resources/Images/Object/town_stand/소서리스-서남서.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_서", "Resources/Images/Object/town_stand/소서리스-서.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_서북서", "Resources/Images/Object/town_stand/소서리스-서북서.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_북서", "Resources/Images/Object/town_stand/소서리스-북서.bmp", 544, 70, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_북북서", "Resources/Images/Object/town_stand/소서리스-북북서.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_북", "Resources/Images/Object/town_stand/소서리스-북.bmp", 544, 68, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_북북동", "Resources/Images/Object/town_stand/소서리스-북북동.bmp", 544, 68, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_북동", "Resources/Images/Object/town_stand/소서리스-북동.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_동북동", "Resources/Images/Object/town_stand/소서리스-동북동.bmp", 544, 71, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_동", "Resources/Images/Object/town_stand/소서리스-동.bmp", 544, 73, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_동남동", "Resources/Images/Object/town_stand/소서리스-동남동.bmp", 544, 73, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_남동", "Resources/Images/Object/town_stand/소서리스-남동.bmp", 544, 72, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("대기_남남동", "Resources/Images/Object/town_stand/소서리스-남남동.bmp", 544, 71, 16, 1, true, RGB(255, 0, 255));

	IMAGEMANAGER->addFrameImage("마을 걷기_남", "Resources/Images/Object/town_walk/마을걷기-남.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_남남서", "Resources/Images/Object/town_walk/마을걷기-남남서.bmp", 320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_남서", "Resources/Images/Object/town_walk/마을걷기-남서.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_서남서", "Resources/Images/Object/town_walk/마을걷기-서남서.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_서", "Resources/Images/Object/town_walk/마을걷기-서.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_서북서", "Resources/Images/Object/town_walk/마을걷기-서북서.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_북서", "Resources/Images/Object/town_walk/마을걷기-북서.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_북북서", "Resources/Images/Object/town_walk/마을걷기-북북서.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_북", "Resources/Images/Object/town_walk/마을걷기-북.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_북북동", "Resources/Images/Object/town_walk/마을걷기-북북동.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_북동", "Resources/Images/Object/town_walk/마을걷기-북동.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_동북동", "Resources/Images/Object/town_walk/마을걷기-동북동.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_동", "Resources/Images/Object/town_walk/마을걷기-동.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_동남동", "Resources/Images/Object/town_walk/마을걷기-동남동.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_남동", "Resources/Images/Object/town_walk/마을걷기-남동.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("마을 걷기_남남동", "Resources/Images/Object/town_walk/마을걷기-남남동.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));

	// 전투 대기
	IMAGEMANAGER->addFrameImage("전투_대기", "Resources/Images/Object/field_stand/전투-대기.bmp", 528, 1152, 8, 16, true, RGB(255, 0, 255));

	// 평타
	IMAGEMANAGER->addFrameImage("평타", "Resources/Images/Object/Attack/공격.bmp", 1200, 1440, 10, 16, true, RGB(255, 0, 255));

	// 캐스팅 (스킬 시전)
	IMAGEMANAGER->addFrameImage("스킬캐스팅", "Resources/Images/Object/casting/캐스팅.bmp", 1246, 1488, 14, 16, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("파이어캐스팅", "Resources/Images/Object/Skill/파이어캐스팅.bmp", 1638, 164, 14, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("텔포", "Resources/Images/Object/Skill/텔레포트.bmp", 2448, 154, 18, 1, true, RGB(255, 0, 255));

	// 달리기
	IMAGEMANAGER->addFrameImage("달리기", "Resources/Images/Object/Run/달리기.bmp", 488, 1168, 8, 16, true, RGB(255, 0, 255));

	
	_ptPlayer.x = (_rcPlayer.right - _rcPlayer.left) / 2 + _rcPlayer.left;
	_ptPlayer.y = _rcPlayer.bottom;
	
	_count = 0;
	_frameX = 0;

	_destination.x = 0;
	_destination.y = 0;

	_deltaX = 0;
	_deltaY = 0;
	_angle = 0;

	_stateType = TOWN_IDLE;
	_directType = SOUTH;

	// 테두리
	IMAGEMANAGER->addImage("UI테두리오른쪽", "Resources/Images/Object/UI/오른쪽UI테두리.bmp", 400, 600, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("UI테두리왼쪽", "Resources/Images/Object/UI/왼쪽UI테두리.bmp", 400, 600, true, RGB(255, 0, 255));

	// 스탯창
	IMAGEMANAGER->addImage("스텟", "Resources/Images/Object/UI/스테이터스패널.bmp", 320, 432, true, RGB(255, 0, 255));

	_playerInfo._name = "NLBO";
	_playerInfo._classes = "소서리스";
	_playerInfo._hp = 40;
	_playerInfo._hpnow = _playerInfo._hp;
	_playerInfo._mpnow = _playerInfo._mp;
	_playerInfo._level = 1;
	_playerInfo._exp = 0;
	_playerInfo._nexp = 500;
	_playerInfo._strength = 10;
	_playerInfo._dex = 25;
	_playerInfo._vital = 10;
	_playerInfo._energy = 35;
	_playerInfo._damage = 5;
	_playerInfo._damageMg = 5;
	_playerInfo._ratingL = 75;
	_playerInfo._ratingR = 75;
	_playerInfo._defence = 6;
	_playerInfo._stamina = 74;
	_playerInfo._staminanow = _playerInfo._stamina;
	_playerInfo._fireRes = 0;
	_playerInfo._coldRes = 0;
	_playerInfo._lightRes = 0;
	_playerInfo._poisonRes = 0;
	_playerInfo._gold = 0;

	// 인벤토리
	_inven = new Inventory;

	// 스킬
	_skill = new Skill;
	_onSkill = false;
	
	_onAttack = false;
	_teleport = true;

	return S_OK;
}


Player::~Player()
{
	delete _inven;
	delete _skill;
}


void Player::PlayerStatusRend(HDC hdc)
{
	if (KEYMANAGER->isToggleKey(0x41))
	{
		IMAGEMANAGER->render("UI테두리왼쪽", hdc, 0, 0);
		IMAGEMANAGER->render("스텟", hdc, WINSIZE_X / 800 * 80, WINSIZE_Y / 600 * 65, 0, 0, 320, 432, 320, 432);

		if (KEYMANAGER->isToggleKey(VK_OEM_3))
		{
			DrawRectMake(hdc, rcstat[0]);
		}

		// 닉네임
		TextOut(hdc, 240, 105, _playerInfo._name, strlen(_playerInfo._name));
		
		// 직업
		TextOut(hdc, 460, 105, _playerInfo._classes, strlen(_playerInfo._classes));

		// 레벨
		char strlevel[10];
		wsprintf(strlevel, "%d", _playerInfo._level);
		TextOut(hdc, 163, 160, strlevel, strlen(strlevel));

		// 현재 경험치
		char strexp[10];
		wsprintf(strexp, "%d", _playerInfo._exp);
		TextOut(hdc, 300, 160, strexp, strlen(strexp));

		// 레벨업 하기 위해 필요한 경험치
		char strnexp[10];
		wsprintf(strnexp, "%d", _playerInfo._nexp);
		TextOut(hdc, 485, 160, strnexp, strlen(strnexp));

		// 힘
		char strStrength[10];
		wsprintf(strStrength, "%d", _playerInfo._strength);
		TextOut(hdc, 255, 215, strStrength, strlen(strStrength));

		// 민첨
		char strdex[10];
		wsprintf(strdex, "%d", _playerInfo._dex);
		TextOut(hdc, 255, 310, strdex, strlen(strdex));

		// 생명령
		char strvital[10];
		wsprintf(strvital, "%d", _playerInfo._vital);
		TextOut(hdc, 255, 440, strvital, strlen(strvital));

		// 에너지
		char strenergy[10];
		wsprintf(strenergy, "%d", _playerInfo._energy);
		TextOut(hdc, 255, 535, strenergy, strlen(strenergy));

		// 공격력
		char strdamage[10];
		wsprintf(strdamage, "%d", _playerInfo._damage);
		TextOut(hdc, 545, 215, strdamage, strlen(strdamage));

		// 스킬 공격력
		char strdamageMg[10];
		wsprintf(strdamageMg, "%d", _playerInfo._damageMg);
		TextOut(hdc, 545, 250, strdamageMg, strlen(strdamageMg));

		//명중
		char strrating[10];
		wsprintf(strrating, "%d", _playerInfo._ratingL);
		TextOut(hdc, 550, 305, strrating, strlen(strrating));
		
		// 방어력
		char strdefence[10];
		wsprintf(strdefence, "%d", _playerInfo._defence);
		TextOut(hdc, 552, 382, strdefence, strlen(strdefence));

		// 스태미나
		char strstamina[10];
		wsprintf(strstamina, "%d", _playerInfo._stamina);
		TextOut(hdc, 488, 440, strstamina, strlen(strstamina));

		// 현재 스테미나
		char strstaminanow[10];
		wsprintf(strstaminanow, "%d", _playerInfo._staminanow);
		TextOut(hdc, 550, 440, strstaminanow, strlen(strstaminanow));

		// 라이프
		char strhp[10];
		wsprintf(strhp, "%d", _playerInfo._hp);
		TextOut(hdc, 488, 475, strhp, strlen(strhp));
		
		// 현재 라이프
		char strhpnow[10];
		wsprintf(strhpnow, "%d", _playerInfo._hpnow);
		TextOut(hdc, 550, 475, strhpnow, strlen(strhpnow));

		// 마나
		char strmp[10];
		wsprintf(strmp, "%d", _playerInfo._mp);
		TextOut(hdc, 490, 535, strmp, strlen(strmp));

		// 현재 마나
		char strmpnow[10];
		wsprintf(strmpnow, "%d", _playerInfo._mpnow);
		TextOut(hdc, 553, 535, strmpnow, strlen(strmpnow));

		// 파이어 저항력
		char strfireres[10];
		wsprintf(strfireres, "%d", _playerInfo._fireRes);
		TextOut(hdc, 552, 593, strfireres, strlen(strfireres));

		// 콜드 저항력
		char strcoldres[10];
		wsprintf(strcoldres, "%d", _playerInfo._coldRes);
		TextOut(hdc, 552, 630, strcoldres, strlen(strcoldres));

		// 라이트닝 저항력
		char strlightres[10];
		wsprintf(strlightres, "%d", _playerInfo._lightRes);
		TextOut(hdc, 552, 665, strlightres, strlen(strlightres));

		//포이즌 저항력
		char strpoisonres[10];
		wsprintf(strpoisonres, "%d", _playerInfo._poisonRes);
		TextOut(hdc, 552, 702, strpoisonres, strlen(strpoisonres));
	}
}

double Player::CalculateAngle()
{

	if (_stateType != TOWN_IDLE)
	{

		_ptPlayer.x = (_rcPlayer.right - _rcPlayer.left) / 2 + _rcPlayer.left;
		_ptPlayer.y = _rcPlayer.bottom;

		_destination.x = _ptMouse.x;
		_destination.y = _ptMouse.y;


		// 두점 사이의 거리
		_deltaX = _destination.x - _ptPlayer.x;

		_deltaY = _destination.y - _ptPlayer.y;

		if (_deltaY < 0)
		{
			_deltaY *= -1;
		}

		// 역삼각함수
		_angle = atan2(_deltaY, _deltaX) * (180 / PI);

		if (_ptPlayer.y < _destination.y)
		{
			_angle = 360.00 - _angle;
		}

		return _angle;
	
	}
}

void Player::Situation()
{
	if (KEYMANAGER->isStayKeyDown(VK_LBUTTON))
	{
		_stateType = TOWN_WALK;


		if (KEYMANAGER->isToggleKey(0x52))
		{
			_stateType = RUN;
		}
	}
	else
	{
		_stateType = TOWN_IDLE;
	}
	
	//if (KEYMANAGER->isOnceKeyDown(VK_RBUTTON))
	//{		
	//	_onSkill = true;
	//	//_skill->Use(_angle, _skillCount);
	//}

	if (KEYMANAGER->isOnceKeyDown(VK_RBUTTON))
	{
		for (int i = 0; i < 3; i++)
		{
			if (PtInRect(&_fallenBox.at(i), _ptMouse))
			{
				_onAttack = true;
			}
			else
			{
				_onAttack = false;
			}
		}
	}
	
	//if(_onSkill == true)
	//{
	//	_stateType = SKILL;
	//}
	//else
	//{
	//	_stateType = TOWN_IDLE;
	//}
}



void Player::PlayerViewAngle()
{
	if (_angle >= 11.25 && _angle < 33.75)
	{
		_directType = EAST_NORTH_EAST;
	}
	else if (_angle >= 33.75 && _angle < 56.25)
	{
		_directType = NORTH_EAST;
	}
	else if (_angle >= 56.25 && _angle < 78.75)
	{
		_directType = NORTH_NORTH_EAST;
	}
	else if (_angle >= 78.75 && _angle < 101.25)
	{
		_directType = NORTH;
	}
	else if (_angle >= 101.25 && _angle < 123.75)
	{
		_directType = NORTH_NORTH_WEST;
	}
	else if (_angle >= 123.75 && _angle < 146.25)
	{
		_directType = NORTH_WEST;
	}
	else if (_angle >= 146.25 && _angle < 168.75)
	{
		_directType = WEST_NORTH_WEST;
	}
	else if (_angle >= 168.75 && _angle < 191.25)
	{
		_directType = WEST;
	}
	else if (_angle >= 191.25 && _angle < 213.75)
	{
		_directType = WEST_SOUTH_WEST;
	}
	else if (_angle >= 213.75 && _angle < 236.25)
	{
		_directType = SOUTH_WEST;
	}
	else if (_angle >= 236.25 && _angle < 258.75)
	{
		_directType = SOUTH_SOUTH_WEST;
	}
	else if (_angle >= 258.75 && _angle < 281.25)
	{
		_directType = SOUTH;
	}
	else if (_angle >= 281.25 && _angle < 303.75)
	{
		_directType = SOUTH_SOUTH_EAST;
	}
	else if (_angle >= 303.75 && _angle < 326.25)
	{
		_directType = SOUTH_EAST;
	}
	else if (_angle >= 326.25 && _angle < 348.75)
	{
		_directType = EAST_SOUTH_EAST;
	}
	else 
	{
		_directType = EAST;
	}
}

void Player::frame()
{
	//switch (_stateType)
	//{
	//case TOWN_IDLE:
	//	cout << "마을 대기 " << endl;
	//	break;
	//case TOWN_WALK:
	//	cout << "마을 걷기" << endl;
	//	break;
	//case SKILL:
	//	cout << "스킬" << endl;
	//	break;
	//case RUN:
	//	cout << "달리기" << endl;
	//	break;
	//case ATTACK:
	//	cout << "평타" << endl;
	//	break;
	//}

	if (_onAttack == true)
	{
		_stateType = ATTACK;
	}
	else
	{
		_stateType = TOWN_IDLE;
	}


	switch (_stateType)
	{
	case TOWN_IDLE:
		_count++;

		if (_count % 5 == 0)
		{
			_frameX++;

			if (_frameX > 16)
			{
				_frameX = 0;
			}
		}
		break;

	case TOWN_WALK:
		_count++;

		if (_count % 3 == 0)
		{
			_frameX++;

			if (_frameX > 8)
			{
				_frameX = 0;
			}
		}
		break;

	case SKILL:
		if (KEYMANAGER->isOnceKeyDown(VK_RBUTTON))
		{
			_countCast = 0;
			_frameX = 0;
		}

		_countCast++;
		
		if (_countCast % 2 == 0)
		{
			_frameX++;
		}

		break;

	case RUN:

		_count++;

		if (_count % 2 == 0)
		{
			_frameX++;

			if (_frameX > 8)
			{
				_frameX = 0;
			}
		}
		break;

	case ATTACK:

		if (KEYMANAGER->isOnceKeyDown(VK_RBUTTON))
		{
			_count = 0;
			_frameX = 0; 
		}
		_count++;

		if (_count % 3 == 0)
		{
			_frameX++;
		}
	}


	//cout << _count << endl;

	//if (_stateType == FIELD_IDLE)
	//{
	//	_count++;

	//	if (_count % 5 == 0)
	//	{
	//		_frameX++;

	//		if (_frameX > 8)
	//		{
	//			_frameX = 0;
	//		}
	//	}
	//}

}

void Player::PlayerRend(HDC hdc)
{
	if (KEYMANAGER->isToggleKey(VK_F1))
	{

		HBRUSH myBrush = (HBRUSH)GetStockObject(NULL_BRUSH);
		HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, myBrush);
		DrawRectMake(hdc, _camera);
		DrawRectMake(hdc, _rcPlayer);
		SelectObject(hdc, oldBrush);
		DeleteObject(myBrush);
	}

	switch (_stateType)
	{
	case TOWN_IDLE:
		switch (_directType)
		{
		case EAST:
			IMAGEMANAGER->frameRender("대기_동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case EAST_NORTH_EAST:
			IMAGEMANAGER->frameRender("대기_동북동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_EAST:
			IMAGEMANAGER->frameRender("대기_북동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_NORTH_EAST:
			IMAGEMANAGER->frameRender("대기_북북동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH:
			IMAGEMANAGER->frameRender("대기_북", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_NORTH_WEST:
			IMAGEMANAGER->frameRender("대기_북북서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_WEST:
			IMAGEMANAGER->frameRender("대기_북서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST_NORTH_WEST:
			IMAGEMANAGER->frameRender("대기_서북서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST:
			IMAGEMANAGER->frameRender("대기_서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST_SOUTH_WEST:
			IMAGEMANAGER->frameRender("대기_서남서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_WEST:
			IMAGEMANAGER->frameRender("대기_남서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_WEST:
			IMAGEMANAGER->frameRender("대기_남남서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH:
			IMAGEMANAGER->frameRender("대기_남", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_EAST:
			IMAGEMANAGER->frameRender("대기_남남동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_EAST:
			IMAGEMANAGER->frameRender("대기_남동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case EAST_SOUTH_EAST:
			IMAGEMANAGER->frameRender("대기_동남동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		}
		break;


	case TOWN_WALK:
		switch (_directType)
		{
		case EAST:
			IMAGEMANAGER->frameRender("마을 걷기_동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case EAST_NORTH_EAST:
			IMAGEMANAGER->frameRender("마을 걷기_동북동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_EAST:
			IMAGEMANAGER->frameRender("마을 걷기_북동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_NORTH_EAST:
			IMAGEMANAGER->frameRender("마을 걷기_북북동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH:
			IMAGEMANAGER->frameRender("마을 걷기_북", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_NORTH_WEST:
			IMAGEMANAGER->frameRender("마을 걷기_북북서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_WEST:
			IMAGEMANAGER->frameRender("마을 걷기_북서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST_NORTH_WEST:
			IMAGEMANAGER->frameRender("마을 걷기_서북서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST:
			IMAGEMANAGER->frameRender("마을 걷기_서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST_SOUTH_WEST:
			IMAGEMANAGER->frameRender("마을 걷기_서남서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_WEST:
			IMAGEMANAGER->frameRender("마을 걷기_남서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_WEST:
			IMAGEMANAGER->frameRender("마을 걷기_남남서", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH:
			IMAGEMANAGER->frameRender("마을 걷기_남", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_EAST:
			IMAGEMANAGER->frameRender("마을 걷기_남남동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_EAST:
			IMAGEMANAGER->frameRender("마을 걷기_남동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case EAST_SOUTH_EAST:
			IMAGEMANAGER->frameRender("마을 걷기_동남동", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		}
		break;

	case RUN:
		switch (_directType)
		{
		case SOUTH:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_WEST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 1);
			break;
		case SOUTH_WEST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 2);
			break;
		case WEST_SOUTH_WEST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 3);
			break;
		case WEST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 4);
			break;
		case WEST_NORTH_WEST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 5);
			break;
		case NORTH_WEST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 6);
			break;
		case NORTH_NORTH_WEST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 7);
			break;
		case NORTH:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 8);
			break;
		case NORTH_NORTH_EAST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 9);
			break;
		case NORTH_EAST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 10);
			break;
		case EAST_NORTH_EAST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 11);
			break;
		case EAST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 12);
			break;
		case EAST_SOUTH_EAST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 13);
			break;
		case SOUTH_EAST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 14);
			break;
		case SOUTH_SOUTH_EAST:
			IMAGEMANAGER->frameRender("달리기", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 15);
			break;
		}
		break;

	case SKILL:

		
		switch (_directType)
		{
			_skill->SkillView(hdc);
		

		case SOUTH:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 0);
			break;
		case SOUTH_SOUTH_WEST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 1);
			break;
		case SOUTH_WEST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 2);
			break;
		case WEST_SOUTH_WEST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 3);
			break;
		case WEST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 4);
			break;
		case WEST_NORTH_WEST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 5);
			break;
		case NORTH_WEST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 6);
			break;
		case NORTH_NORTH_WEST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 7);
			break;
		case NORTH:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 8);
			break;
		case NORTH_NORTH_EAST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 9);
			break;
		case NORTH_EAST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 10);
			break;
		case EAST_NORTH_EAST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 11);
			break;
		case EAST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 12);
			break;
		case EAST_SOUTH_EAST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 13);
			break;
		case SOUTH_EAST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 14);
			break;
		case SOUTH_SOUTH_EAST:
			IMAGEMANAGER->frameRender("스킬캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 15);
			break;
		}

		if (_teleport == true)
		{
				//IMAGEMANAGER->frameRender("텔포", hdc, _rcPlayer.left - 25, _rcPlayer.top - 50, 100, 150, _frameX, 0);
		}

		IMAGEMANAGER->frameRender("파이어캐스팅", hdc, _rcPlayer.left - 25, _rcPlayer.top - 50, 100, 150, _frameX, 0);
		
		break;

	case ATTACK:

		switch (_directType)
		{
		case SOUTH:
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 0);
			break;					   
		case SOUTH_SOUTH_WEST:		   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 1);
			break;					   
		case SOUTH_WEST:			   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 2);
			break;					   
		case WEST_SOUTH_WEST:		   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 3);
			break;					   
		case WEST:					   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 4);
			break;					   
		case WEST_NORTH_WEST:		   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 5);
			break;					   
		case NORTH_WEST:			   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 6);
			break;					   
		case NORTH_NORTH_WEST:		   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 7);
			break;					   
		case NORTH:					   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 8);
			break;					   
		case NORTH_NORTH_EAST:		   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 9);
			break;					   
		case NORTH_EAST:			   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 10);
			break;					   
		case EAST_NORTH_EAST:		   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 11);
			break;					   
		case EAST:					   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 12);
			break;					   
		case EAST_SOUTH_EAST:		   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 13);
			break;					   
		case SOUTH_EAST:			   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 14);
			break;					   
		case SOUTH_SOUTH_EAST:		   
			IMAGEMANAGER->frameRender("평타", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 15);
			break;
		}

	}
	//case FIELD_IDLE:
	//	IMAGEMANAGER->frameRender("전투_대기", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
	//	break;


	if (KEYMANAGER->isToggleKey(0x49))
	{
		IMAGEMANAGER->render("UI테두리오른쪽", hdc, WINSIZE_X / 2, 0);
		_inven->rendInven(hdc);
	}
		/*case STATUS:
			_status->StatusWin(hdc);
			break;*/
		
}


