#pragma once

enum class ITEM
{
	ITEM_WEAPON,
	ITEM_ARMOR,
	ITEM_ACCESSORY,
	ITEM_PORTION
};

class Item
{
private:

	ITEM _itemType;
	string _name;
	int _damage;
	int _defence;
	int _dur;
	int _attSpd;
	int _size;
	int _price;

public:
	Item(ITEM, string, int, int, int, int, int, int);

	ITEM getType() { return _itemType; }
	void setType(ITEM itemType) { _itemType = itemType; }

	string getName() { return _name; }
	void setName(string name) { _name = name; }

	int getDamage() { return _damage; }
	void setDamage(int damage) { _damage = damage; }

	int getDefence() { return _defence; }
	void setDefence(int defence) { _defence = defence; }

	int getDur() { return _dur; }
	void setDur(int dur) { _dur = dur; }

	int getAttSpd() { return _attSpd; }
	void setAttSpd(int attSpd) { _attSpd = attSpd; }

	int getSize() { return _size; }
	void setSize(int size) { _size = size; }

	int getPrice() { return _price; }
	void setPrice(int price) { _price = price; }

	~Item();
};
