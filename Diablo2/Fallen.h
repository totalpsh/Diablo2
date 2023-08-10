#pragma once
#include "Enemy.h"

class Fallen : Enemy
{
private:
	enemyInfo _fallen;

	vector<enemyInfo> _fallenMake;

	vector<RECT> _fallenRgn;

	int _count;
	int _frameX;

public:

	vector<RECT> getFallenrgn() { return _fallenRgn; }

	void FallenUpdate();
	void MakeFallen(HDC hdc);

	Fallen();
	~Fallen();
};

