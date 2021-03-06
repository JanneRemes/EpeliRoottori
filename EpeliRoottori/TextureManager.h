#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include "Includes.h"

class TextureManager
{
public:
	TextureManager();
	~TextureManager();

	void LoadTextures(const char *filename);
	GLuint GetID();
	unsigned GetWidth();
	unsigned GetHeight();

private:
	const char *filename;
	std::vector<unsigned char> texture_png, textures;
	unsigned int width = 0, height = 0;
	GLuint id = 0;

};

#endif