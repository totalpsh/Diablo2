#pragma once

class GImage
{

public:

    enum IMAGE_LOAD_KIND
    {
        LOAD_RESOURCE = 0, LOAD_FILE, 
        LOAD_EMPTY, LOAD_END          
    };

    typedef struct tagImage
    {
        DWORD   resID;
        HDC      hMemDC;
        HBITMAP hBit;
        HBITMAP hOBit;

        float   x;                
        float   y;                
        int     width;            
        int     height;           
        int     currentFrameX;    
        int     currentFrameY;    
        int     maxFrameX;        
        int     maxFrameY;        
        int     frameWidth;       
        int     frameHeight;      
        BYTE    loadType;         


        tagImage()
        {
            resID = 0;                    
            hMemDC = nullptr;             
            hBit = nullptr;               
            hOBit = nullptr;
            x = y = 0;
            width = 0;
            height = 0;
            currentFrameX = 0;
            currentFrameY = 0;
            maxFrameX = 0;
            maxFrameY = 0;
            frameWidth = 0;
            frameHeight = 0;
            width = 0;
            height = 0;
            loadType = LOAD_RESOURCE;     
        }
    }IMAGE_INFO, * LPIMAGE_INFO;

private:
    LPIMAGE_INFO   _imageInfo;
    char* _fileName; 
    bool            _isTrans;   
    COLORREF      _transColor;

    BLENDFUNCTION   _blendFunc;  
    LPIMAGE_INFO    _blendImage; 


public:
    HRESULT init(int width, int height);
    HRESULT init(const DWORD resId, int width, int height, bool isTrans = false, COLORREF transColor = RGB(0, 0, 0));
    HRESULT init(const char* fileName, int width, int height, bool isTrans = false, COLORREF transColor = RGB(0, 0, 0));
    HRESULT init(const char* fileName, float x, float y, int width, int height, bool isTrans = false, COLORREF transColor = RGB(0, 0, 0));
    HRESULT init(const char* fileName, int width, int height, int maxFrameX, int maxFrameY, bool isTrans = false, COLORREF transColor = RGB(0, 0, 0));
    HRESULT init(const char* fileName, float x, float y, int width, int height, int maxFrameX, int maxFrameY, bool isTrans = false, COLORREF transColor = RGB(0, 0, 0));
    HRESULT initForAlphaBlend(void);

    void setTransColor(bool isTrans, COLORREF transColor);

    void release(void);

    void render(HDC hdc);
    void render(HDC hdc, int destX, int destY);
    void render(HDC hdc, int destX, int destY, int sourX, int sourY, int sourwidth, int sourheight);
    void render(HDC hdc, int destX, int destY, int sourX, int sourY, int sizeX, int sizeY, int sourwidth, int sourheight);

    void alphaRender(HDC hdc, BYTE alpha); 
    void alphaRender(HDC hdc, int destX, int destY, BYTE alpha);
    void alphaRender(HDC hdc, int destX, int destY, int sourX, int sourY, int sourwidth, int sourheight, BYTE alpha);

    void frameRender(HDC hdc, int destX, int destY);
    void frameRender(HDC hdc, int destX, int destY, int currentFrameX, int currentFrameY);
    void frameRender(HDC hdc, int destX, int destY, int destWidth, int destHeight, int currentFrameX, int currentFrameY);

    void setTransImage(const char* fileName);

    void loopRender(HDC hdc, const LPRECT drawArea, int offsetX, int offsetY);
    void loopAlphaRender(HDC hdc, const LPRECT drawArea, int offsetX, int offsetY, BYTE alpha);

    inline HDC getMemDC(void) { return _imageInfo->hMemDC; }

    inline float getX(void) { return _imageInfo->x; }
    inline void setX(float x) { _imageInfo->x = x; }

    inline float getY(void) { return _imageInfo->y; }
    inline void setY(float y) { _imageInfo->y = y; }

    inline void setCenter(float x, float y)
    {
        _imageInfo->x = x - (_imageInfo->width / 2);
        _imageInfo->y = y - (_imageInfo->height / 2);
    }

    inline int getWidth(void) { return _imageInfo->width; }
    inline int getHeight(void) { return _imageInfo->height; }

    inline RECT boundingBox(void)
    {
        RECT rc =
        {
            _imageInfo->x,
            _imageInfo->y,
            _imageInfo->x + _imageInfo->width,
            _imageInfo->y + _imageInfo->height
        };
        return rc;
    }

    inline RECT boundingBoxWithFrame(void)
    {
        RECT rc =
        {
            _imageInfo->x,
            _imageInfo->y,
            _imageInfo->x + _imageInfo->frameWidth,
            _imageInfo->y + _imageInfo->frameHeight
        };
        return rc;
    }

    inline int getFrameX(void) { return _imageInfo->currentFrameX; }
    inline void setFrameX(int frameX)
    {
        _imageInfo->currentFrameX = frameX;

        if (frameX > _imageInfo->maxFrameX)
        {
            _imageInfo->currentFrameX = _imageInfo->maxFrameX;
        }
    }

    inline int getFrameY(void) { return _imageInfo->currentFrameY; }
    inline void setFrameY(int frameY)
    {
        _imageInfo->currentFrameY = frameY;

        if (frameY > _imageInfo->maxFrameX)
        {
            _imageInfo->currentFrameY = _imageInfo->maxFrameY;
        }
    }

    inline int getFrameWidth(void) { return _imageInfo->frameWidth; }
    inline int getFrameHeight(void) { return _imageInfo->frameHeight; }

    inline int getMaxFrameX(void) { return _imageInfo->maxFrameX; }
    inline int getMaxFrameY(void) { return _imageInfo->maxFrameY; }

    GImage();
    ~GImage() {}
};