#include "Stdafx.h"
#include "MG_Diablo.h"

HRESULT MG_Diablo::init(void)
{
	GameNode::init(true);



	_title = new MainTitle;

	_title->init();

	_characterSelect = new CharacterSelect;

	_characterSelect->init();

	_loading = new LoadingScene;

	_loading->init();

	_town = new TownStage;

	_town->init();

	_currentScene = _title;

	CURSOR->init();

	characterNumber = 0;

	return S_OK;

}

void MG_Diablo::release(void)
{
	GameNode::release();

	SAFE_DELETE(_title);
	SAFE_DELETE(_characterSelect);
	SAFE_DELETE(_loading);
	SAFE_DELETE(_town);
}

void MG_Diablo::update(void)
{
	GameNode::update();

	if (_currentScene == _title)
	{
		// 타이틀일때 동작
		_title->update();

		if (_title->getNext() == true)
		{
			_currentScene = _loading;
		}
	}


	if (_currentScene == _loading)
	{
		_loading->update();

		if (_loading->getNext() == true)
		{
			_currentScene = _town;
		}
	}

	if (_currentScene == _town)
	{
		_town->update();
	}
	
	CURSOR->update();
}

void MG_Diablo::render(void)
{
	PatBlt(getMemDC(), 0, 0, WINSIZE_X, WINSIZE_Y, BLACKNESS);

	_currentScene->render();

	CURSOR->render(getMemDC());

	this->getBackBuffer()->render(getHDC());
}
