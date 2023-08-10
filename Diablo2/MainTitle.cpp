#include "Stdafx.h"
#include "MainTitle.h"

HRESULT MainTitle::init(void)
{
    IMAGEMANAGER->addImage("Ÿ��Ʋ ȭ��", "Resources/Images/BackGround/Ÿ��Ʋ���.bmp", WINSIZE_X, WINSIZE_Y);
    IMAGEMANAGER->addFrameImage("Ÿ��Ʋ �ΰ�", "Resources/Images/BackGround/Ÿ��Ʋ�ΰ�.bmp", 10860, 172, 30, 1, true, RGB(255, 0, 255));

    IMAGEMANAGER->addImage("�չ�ư ��Ŭ��", "Resources/Images/Object/Button/�չ�ư��Ŭ��.bmp", 272, 35);
    IMAGEMANAGER->addImage("�չ�ư Ŭ��", "Resources/Images/Object/Button/�չ�ưŬ��.bmp", 272, 35);

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
    IMAGEMANAGER->render("Ÿ��Ʋ ȭ��", getMemDC());
    IMAGEMANAGER->frameRender("Ÿ��Ʋ �ΰ�", getMemDC(), _logo.left, _logo.top, frameX, 0);

    if (_sclick == false)
    {
        IMAGEMANAGER->render("�չ�ư ��Ŭ��", getMemDC(), _sbutton.left, _sbutton.top, 0, 0, 272, 35, 272, 35);
        FONTMANAGER->drawText(getMemDC(), _sbutton.left + 85, _sbutton.top + 8, "Diablo Heavy", 20, 20, "�̱� �÷���", 10, RGB(0, 0, 0));
    }
    else
    {
        IMAGEMANAGER->render("�չ�ư Ŭ��", getMemDC(), _sbutton.left, _sbutton.top, 0, 0, 272, 35, 272, 35);
        FONTMANAGER->drawText(getMemDC(), _sbutton.left + 85, _sbutton.top + 8, "Diablo Heavy", 20, 20, "�̱� �÷���", 10, RGB(255, 255, 255));
    }

    if (_eclick == false)
    {
        IMAGEMANAGER->render("�չ�ư ��Ŭ��", getMemDC(), _ebutton.left, _ebutton.top, 0, 0, 272, 35, 272, 35);
        FONTMANAGER->drawText(getMemDC(), _ebutton.left + 110, _ebutton.top + 8, "Diablo Heavy", 20, 20, "�� ��", 10, RGB(0, 0, 0));
    }
    else
    {
        IMAGEMANAGER->render("�չ�ư Ŭ��", getMemDC(), _ebutton.left, _ebutton.top, 0, 0, 272, 35, 272, 35);
        FONTMANAGER->drawText(getMemDC(), _ebutton.left + 110, _ebutton.top + 8, "Diablo Heavy", 20, 20, "�� ��", 10, RGB(255, 255, 255));
    }
}
