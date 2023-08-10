#include "Stdafx.h"
#include "FontManager.h"

void FontManager::drawText(HDC hdc, int destX, int destY, char* fontName, int fontSize, int fontWeight, char* printString, int lenght, COLORREF color)
{
	SetBkMode(hdc, TRANSPARENT);
	auto font = CreateFont
	(
		fontSize, 0, 0, 0, fontWeight, 0, 0, 0, HANGEUL_CHARSET, 0, 0, 0, 0, _TEXT(fontName)
	);

	auto oldFont = (HFONT)SelectObject(hdc, font);

	SetTextColor(hdc, color);

	const int strlenght = (int)strlen(printString);
	wchar_t charBuffer[256];
	ZeroMemory(charBuffer, strlenght);
	size_t sf;
	mbstowcs_s(&sf, charBuffer, 256, printString, strlenght);
	TextOutW(hdc, destX, destY, charBuffer, (int)wcslen(charBuffer));
	SelectObject(hdc, oldFont);
	DeleteObject(font);
}

//void FontManager::drawText(HDC hdc, int destX, int destY, char* fontName, int fontWeight, LPCWSTR printString, int length, COLORREF color)
//{
//}
//
//void FontManager::drawText(HDC hdc, int destX, int destY, char* fontName, int fontWeight, LPCWSTR* printStringArr, int length, COLORREF color)
//{
//	/*int arraySize = sizeof(printStringArr) / sizeof(*printStringArr);
//
//	int lineCount = 0;
//
//	for (int i = 0; i < arraySize; i++)
//	{
//		if (i == 0)
//		{
//			if ()
//			{
//
//			}
//			else
//			{
//				break;
//			}
//		}
//		else
//		{
//
//		}
//	}*/
//
//
//}
