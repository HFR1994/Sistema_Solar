#pragma once
#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#else
#include "freeglut.h"
#endif

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//#include <SDL.h>
//#include <GL/gl.h>
//#include <GL/glu.h>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

//#include "SDL.h"
//#include <cstdio>
#include <iostream>
//#include <cmath>
#ifndef FUNCTION_H
#define FUNCTION_H

void drawCube(float size);
void drawSkybox(float size);    //draw the skybox
void initskybox();      //load the textures
void killskybox();      //delete the textures
void lockCamera();
void moveCamera(float, float);
void moveCamerraUp(float, float);
void Control(float, float, bool);
void UpdateCamera();
GLuint LoadTexture(const char*);
unsigned int loadTexture(const char*);
#endif