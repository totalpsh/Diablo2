#include "Stdafx.h"
#include "Enemy.h"

Enemy::Enemy()
{
	IMAGEMANAGER->addImage("몬스터체력바", "Resources/Images/Object/Monster/몬스터HP바.bmp", 120, 30);
}

Enemy::~Enemy()
{
}
