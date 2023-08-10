 #include "Stdafx.h"
#include "Player.h"

HRESULT Player::init()
{
	_rcPlayer = RectMakeCenter(WINSIZE_X / 2, WINSIZE_Y / 2, 34, 70);
	
	IMAGEMANAGER->addFrameImage("���_��", "Resources/Images/Object/town_stand/�Ҽ�����-��.bmp", 544, 68, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_������", "Resources/Images/Object/town_stand/�Ҽ�����-������.bmp", 544, 68, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_����", "Resources/Images/Object/town_stand/�Ҽ�����-����.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_������", "Resources/Images/Object/town_stand/�Ҽ�����-������.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_��", "Resources/Images/Object/town_stand/�Ҽ�����-��.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_���ϼ�", "Resources/Images/Object/town_stand/�Ҽ�����-���ϼ�.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_�ϼ�", "Resources/Images/Object/town_stand/�Ҽ�����-�ϼ�.bmp", 544, 70, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_�Ϻϼ�", "Resources/Images/Object/town_stand/�Ҽ�����-�Ϻϼ�.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_��", "Resources/Images/Object/town_stand/�Ҽ�����-��.bmp", 544, 68, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_�Ϻϵ�", "Resources/Images/Object/town_stand/�Ҽ�����-�Ϻϵ�.bmp", 544, 68, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_�ϵ�", "Resources/Images/Object/town_stand/�Ҽ�����-�ϵ�.bmp", 544, 69, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_���ϵ�", "Resources/Images/Object/town_stand/�Ҽ�����-���ϵ�.bmp", 544, 71, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_��", "Resources/Images/Object/town_stand/�Ҽ�����-��.bmp", 544, 73, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_������", "Resources/Images/Object/town_stand/�Ҽ�����-������.bmp", 544, 73, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_����", "Resources/Images/Object/town_stand/�Ҽ�����-����.bmp", 544, 72, 16, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���_������", "Resources/Images/Object/town_stand/�Ҽ�����-������.bmp", 544, 71, 16, 1, true, RGB(255, 0, 255));

	IMAGEMANAGER->addFrameImage("���� �ȱ�_��", "Resources/Images/Object/town_walk/�����ȱ�-��.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_������", "Resources/Images/Object/town_walk/�����ȱ�-������.bmp", 320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_����", "Resources/Images/Object/town_walk/�����ȱ�-����.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_������", "Resources/Images/Object/town_walk/�����ȱ�-������.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_��", "Resources/Images/Object/town_walk/�����ȱ�-��.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_���ϼ�", "Resources/Images/Object/town_walk/�����ȱ�-���ϼ�.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_�ϼ�", "Resources/Images/Object/town_walk/�����ȱ�-�ϼ�.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_�Ϻϼ�", "Resources/Images/Object/town_walk/�����ȱ�-�Ϻϼ�.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_��", "Resources/Images/Object/town_walk/�����ȱ�-��.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_�Ϻϵ�", "Resources/Images/Object/town_walk/�����ȱ�-�Ϻϵ�.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_�ϵ�", "Resources/Images/Object/town_walk/�����ȱ�-�ϵ�.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_���ϵ�", "Resources/Images/Object/town_walk/�����ȱ�-���ϵ�.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_��", "Resources/Images/Object/town_walk/�����ȱ�-��.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_������", "Resources/Images/Object/town_walk/�����ȱ�-������.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_����", "Resources/Images/Object/town_walk/�����ȱ�-����.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���� �ȱ�_������", "Resources/Images/Object/town_walk/�����ȱ�-������.bmp",320, 73, 8, 1, true, RGB(255, 0, 255));

	// ���� ���
	IMAGEMANAGER->addFrameImage("����_���", "Resources/Images/Object/field_stand/����-���.bmp", 528, 1152, 8, 16, true, RGB(255, 0, 255));

	// ��Ÿ
	IMAGEMANAGER->addFrameImage("��Ÿ", "Resources/Images/Object/Attack/����.bmp", 1200, 1440, 10, 16, true, RGB(255, 0, 255));

	// ĳ���� (��ų ����)
	IMAGEMANAGER->addFrameImage("��ųĳ����", "Resources/Images/Object/casting/ĳ����.bmp", 1246, 1488, 14, 16, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("���̾�ĳ����", "Resources/Images/Object/Skill/���̾�ĳ����.bmp", 1638, 164, 14, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("����", "Resources/Images/Object/Skill/�ڷ���Ʈ.bmp", 2448, 154, 18, 1, true, RGB(255, 0, 255));

	// �޸���
	IMAGEMANAGER->addFrameImage("�޸���", "Resources/Images/Object/Run/�޸���.bmp", 488, 1168, 8, 16, true, RGB(255, 0, 255));

	
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

	// �׵θ�
	IMAGEMANAGER->addImage("UI�׵θ�������", "Resources/Images/Object/UI/������UI�׵θ�.bmp", 400, 600, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("UI�׵θ�����", "Resources/Images/Object/UI/����UI�׵θ�.bmp", 400, 600, true, RGB(255, 0, 255));

	// ����â
	IMAGEMANAGER->addImage("����", "Resources/Images/Object/UI/�������ͽ��г�.bmp", 320, 432, true, RGB(255, 0, 255));

	_playerInfo._name = "NLBO";
	_playerInfo._classes = "�Ҽ�����";
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

	// �κ��丮
	_inven = new Inventory;

	// ��ų
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
		IMAGEMANAGER->render("UI�׵θ�����", hdc, 0, 0);
		IMAGEMANAGER->render("����", hdc, WINSIZE_X / 800 * 80, WINSIZE_Y / 600 * 65, 0, 0, 320, 432, 320, 432);

		if (KEYMANAGER->isToggleKey(VK_OEM_3))
		{
			DrawRectMake(hdc, rcstat[0]);
		}

		// �г���
		TextOut(hdc, 240, 105, _playerInfo._name, strlen(_playerInfo._name));
		
		// ����
		TextOut(hdc, 460, 105, _playerInfo._classes, strlen(_playerInfo._classes));

		// ����
		char strlevel[10];
		wsprintf(strlevel, "%d", _playerInfo._level);
		TextOut(hdc, 163, 160, strlevel, strlen(strlevel));

		// ���� ����ġ
		char strexp[10];
		wsprintf(strexp, "%d", _playerInfo._exp);
		TextOut(hdc, 300, 160, strexp, strlen(strexp));

		// ������ �ϱ� ���� �ʿ��� ����ġ
		char strnexp[10];
		wsprintf(strnexp, "%d", _playerInfo._nexp);
		TextOut(hdc, 485, 160, strnexp, strlen(strnexp));

		// ��
		char strStrength[10];
		wsprintf(strStrength, "%d", _playerInfo._strength);
		TextOut(hdc, 255, 215, strStrength, strlen(strStrength));

		// ��÷
		char strdex[10];
		wsprintf(strdex, "%d", _playerInfo._dex);
		TextOut(hdc, 255, 310, strdex, strlen(strdex));

		// �����
		char strvital[10];
		wsprintf(strvital, "%d", _playerInfo._vital);
		TextOut(hdc, 255, 440, strvital, strlen(strvital));

		// ������
		char strenergy[10];
		wsprintf(strenergy, "%d", _playerInfo._energy);
		TextOut(hdc, 255, 535, strenergy, strlen(strenergy));

		// ���ݷ�
		char strdamage[10];
		wsprintf(strdamage, "%d", _playerInfo._damage);
		TextOut(hdc, 545, 215, strdamage, strlen(strdamage));

		// ��ų ���ݷ�
		char strdamageMg[10];
		wsprintf(strdamageMg, "%d", _playerInfo._damageMg);
		TextOut(hdc, 545, 250, strdamageMg, strlen(strdamageMg));

		//����
		char strrating[10];
		wsprintf(strrating, "%d", _playerInfo._ratingL);
		TextOut(hdc, 550, 305, strrating, strlen(strrating));
		
		// ����
		char strdefence[10];
		wsprintf(strdefence, "%d", _playerInfo._defence);
		TextOut(hdc, 552, 382, strdefence, strlen(strdefence));

		// ���¹̳�
		char strstamina[10];
		wsprintf(strstamina, "%d", _playerInfo._stamina);
		TextOut(hdc, 488, 440, strstamina, strlen(strstamina));

		// ���� ���׹̳�
		char strstaminanow[10];
		wsprintf(strstaminanow, "%d", _playerInfo._staminanow);
		TextOut(hdc, 550, 440, strstaminanow, strlen(strstaminanow));

		// ������
		char strhp[10];
		wsprintf(strhp, "%d", _playerInfo._hp);
		TextOut(hdc, 488, 475, strhp, strlen(strhp));
		
		// ���� ������
		char strhpnow[10];
		wsprintf(strhpnow, "%d", _playerInfo._hpnow);
		TextOut(hdc, 550, 475, strhpnow, strlen(strhpnow));

		// ����
		char strmp[10];
		wsprintf(strmp, "%d", _playerInfo._mp);
		TextOut(hdc, 490, 535, strmp, strlen(strmp));

		// ���� ����
		char strmpnow[10];
		wsprintf(strmpnow, "%d", _playerInfo._mpnow);
		TextOut(hdc, 553, 535, strmpnow, strlen(strmpnow));

		// ���̾� ���׷�
		char strfireres[10];
		wsprintf(strfireres, "%d", _playerInfo._fireRes);
		TextOut(hdc, 552, 593, strfireres, strlen(strfireres));

		// �ݵ� ���׷�
		char strcoldres[10];
		wsprintf(strcoldres, "%d", _playerInfo._coldRes);
		TextOut(hdc, 552, 630, strcoldres, strlen(strcoldres));

		// ����Ʈ�� ���׷�
		char strlightres[10];
		wsprintf(strlightres, "%d", _playerInfo._lightRes);
		TextOut(hdc, 552, 665, strlightres, strlen(strlightres));

		//������ ���׷�
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


		// ���� ������ �Ÿ�
		_deltaX = _destination.x - _ptPlayer.x;

		_deltaY = _destination.y - _ptPlayer.y;

		if (_deltaY < 0)
		{
			_deltaY *= -1;
		}

		// ���ﰢ�Լ�
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
	//	cout << "���� ��� " << endl;
	//	break;
	//case TOWN_WALK:
	//	cout << "���� �ȱ�" << endl;
	//	break;
	//case SKILL:
	//	cout << "��ų" << endl;
	//	break;
	//case RUN:
	//	cout << "�޸���" << endl;
	//	break;
	//case ATTACK:
	//	cout << "��Ÿ" << endl;
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
			IMAGEMANAGER->frameRender("���_��", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case EAST_NORTH_EAST:
			IMAGEMANAGER->frameRender("���_���ϵ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_EAST:
			IMAGEMANAGER->frameRender("���_�ϵ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_NORTH_EAST:
			IMAGEMANAGER->frameRender("���_�Ϻϵ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH:
			IMAGEMANAGER->frameRender("���_��", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_NORTH_WEST:
			IMAGEMANAGER->frameRender("���_�Ϻϼ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_WEST:
			IMAGEMANAGER->frameRender("���_�ϼ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST_NORTH_WEST:
			IMAGEMANAGER->frameRender("���_���ϼ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST:
			IMAGEMANAGER->frameRender("���_��", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST_SOUTH_WEST:
			IMAGEMANAGER->frameRender("���_������", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_WEST:
			IMAGEMANAGER->frameRender("���_����", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_WEST:
			IMAGEMANAGER->frameRender("���_������", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH:
			IMAGEMANAGER->frameRender("���_��", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_EAST:
			IMAGEMANAGER->frameRender("���_������", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_EAST:
			IMAGEMANAGER->frameRender("���_����", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case EAST_SOUTH_EAST:
			IMAGEMANAGER->frameRender("���_������", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		}
		break;


	case TOWN_WALK:
		switch (_directType)
		{
		case EAST:
			IMAGEMANAGER->frameRender("���� �ȱ�_��", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case EAST_NORTH_EAST:
			IMAGEMANAGER->frameRender("���� �ȱ�_���ϵ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_EAST:
			IMAGEMANAGER->frameRender("���� �ȱ�_�ϵ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_NORTH_EAST:
			IMAGEMANAGER->frameRender("���� �ȱ�_�Ϻϵ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH:
			IMAGEMANAGER->frameRender("���� �ȱ�_��", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_NORTH_WEST:
			IMAGEMANAGER->frameRender("���� �ȱ�_�Ϻϼ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case NORTH_WEST:
			IMAGEMANAGER->frameRender("���� �ȱ�_�ϼ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST_NORTH_WEST:
			IMAGEMANAGER->frameRender("���� �ȱ�_���ϼ�", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST:
			IMAGEMANAGER->frameRender("���� �ȱ�_��", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case WEST_SOUTH_WEST:
			IMAGEMANAGER->frameRender("���� �ȱ�_������", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_WEST:
			IMAGEMANAGER->frameRender("���� �ȱ�_����", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_WEST:
			IMAGEMANAGER->frameRender("���� �ȱ�_������", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH:
			IMAGEMANAGER->frameRender("���� �ȱ�_��", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_EAST:
			IMAGEMANAGER->frameRender("���� �ȱ�_������", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_EAST:
			IMAGEMANAGER->frameRender("���� �ȱ�_����", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		case EAST_SOUTH_EAST:
			IMAGEMANAGER->frameRender("���� �ȱ�_������", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
			break;
		}
		break;

	case RUN:
		switch (_directType)
		{
		case SOUTH:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 0);
			break;
		case SOUTH_SOUTH_WEST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 1);
			break;
		case SOUTH_WEST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 2);
			break;
		case WEST_SOUTH_WEST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 3);
			break;
		case WEST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 4);
			break;
		case WEST_NORTH_WEST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 5);
			break;
		case NORTH_WEST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 6);
			break;
		case NORTH_NORTH_WEST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 7);
			break;
		case NORTH:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 8);
			break;
		case NORTH_NORTH_EAST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 9);
			break;
		case NORTH_EAST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 10);
			break;
		case EAST_NORTH_EAST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 11);
			break;
		case EAST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 12);
			break;
		case EAST_SOUTH_EAST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 13);
			break;
		case SOUTH_EAST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 14);
			break;
		case SOUTH_SOUTH_EAST:
			IMAGEMANAGER->frameRender("�޸���", hdc, _rcPlayer.left , _rcPlayer.top, _frameX, 15);
			break;
		}
		break;

	case SKILL:

		
		switch (_directType)
		{
			_skill->SkillView(hdc);
		

		case SOUTH:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 0);
			break;
		case SOUTH_SOUTH_WEST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 1);
			break;
		case SOUTH_WEST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 2);
			break;
		case WEST_SOUTH_WEST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 3);
			break;
		case WEST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 4);
			break;
		case WEST_NORTH_WEST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 5);
			break;
		case NORTH_WEST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 6);
			break;
		case NORTH_NORTH_WEST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 7);
			break;
		case NORTH:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 8);
			break;
		case NORTH_NORTH_EAST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 9);
			break;
		case NORTH_EAST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 10);
			break;
		case EAST_NORTH_EAST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 11);
			break;
		case EAST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 12);
			break;
		case EAST_SOUTH_EAST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 13);
			break;
		case SOUTH_EAST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 14);
			break;
		case SOUTH_SOUTH_EAST:
			IMAGEMANAGER->frameRender("��ųĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 15);
			break;
		}

		if (_teleport == true)
		{
				//IMAGEMANAGER->frameRender("����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 50, 100, 150, _frameX, 0);
		}

		IMAGEMANAGER->frameRender("���̾�ĳ����", hdc, _rcPlayer.left - 25, _rcPlayer.top - 50, 100, 150, _frameX, 0);
		
		break;

	case ATTACK:

		switch (_directType)
		{
		case SOUTH:
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 0);
			break;					   
		case SOUTH_SOUTH_WEST:		   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 1);
			break;					   
		case SOUTH_WEST:			   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 2);
			break;					   
		case WEST_SOUTH_WEST:		   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 3);
			break;					   
		case WEST:					   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 4);
			break;					   
		case WEST_NORTH_WEST:		   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 5);
			break;					   
		case NORTH_WEST:			   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 6);
			break;					   
		case NORTH_NORTH_WEST:		   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 7);
			break;					   
		case NORTH:					   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 8);
			break;					   
		case NORTH_NORTH_EAST:		   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 9);
			break;					   
		case NORTH_EAST:			   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 10);
			break;					   
		case EAST_NORTH_EAST:		   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 11);
			break;					   
		case EAST:					   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 12);
			break;					   
		case EAST_SOUTH_EAST:		   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 13);
			break;					   
		case SOUTH_EAST:			   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 14);
			break;					   
		case SOUTH_SOUTH_EAST:		   
			IMAGEMANAGER->frameRender("��Ÿ", hdc, _rcPlayer.left - 25, _rcPlayer.top - 25, _frameX, 15);
			break;
		}

	}
	//case FIELD_IDLE:
	//	IMAGEMANAGER->frameRender("����_���", hdc, _rcPlayer.left, _rcPlayer.top, _frameX, 0);
	//	break;


	if (KEYMANAGER->isToggleKey(0x49))
	{
		IMAGEMANAGER->render("UI�׵θ�������", hdc, WINSIZE_X / 2, 0);
		_inven->rendInven(hdc);
	}
		/*case STATUS:
			_status->StatusWin(hdc);
			break;*/
		
}


