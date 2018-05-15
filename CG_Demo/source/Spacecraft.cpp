#include "..\header\Spacecraft.h"


Spacecraft::Spacecraft()
{
	angle = 45;
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

void Spacecraft::updateAngle(float p)
{
	angle = p;
}

void Spacecraft::update()
{
}

void Spacecraft::draw()
{
	glPushMatrix();
	{
		glTranslatef(pos[0], pos[1], pos[2]);
		glRotatef(190, 0, 1, 0);
		glScalef(20, 20, 20);
		glRotatef(45, 0, 1, 0);
		glmDraw(spacecraft, GLM_SMOOTH | GLM_TEXTURE);
	}
	glPopMatrix();
}
