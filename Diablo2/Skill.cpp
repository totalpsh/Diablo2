#include "Stdafx.h"
#include "Skill.h"


Skill::Skill()
{
	IMAGEMANAGER->addFrameImage("파이어월시작", "Resources/Images/Object/Skill/firewall_s.bmp", 1254, 167, 19, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("파이어월", "Resources/Images/Object/Skill/firewall.bmp", 1188, 167, 18, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("파이어월끝", "Resources/Images/Object/Skill/firewall_e.bmp", 1254, 167, 19, 1, true, RGB(255, 0, 255));


	_skillFrame = 0;
	_count = 0;

	onskill = false;

	_onTeleport = true;
}

Skill::~Skill()
{

}

void Skill::Use()
{
	if (skillType == FIRE_WALL)
	{
		
	}

	_skillFrame = 0;

	_count++;

	if (_count % 3 == 0)
	{
		_skillFrame++;
	}

}

void Skill::SkillView(HDC hdc)
{
	
}