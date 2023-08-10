#pragma once
#include "GameNode.h"

class LoadingScene : public GameNode
{
private:
	int count;

	int frameX;

	bool _next;

public:

	bool getNext() { return _next; }

	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	LoadingScene() {}
	~LoadingScene() {}
};

