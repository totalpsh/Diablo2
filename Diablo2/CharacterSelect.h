#pragma once
#include "GameNode.h"
class CharacterSelect : public GameNode
{
private:
	
	RECT _flame;

	RECT _button;

	RECT sorceress;

	int count;
	int frameX;

	bool _click;
	bool _next;

public:

	bool getNext() { return _next; }

	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);


	CharacterSelect(){}
	~CharacterSelect(){}
};

