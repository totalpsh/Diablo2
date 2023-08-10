#pragma once

// fallen
//

class Enemy
{
protected:

	enum State
	{
		IDLE,
		WALK,
		ATTACK,
		GETHIT,
		DEATH
	};

	struct enemyInfo
	{
		RECT _monster;
		RECT _range;
		string _name;
		int ranX;
		int ranY;
		int _monX;
		int _monY;
		int _hp;
		int _att;
		bool _die;
	};

	State _state;

public:

	Enemy();
	~Enemy();
};

