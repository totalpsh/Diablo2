#include "Stdafx.h"
#include "TownStage.h"

HRESULT TownStage::init(void)
{
	_fallen = new Fallen;


	UI->init();

    return S_OK;
}

void TownStage::release(void)
{
	SAFE_DELETE(_fallen);
}

void TownStage::update(void)
{
	PLAYER->CalculateAngle();

	PLAYER->PlayerViewAngle();

	PLAYER->frame();

	PLAYER->Situation();

	MAP->setAngle(PLAYER->getAngle());

	MAP->setPlayer(PLAYER->getPtPlayer());

	MAP->MotionSignal();

	MAP->TileMove(_astar->astar(_ptPlayer.x, _ptPlayer.y, _ptMouse.x, _ptMouse.y));

	UI->updateUI();

	_fallen->FallenUpdate();
	PLAYER->setFallenRgn(_fallen->getFallenrgn());
}

void TownStage::render(void)
{
	MAP->MakeTile(getMemDC());

	PLAYER->PlayerRend(getMemDC());

	PLAYER->PlayerStatusRend(getMemDC());

	_fallen->MakeFallen(getMemDC());

	UI->rendUI(getMemDC());

	UI->cursorRender(getMemDC());
}
