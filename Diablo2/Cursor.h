#pragma once
#include "SingletonBase.h"

class Cursor : public SingletonBase <Cursor>
{
private:
	int _count;
	int _cursorFrame;

public:
	HRESULT init();
	void update();
	void render(HDC hdc);

	Cursor() {}
	~Cursor();
};

