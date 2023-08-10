#include "Stdafx.h"
#include "CharacterSelect.h"

HRESULT CharacterSelect::init(void)
{
    IMAGEMANAGER->addImage("ĳ�����ù��", "Resources/Images/Background/ĳ���ͼ���Ʈ.bmp", 800, 600);
    IMAGEMANAGER->addFrameImage("�Ҳ�", "Resources/Images/Background/ĳ�� ���� ȭ��.bmp", 3300, 176, 30, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addImage("��ŸƮ��ư��Ŭ��", "Resources/Images/Object/Button/����ư��Ŭ��.bmp", 128, 35);
    IMAGEMANAGER->addImage("��ŸƮ��ưŬ��", "Resources/Images/Object/Button/����ưŬ��.bmp", 128, 35);

    _button = RectMakeCenter(WINSIZE_X / 800 * 700, WINSIZE_Y / 600 * 550, 128, 35);

    _flame = RectMakeCenter(WINSIZE_X / 30*16, WINSIZE_Y / 2, 170, 30);

    count = 0;
    frameX = 0;

    //sorceress = RectMake

    return S_OK;
}

void CharacterSelect::release(void)
{
}

void CharacterSelect::update(void)
{
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
        if (PtInRect(&_button, _ptMouse))
        {
            _click = true;
        }
    }
    if (KEYMANAGER->isOnceKeyUp(VK_LBUTTON))
    {
        if (PtInRect(&_button, _ptMouse))
        {
            _click = false;
            _next = true;
        }
    }
    if (!PtInRect(&_button, _ptMouse))
    {
        _click = false;
    }
}

void CharacterSelect::render(void)
{
    IMAGEMANAGER->render("ĳ�����ù��", getMemDC());
    IMAGEMANAGER->frameRender("�Ҳ�", getMemDC(), _flame.left, _flame.top, frameX, 0);

    if (_click == false)
    {
    IMAGEMANAGER->render("��ŸƮ��ư��Ŭ��", getMemDC(), _button.left, _button.top);

    }
    else
    {
    IMAGEMANAGER->render("��ŸƮ��ưŬ��", getMemDC(), _button.left, _button.top);

    }
}
