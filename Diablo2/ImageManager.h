#pragma once
#include "SingletonBase.h"
#include "GImage.h"

class ImageManager : public SingletonBase<ImageManager>
{
private:
    typedef map<string, GImage*> mapImageList;
    typedef map<string, GImage*>::iterator mapimageIter;
private:
    mapImageList _mImageList;

public:
    HRESULT init(void);
    void release(void);

    GImage* addImage(string strKey, int width, int height);
    GImage* addImage(string strKey, const char* fileName, int width, int height, bool isTrans = false, COLORREF transColor = RGB(0, 0, 0));
    GImage* addImage(string strKey, const char* fileName, float x, float y, int width, int height, bool isTrans = false, COLORREF transColor = RGB(0, 0, 0));

    GImage* addFrameImage(string strKey, const char* fileName, int width, int height, int maxFrameX, int maxFrameY, bool isTrans = false, COLORREF transColor = RGB(0, 0, 0));
    GImage* addFrameImage(string strKey, const char* fileName, float x, float y, int width, int height, int maxFrameX, int maxFrameY, bool isTrans = false, COLORREF transColor = RGB(0, 0, 0));

    GImage* findImage(string strKey);

    bool deleteImage(string strkey);
    bool deleteAll();

    HRESULT initForAlphaBlend(void);

    void render(string strKey, HDC hdc);
    void render(string strKey, HDC hdc, int destX, int destY);
    void render(string strKey, HDC hdc, int destX, int destY, int sourX, int sourY, int sourwidth, int sourheight);
    void render(string strKey, HDC hdc, int destX, int destY, int sourX, int sourY, int sourwidth, int sourheight, int sizeX, int sizeY);

    void alphaRender(string strKey, HDC hdc, BYTE alpha);
    void alphaRender(string strKey, HDC hdc, int destX, int destY, BYTE alpha);
    void alphaRender(string strKey, HDC hdc, int destX, int destY, int sourX, int sourY, int sourwidth, int sourheight, BYTE alpha);

    void frameRender(string strKey, HDC hdc, int destX, int destY);
    void frameRender(string strKey, HDC hdc, int destX, int destY, int currentFrameX, int currentFrameY);
    void frameRender(string strKey, HDC hdc, int destX, int destY, int destWidth, int destHeight, int currentFrameX, int currentFrameY);

    void loopRender(string strKey, HDC hdc, const LPRECT drawArea, int offsetX, int offsetY);
    void loopAlphaRender(string strKey, HDC hdc, const LPRECT drawArea, int offsetX, int offsetY, BYTE alpha);

    void setTransImage(const char* fileName);

    ImageManager() {}
    ~ImageManager() {}
};

