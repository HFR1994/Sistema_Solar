//Carlos Ayala 
//Hector Flores
//Diego Ramirez

#include "../header/World.h"
#include "../header/glm.h"

float pi = 3.14159;

World::World() {
	angle = 0.0f;
	angle2 = 0.0f;
	dir = 1.0;
	// rotate= false;

	// ==== POSITION ====
	pos[0] = 0;
	pos[1] = 0;
	pos[2] = 0;
}

World::~World() {

}

void World::draw() {

	float escala = 1;
	float radio = 150;


	glPushMatrix();
	{
		switch(changer) {
			case 0: //Mercurio
				glBegin(GL_LINE_LOOP);
				for (int i = 0; i < 360; i++)
				{
					float gradaux = i*3.14159f / 180.0f;
					glVertex3f(sin(gradaux)*0.3871f*radio, -10.0f, cos(gradaux)*0.37883f*radio);
				}
				glEnd();
				pos[0]=sin(angle/0.24084f*(pi/180))*0.3871f*radio;
				pos[1]=-10.15f;
				pos[2]=cos(angle/0.24084f *(pi / 180))*0.37883f*radio;

				//glTranslatef(0.0,-10.15f, 75.766)
				glTranslatef(pos[0],pos[1],pos[2]);
				glRotatef(angle2/58.646f, 0, 1, 0);
				glScalef(0.0035f*escala,0.0035f*escala,0.0035f*escala);
				break;
			case 1: //Venus
				glBegin(GL_LINE_LOOP);
				for (int i = 0; i < 360; i++)
				{
					float gradaux = i*3.14159f / 180.0f;
					glVertex3f(sin(gradaux)*0.72333f*radio, -10.0f, cos(gradaux)*0.72332f*radio);
				}
				glEnd();
				pos[0]=sin(angle/0.61519f*(pi/180))*0.72333f*radio;
				pos[1]=-10.4f;
				pos[2]=cos(angle/0.61519f *(pi / 180))*0.72332f*radio;

				//glTranslatef(0.0,-10.15f, 144.664)
				glTranslatef(pos[0],pos[1],pos[2]);
				glRotatef(angle2/58.646f, 0, 1, 0);
				glScalef(0.0087f*escala,0.0087f*escala,0.0087f*escala);
				break;
			case 2: //Tierra
				glBegin(GL_LINE_LOOP);
				for (int i = 0; i < 360; i++)
				{
					float gradaux = i*3.14159f / 180.0f;
					glVertex3f(sin(gradaux)*1.0f*radio, -10.0f, cos(gradaux)*0.99986f*radio);
				}
				glEnd();
				pos[0]=sin(angle/1.0f*(pi/180))*1.0f*radio;
				pos[1]=-10.3f;
				pos[2]=cos(angle/1.0f *(pi / 180))*0.99986f*radio;

				//glTranslatef(0.0,-10.15f, 199.97199999999998)
				glTranslatef(pos[0],pos[1],pos[2]);
				glRotatef(angle2/1.0f, 0, 1, 0);
				glScalef(0.00915f*escala,0.00915f*escala,0.00915f*escala);
				glPushMatrix();
				{
					glRotatef(angle, 0, 1, 0);
					glTranslatef(sin(angle*5 *(pi / 180))*50.0f,90.0f, cos(angle*5 *(pi / 180))*100.0f);
					glColor3f(0, 0, 1);
					glutSolidSphere(10, 30, 30);
				}
				glPopMatrix();
				break;
			case 3: //Marte
				glBegin(GL_LINE_LOOP);
				for (int i = 0; i < 360; i++)
				{
					float gradaux = i*3.14159f / 180.0f;
					glVertex3f(sin(gradaux)*1.52368f*radio, -10.0f, cos(gradaux)*1.51702f*radio);
				}
				glEnd();
				pos[0]=sin(angle/1.88079f*(pi/180))*1.52368f*radio;
				pos[1]=-10.2f;
				pos[2]=cos(angle/1.88079f *(pi / 180))*1.51702f*radio;

				//glTranslatef(0.0,-10.15f, 303.404)
				glTranslatef(pos[0],pos[1],pos[2]);
				glRotatef(angle2/1.025f, 0, 1, 0);
				glScalef(0.00486f*escala,0.00486f*escala,0.00486f*escala);
				break;
			case 4: //Jupiter
				glBegin(GL_LINE_LOOP);
				for (int i = 0; i < 360; i++)
				{
					float gradaux = i*3.14159f / 180.0f;
					glVertex3f(sin(gradaux)*5.2044f*radio, -10.0f, cos(gradaux)*5.19815f*radio);
				}
				glEnd();
				pos[0]=sin(angle/11.86178f*(pi/180))*5.2044f*radio;
				pos[1]=-14.125f;
				pos[2]=cos(angle/11.86178f *(pi / 180))*5.19815f*radio;

				//glTranslatef(0.0,-10.15f, 1039.63)
				glTranslatef(pos[0],pos[1],pos[2]);
				glRotatef(angle2/1.78f, 0, 1, 0);
				glScalef(0.10023f*escala,0.10023f*escala,0.10023f*escala);
				break;
			case 5: //Saturno
				glBegin(GL_LINE_LOOP);
				for (int i = 0; i < 360; i++)
				{
					float gradaux = i*3.14159f / 180.0f;
					glVertex3f(sin(gradaux)*9.5826f*radio, -10.0f, cos(gradaux)*9.56727f*radio);
				}
				glEnd();
				pos[0]=sin(angle/29.45663f*(pi/180))*9.5826f*radio;
				pos[1]=-13.15f;
				pos[2]=cos(angle/29.45663f *(pi / 180))*9.56727f*radio;

				//glTranslatef(0.0,-10.15f, 1913.4540000000002)
				glTranslatef(pos[0],pos[1],pos[2]);
				glRotatef(angle2/1.82f, 0, 1, 0);
				glScalef(0.08365f*escala,0.08365f*escala,0.08365f*escala);
				break;
			case 6: //Urano
				glBegin(GL_LINE_LOOP);
				for (int i = 0; i < 360; i++)
				{
					float gradaux = i*3.14159f / 180.0f;
					glVertex3f(sin(gradaux)*19.2184f*radio, -10.0f, cos(gradaux)*19.19764f*radio);
				}
				glEnd();
				pos[0]=sin(angle/1.88498f*(pi/180))*19.2184f*radio;
				pos[1]=-11.25f;
				pos[2]=cos(angle/1.88498f *(pi / 180))*19.19764f*radio;

				//glTranslatef(0.0,-10.15f, 3839.528)
				glTranslatef(pos[0],pos[1],pos[2]);
				glRotatef(angle2/22.0f, 0, 1, 0);
				glScalef(0.0334f*escala,0.0334f*escala,0.0334f*escala);
				break;
			case 7: //Nepturno
				glBegin(GL_LINE_LOOP);
				for (int i = 0; i < 360; i++)
				{
					float gradaux = i*3.14159f / 180.0f;
					glVertex3f(sin(gradaux)*30.11039f*radio, -10.0f, cos(gradaux)*30.10919f*radio);
				}
				glEnd();
				pos[0]=sin(angle/164.76647f*(pi/180))*30.11039f*radio;
				pos[1]=-11.5f;
				pos[2]=cos(angle/164.76647f *(pi / 180))*30.10919f*radio;

				//glTranslatef(0.0,-10.15f, 6021.838000000001)
				glTranslatef(pos[0],pos[1],pos[2]);
				glRotatef(angle2/1.63f, 0, 1, 0);
				glScalef(0.03264f*escala,0.03264f*escala,0.03264f*escala);
				break;
			case 8: //SOL
				glTranslatef(0, -50.0f, 0);
				glRotatef(angle/10,0,1,0);
				glScalef(1,1,1);
				break;
			case 9: //LUNA

				// glRotatef(angle,0,1,0);
				//glTranslatef(0, 0, 90);
				//glRotatef(angle, 0, 1, 0);
				// glScalef(0.02496f*escala,0.02496f*escala,0.02496f*escala);
				break;
		}
		glmDraw(mundo, GLM_SMOOTH | GLM_TEXTURE);
	}
	glPopMatrix();

}

void World::update() {
	angle += .01;
	angle2 += .02;
	x = cos(angle*(3.14 / 180))*6.0f;
	y = sin(angle*(3.14 / 180))*2.3f;
}

void World::assign(int pos) {

	changer = pos;

	switch(changer) {
		case 0:
			mundo = glmReadOBJ(const_cast<char *>("assets/Mercury/Mercury.obj"));
			break;
		case 1:
			mundo = glmReadOBJ(const_cast<char *>("assets/Venus/Venus.obj"));
			break;
		case 2:
			mundo = glmReadOBJ(const_cast<char *>("assets/Earth/Earth.obj"));
			break;
		case 3:
			mundo = glmReadOBJ(const_cast<char *>("assets/Mars/Mars.obj"));
			break;
		case 4:
			mundo = glmReadOBJ(const_cast<char *>("assets/Jupiter/Jupiter.obj"));
			break;
		case 5:
			mundo = glmReadOBJ(const_cast<char *>("assets/Saturn/Saturn.obj"));
			break;
		case 6:
			mundo = glmReadOBJ(const_cast<char *>("assets/Uranus/Uranus.obj"));
			break;
		case 7:
			mundo = glmReadOBJ(const_cast<char *>("assets/Neptune/Neptune.obj"));
			break;
		case 8:
			mundo = glmReadOBJ(const_cast<char *>("assets/Sol/Sol.obj"));
			break;
		case 9:
			mundo = glmReadOBJ(const_cast<char *>("assets/Sol/Sol.obj"));
			break;
	}

	glmFacetNormals(mundo);
	glmVertexNormals(mundo, 45.0f);

}

