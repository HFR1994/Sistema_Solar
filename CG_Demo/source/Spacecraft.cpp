#include "..\header\Spacecraft.h"


Spacecraft::Spacecraft()
{
	// ==== POSITION ====
	pos[0] = 0;
	pos[1] = 0;
	pos[2] = 0;

	// ==== Rotation ====
	rot[0] = 0;
	rot[1] = 0;
	rot[2] = 0;

	spacecraft = glmReadOBJ(const_cast<char *>("assets/Ship/Ship.obj"));
	glmFacetNormals(spacecraft);
	glmVertexNormals(spacecraft, 45.0f);
	angle = 2;
	radius = 5;
}


Spacecraft::~Spacecraft()
{
}

void Spacecraft::updatePos(float * p)
{
	this->pos[0] = p[0];
	this->pos[1] = p[1];
	this->pos[2] = p[2];
}

void Spacecraft::updatePos(float p1, float p2, float p3)
{
	this->pos[0] = p1;
	this->pos[1] = p2;
	this->pos[2] = p3;
}

void Spacecraft::update(float angulo)
{
	angle += angulo;
}

void Spacecraft::draw()
{
	float u = pos[0]*cos(360 - ((angle*3.141592) / 180)) - pos[2]*sin(360 - ((angle*3.141592) / 180));
	float v = pos[2]*cos(360 - ((angle*3.141592) / 180)) + pos[0]*sin(360 - ((angle*3.141592) / 180));
	glPushMatrix();
	{
		glTranslatef(pos[0], pos[1], pos[2]);
		glRotatef(2,0,1,0);
		glScalef(20, 20, 20);
		glmDraw(spacecraft, GLM_SMOOTH | GLM_TEXTURE);
	}
	glPopMatrix();
}
