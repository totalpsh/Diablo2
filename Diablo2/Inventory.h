#pragma once
#include "Item.h"

class Inventory
{
private:

	RECT _rcInven;

	RECT _bag[40];

	
public:

	//�÷��̾� ����
	void PlayerBag();

	// �÷��̾� ����
	void PlayerEquip();

	void rendInven(HDC hdc);

	Inventory();
	~Inventory();
};

