#pragma once
#include "GameNode.h"

#include "MainTitle.h"
#include "CharacterSelect.h"
#include "LoadingScene.h"
#include "TownStage.h"

class MG_Diablo : public GameNode
{
private:
	MainTitle* _title;

	CharacterSelect* _characterSelect;

	LoadingScene* _loading;

	TownStage* _town;

	GameNode* _currentScene;

	int characterNumber;

public:

	virtual HRESULT init(void);
	virtual void release(void);
	virtual void update(void);
	virtual void render(void);

	MG_Diablo() {}
	~MG_Diablo() {}
};

