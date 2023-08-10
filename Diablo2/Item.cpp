#include "Stdafx.h"
#include "Item.h"

Item::Item(ITEM itemType, string name, int damage, int defence, int dur, int attSpd, int size,  int price) : _itemType(itemType), _name(name), _damage(damage), _defence(defence), _dur(dur), _attSpd(attSpd), _size(size), _price(price)
{ }

Item::~Item()
{
}
