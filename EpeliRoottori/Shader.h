#ifndef SHADER_H
#define SHADER_H

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
#include <glm/gtc/type_ptr.hpp>


class Shader
{
public:
	Shader();
	~Shader();

	//initialisoi shaderit, pist� ohjelman alkuun
	bool Init();
	void Uninit(void);
	void FramebufferSizeCallback(GLFWwindow* window, int width, int height);
	GLuint LoadShaderFromFile(const std::string filepath, GLenum ShaderType);
	void Use();
	Shader &SetActive();
	GLuint GetShaderProgram();	

	//utility stuff
	void SetFloat(const GLchar *name, GLfloat value, GLboolean useShader = false);
	void SetInteger(const GLchar *name, GLfloat value, GLboolean usehader = false);
	void SetVec2f(const GLchar *name, GLfloat x, GLfloat y,GLboolean useShader = false);
	void SetVec2f(const GLchar *name, const glm::vec2 &value, GLboolean useShader = false);
	void SetVec3f(const GLchar *name, GLfloat x, GLfloat y, GLfloat z, GLboolean useShader = false);
	void SetVec3f(const GLchar *name, const glm::vec3 &value, GLboolean useShader = false);
	void SetVec4f(const GLchar *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w, GLboolean useShader = false);
	void SetVec4f(const GLchar *name, const glm::vec4 &value, GLboolean useShader = false);
	void SetMatrix4(const GLchar *name, const glm::mat4 &matrix, GLboolean useShader = false);

private:
	GLuint ProgramID;
	GLuint MatrixID;
	GLuint VertexShaderID;
	GLuint FragmentShaderID, FragmentShaderID2;

};

#endif