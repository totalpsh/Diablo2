#pragma once
#include "Item.h"

class Inventory
{
private:

	RECT _rcInven;

	RECT _bag[40];

	
public:

	//플레이어 가방
	void PlayerBag();

	// 플레이어 착용
	void PlayerEquip();

	void rendInven(HDC hdc);

	Inventory();
	~Inventory();
};

