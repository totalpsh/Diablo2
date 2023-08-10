#pragma once
#include "GameNode.h"
#include "Enemy.h"
#include "Fallen.h"

class TownStage : public GameNode
{
private:

	Enemy* _enemy;

	Fallen* _fallen;

	Astar* _astar;

	POINT _ptPlayer;

	int _destinationX;
	int _destinationY;


public:
	HRESULT init(void);
	void release(void);
	void update(void);
	void render(void);

	TownStage() {}
	~TownStage() {}
};

