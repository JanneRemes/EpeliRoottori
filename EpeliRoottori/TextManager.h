#ifndef TEXTMANAGER_H
#define TEXTMANAGER_H
#include "lodepng.h"
#include <GL/glew.h>
#include "Shader.h"

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
	void SetText(std::string message);
	void SetColor(glm::vec3 c);
	void SetPosition(glm::vec2 p);
	void SetScale(glm::vec2 s);
	void SetRotation(float a);
	void Move(glm::vec2 m);
	void Scale(glm::vec2 s);
	void Rotate(float a);

	float GetCharacterSize();
	std::string GetText();
	glm::vec3 GetColor();
	glm::vec2 GetPosition();
	glm::vec2 GetScale();
	float GetRotation();
	FT_Face GetFace();
	FT_Error GetError();

private:
	FT_Library library;
	FT_Face face;
	FT_Error error;
	std::vector<GLuint>idVector;
	bool firstRender = true;
	GLuint textBuffer;
	GLuint textElements;

	// Defaults to an empty message with white color and charactersize of 12
	float characterSize = 12.0f, angle = 0;
	std::string text = "";
	glm::vec3 color = { 1.0, 1.0, 1.0 };
	glm::vec2 position = { 0.0, 0.0 }, scale = { 1.0, 1.0 };
};

#endif