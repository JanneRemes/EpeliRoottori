#ifndef CAMERA_H
#define CAMERA_H
#define GLM_FORCE_RADIANS
#define GLEW_STATIC

// GLM transformaatioita varten
#include "glm\glm.hpp"
#include <glm/gtx/transform.hpp>
#include <GL\glew.h>

// GLFW
#include <GLFW/glfw3.h>

using namespace glm;

class Camera
{
public:
	Camera(GLfloat camRotate, GLfloat camScale);
	
	void initialize();
	mat4 getViewMatrix();

	void setPosition(vec3 newPos, vec3 camPos);
	
	void setScale(GLfloat camScale);
	GLfloat getScale()const{ return camRotate; }

	void setRotation(GLfloat camRotate);
	GLfloat getRotation(){ return camRotate; }
	


	~Camera();

private:
	vec3 camPos = vec3(0.0f, 0.0f, 3.0f);
	vec3 camTarget = vec3(0.0f, 0.0f, 0.0f);
	vec3 camDirection = normalize(camPos - camTarget);

	vec3 up = vec3(0.0f, 1.0f, 0.0f);
	vec3 camRight = normalize(cross(up, camDirection));
	vec3 camUp = cross(camTarget, camRight);

	mat4 view;

	GLfloat camRotate;
	GLfloat camScale;
	
};

#endif