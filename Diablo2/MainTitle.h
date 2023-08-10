#pragma once
#include "GameNode.h"

class MainTitle : public GameNode
{
private:

	RECT _logo;

	const RECT _sbutton = RectMakeCenter(WINSIZE_X / 2, WINSIZE_Y / 2, 272, 35);
	const RECT _ebutton = RectMakeCenter(WINSIZE_X / 2, WINSIZE_Y / 600 * 400, 272, 35);

	bool _sclick;
	bool _eclick;

	bool _next;

	bool _play;

	int count, frameX;


public:
	bool getNext() { return _next; }

	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	MainTitle() {}
	~MainTitle() {}
};

