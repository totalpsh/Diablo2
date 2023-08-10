#pragma once

#define MAX 10

class Skill
{
private:

	enum Skills
	{
		FIRE_WALL,
		HYDRA,
		FROZEN_ORB,
		TELEPORT
	};

	Skills skillType;

	bool onskill;

	bool _onTeleport;

	RECT _skillrc;

	int _centerX;
	int _centerY;

	int _speed;

	int _timer;

	int _skillFrame;
	int _count;

public:

	bool getTeleport() { return _onTeleport; }
	void Use();
	void SkillView(HDC hdc);

	Skill();
	~Skill();
};

