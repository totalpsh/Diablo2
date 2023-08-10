#include "Stdafx.h"
#include "MainTitle.h"

HRESULT MainTitle::init(void)
{
    IMAGEMANAGER->addImage("타이틀 화면", "Resources/Images/BackGround/타이틀배경.bmp", WINSIZE_X, WINSIZE_Y);
    IMAGEMANAGER->addFrameImage("타이틀 로고", "Resources/Images/BackGround/타이틀로고.bmp", 10860, 172, 30, 1, true, RGB(255, 0, 255));

    IMAGEMANAGER->addImage("롱버튼 논클릭", "Resources/Images/Object/Button/롱버튼논클릭.bmp", 272, 35);
    IMAGEMANAGER->addImage("롱버튼 클릭", "Resources/Images/Object/Button/롱버튼클릭.bmp", 272, 35);

    TEMPSOUNDMANAGER->addMp3FileWithKey("TitleMusic", "Resources/Sounds/Diablo2MainTheme.mp3");

    _logo = RectMakeCenter(WINSIZE_X / 3, WINSIZE_Y / 10, 100, 100);

    _sclick = false;
    _eclick = false;

    _next = false;

    _play = true;

    count = frameX = 0;

    return S_OK;
}

void MainTitle::release(void)
{
}

void MainTitle::update(void)
{
    TEMPSOUNDMANAGER->CheckAndReplayWithKey("TitleMusic");
    TEMPSOUNDMANAGER->playSoundWithKey("TitleMusic");

    count++;
    if (count % 3 == 0)
    {
        frameX++;
        if (frameX > 30)
        {
            frameX = 0;
        }
    }

    if (KEYMANAGER->isStayKeyDown(VK_LBUTTON))
    {
        if (PtInRect(&_sbutton, _ptMouse))
        {
            _sclick = true;
        }
    }
    if (KEYMANAGER->isOnceKeyUp(VK_LBUTTON))
    {
        if (PtInRect(&_sbutton, _ptMouse))
        {
            _sclick = false;
            _next = true;
        }
    }
    if (!PtInRect(&_sbutton, _ptMouse))
    {
        _sclick = false;
    }

    if (KEYMANAGER->isStayKeyDown(VK_LBUTTON))
    {
        if (PtInRect(&_ebutton, _ptMouse))
        {
            _eclick = true;
        }
    }
    if (KEYMANAGER->isOnceKeyUp(VK_LBUTTON))
    {
        if (PtInRect(&_ebutton, _ptMouse))
        {
            _eclick = false;
        }
    }
    if (!PtInRect(&_ebutton, _ptMouse))
    {
        _eclick = false;
    }
}

void MainTitle::render(void)
{
    IMAGEMANAGER->render("타이틀 화면", getMemDC());
    IMAGEMANAGER->frameRender("타이틀 로고", getMemDC(), _logo.left, _logo.top, frameX, 0);

    if (_sclick == false)
    {
        IMAGEMANAGER->render("롱버튼 논클릭", getMemDC(), _sbutton.left, _sbutton.top, 0, 0, 272, 35, 272, 35);
        FONTMANAGER->drawText(getMemDC(), _sbutton.left + 85, _sbutton.top + 8, "Diablo Heavy", 20, 20, "싱글 플레이", 10, RGB(0, 0, 0));
    }
    else
    {
        IMAGEMANAGER->render("롱버튼 클릭", getMemDC(), _sbutton.left, _sbutton.top, 0, 0, 272, 35, 272, 35);
        FONTMANAGER->drawText(getMemDC(), _sbutton.left + 85, _sbutton.top + 8, "Diablo Heavy", 20, 20, "싱글 플레이", 10, RGB(255, 255, 255));
    }

    if (_eclick == false)
    {
        IMAGEMANAGER->render("롱버튼 논클릭", getMemDC(), _ebutton.left, _ebutton.top, 0, 0, 272, 35, 272, 35);
        FONTMANAGER->drawText(getMemDC(), _ebutton.left + 110, _ebutton.top + 8, "Diablo Heavy", 20, 20, "종 료", 10, RGB(0, 0, 0));
    }
    else
    {
        IMAGEMANAGER->render("롱버튼 클릭", getMemDC(), _ebutton.left, _ebutton.top, 0, 0, 272, 35, 272, 35);
        FONTMANAGER->drawText(getMemDC(), _ebutton.left + 110, _ebutton.top + 8, "Diablo Heavy", 20, 20, "종 료", 10, RGB(255, 255, 255));
    }
}
