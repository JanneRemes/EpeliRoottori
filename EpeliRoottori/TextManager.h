#ifndef TEXTMANAGER_H
#define TEXTMANAGER_H

#include "Color.h"

#include <iostream>
#include <fstream>
#include <vector>

#include <ft2build.h>
#include FT_FREETYPE_H

class TextManager
{
public:
	TextManager();
	~TextManager();

	void LoadFont(const char *filepath);
	void SetCharacterSize(float size);
	void SetColor(float red, float blue, float green, float alpha);
	void SetText(std::string message);
	float GetCharacterSize();
	Color GetColor();
	std::string GetText();

private:
	// Defaults to an empty message with white color and charactersize of 12
	std::string text = "";
	Color color;
	float characterSize = 12.0f;
};

#endif