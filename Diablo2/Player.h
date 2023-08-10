#pragma once
#include "SingletonBase.h"
#include "Inventory.h"
#include "Skill.h"

class Player : public SingletonBase <Player>
{
private:

	enum PlayerState
	{
		TOWN_IDLE,
		TOWN_WALK,
		FIELD_IDLE,
		FIELD_WALK,
		ATTACK,
		HIT,
		SKILL,
		RUN
	};

	enum Direction
	{
		EAST,
		EAST_NORTH_EAST,
		NORTH_EAST,
		NORTH_NORTH_EAST,
		NORTH,
		NORTH_NORTH_WEST,
		NORTH_WEST,
		WEST_NORTH_WEST,
		WEST,
		WEST_SOUTH_WEST,
		SOUTH_WEST,
		SOUTH_SOUTH_WEST,
		SOUTH,
		SOUTH_SOUTH_EAST,
		SOUTH_EAST,
		EAST_SOUTH_EAST
	};

	PlayerState _stateType;

	Direction _directType;

	Inventory* _inven;

	Skill* _skill;

	int _skillCount;

	RECT _rcPlayer;
	RECT _camera;

	int _countCast;
	int _count;
	int _walkcount;
	int _frameX;
	int _walkframeX;

	POINT _ptPlayer;

	POINT _destination;

	double _deltaX;
	double _deltaY;
	double _distanceX;
	double _distanceY;
	double _angle;

	// 스탯----------------------------------------------------
	RECT rcstat[20];

	struct tagPlayer
	{
		char* _name;
		char* _classes;

		int _hp;
		int _mp;

		int _hpnow;
		int _mpnow;

		int _level;
		int _exp;
		int _nexp;

		int _strength;
		int _dex;
		int _vital;
		int _energy;

		int _damage;
		int _damageMg;

		int _ratingL;
		int _ratingR;

		int _defence;

		int _stamina;
		int _staminanow;

		int _fireRes;
		int _coldRes;
		int _lightRes;
		int _poisonRes;

		int _gold;
	};

	tagPlayer _playerInfo;

	// 스킬
	bool _onAttack;
	bool _onSkill;
	bool _teleport;

	// 몬스터 
	vector<RECT> _fallenBox;


public:

	HRESULT init();

	POINT getPtPlayer() { return _ptPlayer; }

	RECT getPlayerRc() { return _rcPlayer; }

	double getAngle() { return _angle; }

	POINT getdestination() { return _destination; }

	void setmap(float x, float y) { _rcPlayer = RectMakeCenter(x, y, 34, 70); }

	void setTeleport(bool teleport) { _teleport = teleport; }

	void setFallenRgn(vector<RECT> fallenBox) { _fallenBox = fallenBox; }

	double CalculateAngle();
	void PlayerViewAngle();
	void PlayerRend(HDC hdc);
	void PlayerStatusRend(HDC hdc);
	void frame();

	void Situation();


	Player(){}
	~Player();
};

