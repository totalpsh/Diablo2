#include "Stdafx.h"
#include "Inventory.h"

Inventory::Inventory()
{
	IMAGEMANAGER->addImage("�κ��丮", "Resources/Images/Object/UI/�κ��丮�г�.bmp", 320, 432, true, RGB(255, 0, 255));

	// ��ĭ 36x36 
	// ƴ 

	// 529
	for (int i = 0; i < 40; i++)
	{
		_bag[0] = RectMakeCenter(648, 493, 36, 36);
		_bag[1] = RectMakeCenter(648, 537, 36, 36);
	}

}

Inventory::~Inventory()
{
}

void Inventory::PlayerBag()
{
}

void Inventory::PlayerEquip()
{
}

void Inventory::rendInven(HDC hdc)
{
	IMAGEMANAGER->render("�κ��丮", hdc, WINSIZE_X / 2, WINSIZE_Y / 600 * 65);
	
	if (KEYMANAGER->isToggleKey(VK_F3))
	{
		DrawRectMake(hdc, _bag[0]);
		DrawRectMake(hdc, _bag[1]);
	}
}