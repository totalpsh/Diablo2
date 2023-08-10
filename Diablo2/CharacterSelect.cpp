#include "Stdafx.h"
#include "CharacterSelect.h"

HRESULT CharacterSelect::init(void)
{
    IMAGEMANAGER->addImage("캐릭선택배경", "Resources/Images/Background/캐릭터셀렉트.bmp", 800, 600);
    IMAGEMANAGER->addFrameImage("불꽃", "Resources/Images/Background/캐릭 생성 화염.bmp", 3300, 176, 30, 1, true, RGB(255, 0, 255));
    IMAGEMANAGER->addImage("스타트버튼논클릭", "Resources/Images/Object/Button/숏버튼논클릭.bmp", 128, 35);
    IMAGEMANAGER->addImage("스타트버튼클릭", "Resources/Images/Object/Button/숏버튼클릭.bmp", 128, 35);

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
    IMAGEMANAGER->render("캐릭선택배경", getMemDC());
    IMAGEMANAGER->frameRender("불꽃", getMemDC(), _flame.left, _flame.top, frameX, 0);

    if (_click == false)
    {
    IMAGEMANAGER->render("스타트버튼논클릭", getMemDC(), _button.left, _button.top);

    }
    else
    {
    IMAGEMANAGER->render("스타트버튼클릭", getMemDC(), _button.left, _button.top);

    }
}
