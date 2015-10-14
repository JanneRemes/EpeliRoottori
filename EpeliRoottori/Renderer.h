#ifndef RENDERER_H
#define RENDERER_H

#define GLM_FORCE_RADIANS
#include <cstdio>
#include <cstdlib>
#include <iostream>

// GLEW
#define GLEW_STATIC
#include <GL/glew.h>

// GLFW
#include <GLFW/glfw3.h>

// GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtx/transform.hpp>

// SOIL
#include <SOIL/SOIL.h>


class Renderer
{
public:
	Renderer();
	~Renderer();

	void draw();
	void Init(GLFWwindow* win);
	void Uninit(void);
	void FramebufferSizeCallback(GLFWwindow* window, int width, int height);
	void LoadShaderFromFile(std::string filepath, GLenum ShaderType);


private:
	GLuint Program;
	GLuint MatrixID;
	GLuint VertexShader;
	GLuint FragmentShader;

};

#endif