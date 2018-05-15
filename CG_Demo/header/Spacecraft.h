#pragma once

#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#else
#include "freeglut.h"
#endif

#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "glm.h"
#include <stdio.h>

class Spacecraft
{
public:
	Spacecraft();
	~Spacecraft();

	float pos[3];
	float rot[3];

	void updatePos(float *p);
	void updatePos(float p1, float p2, float p3);
	void updateAngle(float p);

	float radius;

	GLMmodel * spacecraft;

	float angle;

	void update(float angle);
	void draw();
};

