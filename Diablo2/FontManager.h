#pragma once
#include "SingletonBase.h"

class FontManager : public SingletonBase <FontManager>
{
public:
	void drawText(HDC hdc, int destX, int destY, char* fontName, int fontSize, int fontWeight, char* printString, int lenght, COLORREF color);

	//void drawText(HDC hdc, int destX, int destY, char* fontName, int fontWeight, LPCWSTR printString, int length, COLORREF color);

	//void drawText(HDC hdc, int destX, int destY, char* fontName, int fontWeight, LPCWSTR* printStringArr, int length, COLORREF color);


	FontManager() {}
	~FontManager() {}
};

