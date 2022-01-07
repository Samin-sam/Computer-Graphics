#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846 // GLUT, include glu.h and gl.h
void Idle()
{
    glutPostRedisplay();
}
///rain
GLfloat Rainposition= 0.0f;
GLfloat Rainspeed=- 0.01f;
///cloud position
GLfloat positionCloud1=0.0f;
GLfloat speedCloud1=0.008f;
GLfloat positionCloud2=0.0f;
GLfloat speedCloud2=0.007f;
///birds position
GLfloat positionBird1 = 0.0f;
GLfloat speedBird1 = 0.03f;
GLfloat positionBird2 = 0.0f;
GLfloat speedBird2 = 0.03f;
GLfloat positionBird3 = 0.0f;
GLfloat speedBird3 = 0.03f;
///cloud update
void updateCloud(int value)
{
    if(positionCloud1 >1.45f)
    {
        positionCloud1 = 0.01f;
    }

    positionCloud1 += speedCloud1;

    if(positionCloud2 >1.285f)
    {
        positionCloud2 = 0.1f;
    }

    positionCloud2 += speedCloud2;

    glutPostRedisplay();

    glutTimerFunc(100, updateCloud, 0);
}
/// Birds update
void updateBirds(int value)
{
    if(positionBird1 >1.90f)
    {
        positionBird1 = 0.10f;
    }

    positionBird1 += speedBird1;

    if(positionBird2 >1.90f)
    {
        positionBird2 = 0.10f;
    }

    positionBird2 += speedBird2;

    if(positionBird3 >1.90f)
    {
        positionBird3 = 0.10f;
    }

    positionBird3 += speedBird3;


    glutPostRedisplay();

    glutTimerFunc(100, updateBirds, 0);
}
///rain update
void Rainupdate(int value) {

    if(Rainposition <-0.02f)
    {
        Rainposition = 0.04f;
    }
    Rainposition += Rainspeed;

	glutPostRedisplay();
	glutTimerFunc(100, Rainupdate, 0);
}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void handleMouse(int button, int state, int x, int y)
 {
	if (button == GLUT_LEFT_BUTTON)
        {
			speedCloud1 += 0.005f;
			speedCloud2 +=0.005f;

        }
			if (button == GLUT_RIGHT_BUTTON)
	{
	    speedCloud1 = 0.0f;
        speedCloud2 = 0.0f;

    }
	glutPostRedisplay();
	}

void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	 {
     case 'q':
        speedBird1 = 0.007f;
     break;
     case 'r':
        speedBird1 += 0.007f;
     break;
     case 'w':
          speedBird2 = 0.007f;
     break;
     case 't':
          speedBird2 += 0.007f;
     break;
     case 'e':
          speedBird3 = 0.007f;
     break;
      case 'y':
          speedBird3 += 0.007f;
     break;
      glutPostRedisplay();
	}
}


///rain
void rain()
{
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(1.0,1.0);
    glVertex2f(0.995,0.975);

    glVertex2f(0.980,1.0);
    glVertex2f(0.975,0.975);

    glVertex2f(0.960,1.0);
    glVertex2f(0.955,0.975);

    glVertex2f(0.940,1.0);
    glVertex2f(0.935,0.98);

    glVertex2f(0.920,1.0);
    glVertex2f(0.915,0.98);

    glVertex2f(0.900,1.0);
    glVertex2f(0.895,0.98);

    glVertex2f(0.880,1.0);
    glVertex2f(0.875,0.98);

    glVertex2f(0.860,1.0);
    glVertex2f(0.855,0.98);

    glVertex2f(0.840,1.0);
    glVertex2f(0.835,0.98);

    glVertex2f(0.820,1.0);
    glVertex2f(0.815,0.98);

    glVertex2f(0.800,1.0);
    glVertex2f(0.795,0.98);

    glVertex2f(0.780,1.0);
    glVertex2f(0.775,0.98);

    glVertex2f(0.760,1.0);
    glVertex2f(0.755,0.98);

    glVertex2f(0.740,1.0);
    glVertex2f(0.735,0.98);

    glVertex2f(0.720,1.0);
    glVertex2f(0.715,0.98);

    glVertex2f(0.700,1.0);
    glVertex2f(0.695,0.98);

    glVertex2f(0.680,1.0);
    glVertex2f(0.675,0.98);

    glVertex2f(0.660,1.0);
    glVertex2f(0.655,0.98);

    glVertex2f(0.640,1.0);
    glVertex2f(0.635,0.98);

    glVertex2f(0.620,1.0);
    glVertex2f(0.615,0.98);

    glVertex2f(0.600,1.0);
    glVertex2f(0.595,0.98);

    glVertex2f(0.580,1.0);
    glVertex2f(0.575,0.98);

    glVertex2f(0.560,1.0);
    glVertex2f(0.555,0.98);

    glVertex2f(0.540,1.0);
    glVertex2f(0.535,0.98);

    glVertex2f(0.520,1.0);
    glVertex2f(0.515,0.98);

    glVertex2f(0.500,1.0);
    glVertex2f(0.495,0.98);

    glVertex2f(0.480,1.0);
    glVertex2f(0.475,0.98);

    glVertex2f(0.460,1.0);
    glVertex2f(0.455,0.98);

    glVertex2f(0.440,1.0);
    glVertex2f(0.435,0.98);

    glVertex2f(0.420,1.0);
    glVertex2f(0.415,0.98);

    glVertex2f(0.400,1.0);
    glVertex2f(0.395,0.98);

    glVertex2f(0.380,1.0);
    glVertex2f(0.375,0.98);

    glVertex2f(0.360,1.0);
    glVertex2f(0.355,0.98);

    glVertex2f(0.340,1.0);
    glVertex2f(0.335,0.98);

    glVertex2f(0.320,1.0);
    glVertex2f(0.315,0.98);

    glVertex2f(0.300,1.0);
    glVertex2f(0.295,0.98);

    glVertex2f(0.280,1.0);
    glVertex2f(0.275,0.98);

    glVertex2f(0.260,1.0);
    glVertex2f(0.255,0.98);

    glVertex2f(0.240,1.0);
    glVertex2f(0.235,0.98);

    glVertex2f(0.220,1.0);
    glVertex2f(0.215,0.98);

    glVertex2f(0.200,1.0);
    glVertex2f(0.195,0.98);

    glVertex2f(0.180,1.0);
    glVertex2f(0.175,0.98);

    glVertex2f(0.160,1.0);
    glVertex2f(0.155,0.98);

    glVertex2f(0.140,1.0);
    glVertex2f(0.135,0.98);

    glVertex2f(0.120,1.0);
    glVertex2f(0.115,0.98);

    glVertex2f(0.100,1.0);
    glVertex2f(0.095,0.98);

    glVertex2f(0.080,1.0);
    glVertex2f(0.075,0.98);

    glVertex2f(0.060,1.0);
    glVertex2f(0.055,0.98);

    glVertex2f(0.040,1.0);
    glVertex2f(0.035,0.98);

    glVertex2f(0.020,1.0);
    glVertex2f(0.015,0.98);

    glVertex2f(0.000,1.0);
    glVertex2f(-0.005,0.98);

    glVertex2f(-0.020,1.0);
    glVertex2f(-0.025,0.98);

    glVertex2f(-0.040,1.0);
    glVertex2f(-0.045,0.98);

    glVertex2f(-0.060,1.0);
    glVertex2f(-0.065,0.98);

    glVertex2f(-0.080,1.0);
    glVertex2f(-0.085,0.98);

    glVertex2f(-0.100,1.0);
    glVertex2f(-0.105,0.98);

    glVertex2f(-0.120,1.0);
    glVertex2f(-0.125,0.98);

    glVertex2f(-0.140,1.0);
    glVertex2f(-0.145,0.98);

    glVertex2f(-0.160,1.0);
    glVertex2f(-0.165,0.98);

    glVertex2f(-0.180,1.0);
    glVertex2f(-0.185,0.98);

    glVertex2f(-0.200,1.0);
    glVertex2f(-0.205,0.98);

    glVertex2f(-0.220,1.0);
    glVertex2f(-0.225,0.98);

    glVertex2f(-0.240,1.0);
    glVertex2f(-0.245,0.98);

    glVertex2f(-0.260,1.0);
    glVertex2f(-0.265,0.98);

    glVertex2f(-0.280,1.0);
    glVertex2f(-0.285,0.98);

    glVertex2f(-0.300,1.0);
    glVertex2f(-0.305,0.98);

    glVertex2f(-0.320,1.0);
    glVertex2f(-0.325,0.98);

    glVertex2f(-0.340,1.0);
    glVertex2f(-0.345,0.98);

    glVertex2f(-0.360,1.0);
    glVertex2f(-0.365,0.98);

    glVertex2f(-0.380,1.0);
    glVertex2f(-0.385,0.98);

    glVertex2f(-0.400,1.0);
    glVertex2f(-0.405,0.98);

    glVertex2f(-0.420,1.0);
    glVertex2f(-0.425,0.98);

    glVertex2f(-0.440,1.0);
    glVertex2f(-0.445,0.98);

    glVertex2f(-0.460,1.0);
    glVertex2f(-0.465,0.98);

    glVertex2f(-0.480,1.0);
    glVertex2f(-0.485,0.98);

    glVertex2f(-0.500,1.0);
    glVertex2f(-0.505,0.98);

    glVertex2f(-0.520,1.0);
    glVertex2f(-0.525,0.98);

    glVertex2f(-0.540,1.0);
    glVertex2f(-0.545,0.98);

    glVertex2f(-0.560,1.0);
    glVertex2f(-0.565,0.98);

    glVertex2f(-0.580,1.0);
    glVertex2f(-0.585,0.98);

    glVertex2f(-0.600,1.0);
    glVertex2f(-0.605,0.98);

    glVertex2f(-0.620,1.0);
    glVertex2f(-0.625,0.98);

    glVertex2f(-0.640,1.0);
    glVertex2f(-0.645,0.98);

    glVertex2f(-0.660,1.0);
    glVertex2f(-0.665,0.98);

    glVertex2f(-0.680,1.0);
    glVertex2f(-0.685,0.98);

    glVertex2f(-0.700,1.0);
    glVertex2f(-0.705,0.98);

    glVertex2f(-0.720,1.0);
    glVertex2f(-0.725,0.98);

    glVertex2f(-0.740,1.0);
    glVertex2f(-0.745,0.98);

    glVertex2f(-0.760,1.0);
    glVertex2f(-0.765,0.98);

    glVertex2f(-0.780,1.0);
    glVertex2f(-0.785,0.98);

    glVertex2f(-0.800,1.0);
    glVertex2f(-0.805,0.98);

    glVertex2f(-0.820,1.0);
    glVertex2f(-0.825,0.98);

    glVertex2f(-0.840,1.0);
    glVertex2f(-0.845,0.98);

    glVertex2f(-0.860,1.0);
    glVertex2f(-0.865,0.98);

    glVertex2f(-0.880,1.0);
    glVertex2f(-0.885,0.98);

    glVertex2f(-0.900,1.0);
    glVertex2f(-0.905,0.98);

    glVertex2f(-0.920,1.0);
    glVertex2f(-0.925,0.98);

    glVertex2f(-0.940,1.0);
    glVertex2f(-0.945,0.98);

    glVertex2f(-0.960,1.0);
    glVertex2f(-0.965,0.98);

    glVertex2f(-0.980,1.0);
    glVertex2f(-0.985,0.98);
    glEnd();
}

 ///Day view
void display1() {
	glClearColor(1.0f, 1.0f,10.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2i(1,0) ;
glVertex2i(-1,0);
glColor3f(0,0,0);
glVertex2i(0,1);
glVertex2i(0,-1);
glEnd();

glBegin(GL_QUADS); /// field quads
glColor3ub(0, 153, 51);
glVertex2f(-1,0);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glVertex2f(1,0);
glEnd();
glBegin(GL_QUADS);  ///sky quad
glColor3ub(153, 204, 255);
glVertex2f(-1,0);
glVertex2f(1,0);
glVertex2f(1,1);
glVertex2f(-1,1);
glEnd();
///sun
      glBegin(GL_POLYGON);
      for(int i=0;i<100;i++){
        glColor3ub(255, 255, 77);
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.10;
        float x=r*cos(A)+0.8;
        float y=r*sin(A)+0.85;
       glVertex2f(x,y);
    }
    glEnd();


///Cloud
	glPushMatrix();
	glTranslatef(positionCloud1, 0.0, 0.0);

	glPushMatrix();
	glTranslatef(-0.28, 0.90, 0);

	glBegin(GL_POLYGON);
	glColor3ub(249, 249, 249);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-0.36, 0.81, 0);

	glBegin(GL_POLYGON);
	glColor3ub(249, 249, 249);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r =0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-0.33, 0.85, 0);

	glBegin(GL_POLYGON);
	glColor3ub(249, 249, 249);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.28, 0.80, 0);

	glBegin(GL_POLYGON);
	glColor3ub(249, 249, 249);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
    glPopMatrix();

///Cloud Two
	glPushMatrix();
	glTranslatef(positionCloud2, 0.0, 0.0);

	glPushMatrix();
	glTranslatef(0.25, 0.88, 0);

	glBegin(GL_POLYGON);
	glColor3ub(249,249,249);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.06;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.33, 0.81, 0);

	glBegin(GL_POLYGON);
	glColor3ub(249,249,249);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r =0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.30, 0.85, 0);

	glBegin(GL_POLYGON);
	glColor3ub(249,249,249);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.25, 0.80, 0);

	glBegin(GL_POLYGON);
	glColor3ub(249,249,249);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
    glPopMatrix();

/// Ahsan Manjil(pink palace)

glBegin(GL_QUADS);  /// Building quads started
glColor3ub(255, 153, 204);
glVertex2f(-0.9,-0.5);
glVertex2f(0.9,-0.5);
glVertex2f(0.9,0.35);
glVertex2f(-0.9,0.35);
glEnd();
glBegin(GL_QUADS);  ///upper side design
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.42);
glVertex2f(0.5,0.42);
glVertex2f(0.5,0.46);
glVertex2f(-0.5,0.46);
glEnd();
glBegin(GL_QUADS);  /// Building MIDDLE BORDER started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,-0.1);
glVertex2f(-0.9,-0.12);
glVertex2f(0.9,-0.12);
glVertex2f(0.9,-0.1);
glEnd();
glBegin(GL_QUADS);  /// Building upper quads started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.35);
glVertex2f(-0.9,0.38);
glVertex2f(0.9,0.38);
glVertex2f(0.9,0.35);
glEnd();
glBegin(GL_LINES); ///border
glColor3ub(153, 77, 0);
glVertex2f(-0.9,0.35);
glVertex2f(0.9,0.35);
glEnd();
glBegin(GL_QUADS);  /// Building upper 2nd quads started
glColor3ub(255, 153, 204);
glVertex2f(-0.9,0.38);
glVertex2f(0.9,0.38);
glVertex2f(0.9,0.42);
glVertex2f(-0.9,0.42);
glEnd();
glBegin(GL_QUADS);  ///piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.35);
glVertex2f(-0.85,0.3);
glVertex2f(-0.8,0.3);
glVertex2f(-0.75,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.85,0.3);
glVertex2f(-0.85,0.28);
glVertex2f(-0.8,0.28);
glVertex2f(-0.8,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(-0.9,-0.1);
glVertex2f(-0.75,-0.1);
glVertex2f(-0.8,-0.05);
glVertex2f(-0.85,-0.05);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.85,-0.05);
glVertex2f(-0.8,-0.05);
glVertex2f(-0.8,-0.03);
glVertex2f(-0.85,-0.03);
glEnd();
glBegin(GL_QUADS); /// main piller
glColor3ub(255, 204, 229);
glVertex2f(-0.85,-0.03);
glVertex2f(-0.8,-0.03);
glVertex2f(-0.8,0.28);
glVertex2f(-0.85,0.28);
glEnd();
glBegin(GL_QUADS); /// ventilator
glColor3ub(255, 204, 229);
glVertex2f(-0.75,0.26);
glVertex2f(-0.64,0.26);
glVertex2f(-0.64,0.31);
glVertex2f(-0.75,0.31);
glEnd();
glBegin(GL_QUADS); /// left side window 1
glColor3ub(153, 102, 51);
glVertex2f(-0.75,0.0);
glVertex2f(-0.66,0.0);
glVertex2f(-0.66,0.15);
glVertex2f(-0.75,0.15);
glEnd();
glBegin(GL_QUADS); /// left side window cover 1
glColor3ub(128, 43, 0);
glVertex2f(-0.75,0.15);
glVertex2f(-0.78,0.1);
glVertex2f(-0.63,0.1);
glVertex2f(-0.66,0.15);
glEnd();
glBegin(GL_QUADS); /// ventilator
glColor3ub(255, 204, 229);
glVertex2f(-0.61,0.26);
glVertex2f(-0.5,0.26);
glVertex2f(-0.5,0.31);
glVertex2f(-0.61,0.31);
glEnd();
glBegin(GL_QUADS); /// left side window 2
glColor3ub(153, 102, 51);
glVertex2f(-0.59,0.0);
glVertex2f(-0.5,0.0);
glVertex2f(-0.5,0.15);
glVertex2f(-0.59,0.15);
glEnd();
glBegin(GL_QUADS); /// left side window cover2
glColor3ub(128, 43, 0);
glVertex2f(-0.59,0.15);
glVertex2f(-0.62,0.1);
glVertex2f(-0.47,0.1);
glVertex2f(-0.5,0.15);
glEnd();

glBegin(GL_QUADS); /// ventilator border
glColor3ub(255, 153, 204);
glVertex2f(-0.73,0.27);
glVertex2f(-0.66,0.27);
glVertex2f(-0.66,0.3);
glVertex2f(-0.73,0.3);
glEnd();
glBegin(GL_QUADS); /// ventilator border
glColor3ub(255, 153, 204);
glVertex2f(-0.59,0.27);
glVertex2f(-0.52,0.27);
glVertex2f(-0.52,0.3);
glVertex2f(-0.59,0.3);
glEnd();
glBegin(GL_LINES); ///window details
glColor3ub(128, 43, 0);
glVertex2f(-0.625,-0.1);
glVertex2f(-0.625,0.35);
glEnd();
glBegin(GL_LINES);/// window details
glColor3ub(128, 43, 0);
glVertex2f(-0.8,0.2);
glVertex2f(-0.4,0.2);
glEnd();
glBegin(GL_QUADS);  ///left side 1st final pillar
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.42);
glVertex2f(-0.75,0.42);
glVertex2f(-0.75,0.62);
glVertex2f(-0.9,0.62);
glEnd();
glBegin(GL_QUADS);  ///left side 1st final pillar border
glColor3ub(255, 153, 204);
glVertex2f(-0.88,0.42);
glVertex2f(-0.77,0.42);
glVertex2f(-0.77,0.58);
glVertex2f(-0.88,0.58);
glEnd();
glBegin(GL_QUADS);  ///left side triangle border
glColor3ub(255,204,229);
glVertex2f(-0.75,0.42);
glVertex2f(-0.49,0.42);
glVertex2f(-0.49,0.46);
glVertex2f(-0.75,0.46);
glEnd();
glBegin(GL_LINES);
glColor3ub(153, 77, 0);
glVertex2f(-0.75,0.46);
glVertex2f(-0.49,0.46);
glEnd();
glBegin(GL_TRIANGLES);  ///1ST triangle
glColor3ub(255,153,204);
glVertex2f(-0.75,0.46);
glVertex2f(-0.49,0.46);
glVertex2f(-0.62,0.62);
glEnd();
glBegin(GL_TRIANGLES);  ///1ST INNER triangle
glColor3ub(255,204,229);
glVertex2f(-0.69,0.46);
glVertex2f(-0.55,0.46);
glVertex2f(-0.62,0.62);
glEnd();
glBegin(GL_QUADS);  ///2nd piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.35);
glVertex2f(-0.45,0.3);
glVertex2f(-0.4,0.3);
glVertex2f(-0.35,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.45,0.3);
glVertex2f(-0.45,0.28);
glVertex2f(-0.4,0.28);
glVertex2f(-0.4,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(-0.5,-0.1);
glVertex2f(-0.45,-0.05);
glVertex2f(-0.4,-0.05);
glVertex2f(-0.35,-0.1);
glEnd();
glBegin(GL_QUADS); ///2nd piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.45,-0.05);
glVertex2f(-0.4,-0.05);
glVertex2f(-0.4,-0.03);
glVertex2f(-0.45,-0.03);
glEnd();
glBegin(GL_QUADS); ///2nd main piller border
glColor3ub(255, 204, 229);
glVertex2f(-0.45,-0.03);
glVertex2f(-0.4,-0.03);
glVertex2f(-0.4,0.28);
glVertex2f(-0.45,0.28);
glEnd();
glBegin(GL_QUADS);  ///2nd final piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.42);
glVertex2f(-0.35,0.42);
glVertex2f(-0.35,0.62);
glVertex2f(-0.5,0.62);
glEnd();
glBegin(GL_QUADS);  ///2nd final piller border
glColor3ub(255, 153, 204);
glVertex2f(-0.48,0.42);
glVertex2f(-0.37,0.42);
glVertex2f(-0.37,0.58);
glVertex2f(-0.48,0.58);
glEnd();
glBegin(GL_QUADS);  ///right piller started
glColor3ub(255, 204, 229);
glVertex2f(0.9,0.35);
glVertex2f(0.85,0.3);
glVertex2f(0.8,0.3);
glVertex2f(0.75,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.85,0.3);
glVertex2f(0.85,0.28);
glVertex2f(0.8,0.28);
glVertex2f(0.8,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(0.9,-0.1);
glVertex2f(0.75,-0.1);
glVertex2f(0.8,-0.05);
glVertex2f(0.85,-0.05);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.85,-0.05);
glVertex2f(0.8,-0.05);
glVertex2f(0.8,-0.03);
glVertex2f(0.85,-0.03);
glEnd();
glBegin(GL_QUADS); /// main piller
glColor3ub(255, 204, 229);
glVertex2f(0.85,-0.03);
glVertex2f(0.8,-0.03);
glVertex2f(0.8,0.28);
glVertex2f(0.85,0.28);
glEnd();
glBegin(GL_QUADS);  ///right 2nd piller started
glColor3ub(255, 204, 229);
glVertex2f(0.5,0.35);
glVertex2f(0.45,0.3);
glVertex2f(0.4,0.3);
glVertex2f(0.35,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.45,0.3);
glVertex2f(0.45,0.28);
glVertex2f(0.4,0.28);
glVertex2f(0.4,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(0.5,-0.1);
glVertex2f(0.45,-0.05);
glVertex2f(0.4,-0.05);
glVertex2f(0.35,-0.1);
glEnd();
glBegin(GL_QUADS); ///right 2nd piller border
glColor3ub(153, 77, 0);
glVertex2f(0.45,-0.05);
glVertex2f(0.4,-0.05);
glVertex2f(0.4,-0.03);
glVertex2f(0.45,-0.03);
glEnd();
glBegin(GL_QUADS); ///right  2nd main piller border
glColor3ub(255, 204, 229);
glVertex2f(0.45,-0.03);
glVertex2f(0.4,-0.03);
glVertex2f(0.4,0.28);
glVertex2f(0.45,0.28);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator
glColor3ub(255, 204, 229);
glVertex2f(0.75,0.26);
glVertex2f(0.64,0.26);
glVertex2f(0.64,0.31);
glVertex2f(0.75,0.31);
glEnd();
glBegin(GL_QUADS); /// right side window 1
glColor3ub(153, 102, 51);
glVertex2f(0.75,0.0);
glVertex2f(0.66,0.0);
glVertex2f(0.66,0.15);
glVertex2f(0.75,0.15);
glEnd();
glBegin(GL_QUADS); /// right side window cover 1
glColor3ub(128, 43, 0);
glVertex2f(0.75,0.15);
glVertex2f(0.78,0.1);
glVertex2f(0.63,0.1);
glVertex2f(0.66,0.15);
glEnd();

glBegin(GL_QUADS); /// 2nd ventilator
glColor3ub(255, 204, 229);
glVertex2f(0.61,0.26);
glVertex2f(0.5,0.26);
glVertex2f(0.5,0.31);
glVertex2f(0.61,0.31);
glEnd();
glBegin(GL_QUADS); /// right side window 2
glColor3ub(153, 102, 51);
glVertex2f(0.59,0.0);
glVertex2f(0.5,0.0);
glVertex2f(0.5,0.15);
glVertex2f(0.59,0.15);
glEnd();
glBegin(GL_QUADS); /// right side window cover2
glColor3ub(128, 43, 0);
glVertex2f(0.59,0.15);
glVertex2f(0.62,0.1);
glVertex2f(0.47,0.1);
glVertex2f(0.5,0.15);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator border
glColor3ub(255, 153, 204);
glVertex2f(0.73,0.27);
glVertex2f(0.66,0.27);
glVertex2f(0.66,0.3);
glVertex2f(0.73,0.3);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator border
glColor3ub(255, 153, 204);
glVertex2f(0.59,0.27);
glVertex2f(0.52,0.27);
glVertex2f(0.52,0.3);
glVertex2f(0.59,0.3);
glEnd();
glBegin(GL_LINES); ///right side window details
glColor3ub(128, 43, 0);
glVertex2f(0.625,-0.1);
glVertex2f(0.625,0.35);
glEnd();
glBegin(GL_LINES);///right side window details
glColor3ub(128, 43, 0);
glVertex2f(0.8,0.2);
glVertex2f(0.45,0.2);
glEnd();
glBegin(GL_QUADS); ///right 1st final piller started
glColor3ub(255, 204, 229);
glVertex2f(0.5,0.42);
glVertex2f(0.35,0.42);
glVertex2f(0.35,0.62);
glVertex2f(0.5,0.62);
glEnd();
glBegin(GL_QUADS);  ///right 1st final piller border
glColor3ub(255, 153, 204);
glVertex2f(0.48,0.42);
glVertex2f(0.37,0.42);
glVertex2f(0.37,0.58);
glVertex2f(0.48,0.58);
glEnd();
glBegin(GL_QUADS);  ///right side 2nd final pillar
glColor3ub(255, 204, 229);
glVertex2f(0.9,0.42);
glVertex2f(0.75,0.42);
glVertex2f(0.75,0.62);
glVertex2f(0.9,0.62);
glEnd();
glBegin(GL_QUADS);  ///right side 2nd final pillar border
glColor3ub(255, 153, 204);
glVertex2f(0.88,0.42);
glVertex2f(0.77,0.42);
glVertex2f(0.77,0.58);
glVertex2f(0.88,0.58);
glEnd();
glBegin(GL_QUADS);  ///left side triangle border
glColor3ub(255,204,229);
glVertex2f(0.75,0.42);
glVertex2f(0.49,0.42);
glVertex2f(0.49,0.46);
glVertex2f(0.75,0.46);
glEnd();
glBegin(GL_LINES); ///details
glColor3ub(153, 77, 0);
glVertex2f(0.75,0.46);
glVertex2f(0.5,0.46);
glEnd();
glBegin(GL_TRIANGLES);  ///2nd triangle
glColor3ub(255,153,204);
glVertex2f(0.75,0.46);
glVertex2f(0.5,0.46);
glVertex2f(0.62,0.62);
glEnd();
glBegin(GL_TRIANGLES);  ///2nd INNER triangle
glColor3ub(255,204,229);
glVertex2f(0.69,0.46);
glVertex2f(0.55,0.46);
glVertex2f(0.62,0.62);
glEnd();

glBegin(GL_QUADS);  ///stairs upper border
glColor3ub(153,77,0);
glVertex2f(-0.3,-0.1);
glVertex2f(0.3,-0.1);
glVertex2f(0.3,-0.02);
glVertex2f(-0.3,-0.02);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(-0.28,-0.1);
glVertex2f(-0.18,-0.1);
glVertex2f(-0.18,-0.04);
glVertex2f(-0.28,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(-0.12,-0.1);
glVertex2f(-0.02,-0.1);
glVertex2f(-0.02,-0.04);
glVertex2f(-0.12,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(0.0,-0.1);
glVertex2f(0.1,-0.1);
glVertex2f(0.1,-0.04);
glVertex2f(0.0,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(0.16,-0.1);
glVertex2f(0.27,-0.1);
glVertex2f(0.27,-0.04);
glVertex2f(0.16,-0.04);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 204, 229);/// left Middle pillar
glVertex2f(-0.19,-0.02);
glVertex2f(-0.27,-0.02);
glVertex2f(-0.27,0.55);
glVertex2f(-0.19,0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204); ///left middle pillar inner border
glVertex2f(-0.21,-0.02);
glVertex2f(-0.25,-0.02);
glVertex2f(-0.25,0.5);
glVertex2f(-0.21,0.5);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);/// left most door
glVertex2f(-0.1,-0.02);
glVertex2f(-0.19,-0.02);
glVertex2f(-0.19,0.23);
glVertex2f(-0.1,0.23);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,204,229);///left side middle 3/4 pillar
glVertex2f(-0.1,-0.02);
glVertex2f(-0.05,-0.02);
glVertex2f(-0.05,0.42);
glVertex2f(-0.1,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204);///left side middle 3/4 pillar border
glVertex2f(-0.09,-0.02);
glVertex2f(-0.06,-0.02);
glVertex2f(-0.06,0.42);
glVertex2f(-0.09,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);///middle main door
glVertex2f(-0.05,-0.02);
glVertex2f(0.05,-0.02);
glVertex2f(0.05,0.3);
glVertex2f(-0.05,0.3);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,204,229);///right side middle 2/4 pillar
glVertex2f(0.1,-0.02);
glVertex2f(0.05,-0.02);
glVertex2f(0.05,0.42);
glVertex2f(0.1,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204);///right side middle 2/4 pillar border
glVertex2f(0.09,-0.02);
glVertex2f(0.06,-0.02);
glVertex2f(0.06,0.42);
glVertex2f(0.09,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);///right most door
glVertex2f(0.1,-0.02);
glVertex2f(0.19,-0.02);
glVertex2f(0.19,0.23);
glVertex2f(0.1,0.23);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 204, 229);///right Middle pillar
glVertex2f(0.19,-0.02);
glVertex2f(0.27,-0.02);
glVertex2f(0.27,0.55);
glVertex2f(0.19,0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204); ///right middle pillar inner border
glVertex2f(0.21,-0.02);
glVertex2f(0.25,-0.02);
glVertex2f(0.25,0.5);
glVertex2f(0.21,0.5);
glEnd();
glBegin(GL_LINES); /// middle border details
glColor3ub(153, 77, 0);
glVertex2f(-0.9,-0.1);
glVertex2f(0.9,-0.1);
glEnd();
glBegin(GL_LINES); /// middle border details2
glColor3ub(153, 77, 0);
glVertex2f(-0.9,-0.12);
glVertex2f(0.9,-0.12);
glEnd();

glBegin(GL_QUADS);  ///stairs side border1
glColor3ub(153,77,0);
glVertex2f(-0.32,-0.1);
glVertex2f(-0.32,-0.3);
glVertex2f(0.32,-0.3);
glVertex2f(0.32,-0.1);
glEnd();
glBegin(GL_QUADS);  ///stairs middle border1
glColor3ub(136, 136, 68);
glVertex2f(-0.3,-0.1);
glVertex2f(-0.3,-0.3);
glVertex2f(0.3,-0.3);
glVertex2f(0.3,-0.1);
glEnd();

glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.1);
glVertex2f(-0.3,-0.13);
glVertex2f(0.3,-0.13);
glVertex2f(0.3,-0.1);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.16);
glVertex2f(-0.3,-0.19);
glVertex2f(0.3,-0.19);
glVertex2f(0.3,-0.16);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.22);
glVertex2f(-0.3,-0.25);
glVertex2f(0.3,-0.25);
glVertex2f(0.3,-0.22);
glEnd();

glBegin(GL_QUADS);  ///stairs side border2
glColor3ub(153,77,0);
glVertex2f(-0.34,-0.3);
glVertex2f(-0.34,-0.5);
glVertex2f(0.34,-0.5);
glVertex2f(0.34,-0.3);
glEnd();
glBegin(GL_QUADS);  ///stairs middle border2
glColor3ub(136, 136, 68);
glVertex2f(-0.32,-0.3);
glVertex2f(-0.32,-0.5);
glVertex2f(0.32,-0.5);
glVertex2f(0.32,-0.3);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.28);
glVertex2f(-0.32,-0.31);
glVertex2f(0.32,-0.31);
glVertex2f(0.32,-0.28);
glEnd();

glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.34);
glVertex2f(-0.32,-0.37);
glVertex2f(0.32,-0.37);
glVertex2f(0.32,-0.34);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.4);
glVertex2f(-0.32,-0.43);
glVertex2f(0.32,-0.43);
glVertex2f(0.32,-0.4);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.46);
glVertex2f(-0.32,-0.49);
glVertex2f(0.32,-0.49);
glVertex2f(0.32,-0.46);
glEnd();
glBegin(GL_QUADS);  ///down left side pillar1
glColor3ub(255,204,229);
glVertex2f(-0.9,-0.12);
glVertex2f(-0.9,-0.5);
glVertex2f(-0.8,-0.5);
glVertex2f(-0.8,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.15);
glVertex2f(-0.8,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.2);
glVertex2f(-0.8,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.25);
glVertex2f(-0.8,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.3);
glVertex2f(-0.8,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.35);
glVertex2f(-0.8,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.4);
glVertex2f(-0.8,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.45);
glVertex2f(-0.8,-0.45);
glEnd();
glBegin(GL_QUADS); /// DOWN left side window 1
glColor3ub(153, 102, 51);
glVertex2f(-0.75,-0.2);
glVertex2f(-0.66,-0.2);
glVertex2f(-0.66,-0.5);
glVertex2f(-0.75,-0.5);
glEnd();
glBegin(GL_QUADS);  ///down left side pillar2
glColor3ub(255,204,229);
glVertex2f(-0.35,-0.12);
glVertex2f(-0.35,-0.5);
glVertex2f(-0.45,-0.5);
glVertex2f(-0.45,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.15);
glVertex2f(-0.45,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.2);
glVertex2f(-0.45,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.25);
glVertex2f(-0.45,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.3);
glVertex2f(-0.45,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.35);
glVertex2f(-0.45,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.4);
glVertex2f(-0.45,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.45);
glVertex2f(-0.45,-0.45);
glEnd();
glBegin(GL_QUADS); /// DOWN LEFT side window 2
glColor3ub(153, 102, 51);
glVertex2f(-0.59,-0.2);
glVertex2f(-0.5,-0.2);
glVertex2f(-0.5,-0.5);
glVertex2f(-0.59,-0.5);
glEnd();


glBegin(GL_QUADS); ///down RIGHT side pillar1
glColor3ub(255,204,229);
glVertex2f(0.9,-0.12);
glVertex2f(0.9,-0.5);
glVertex2f(0.8,-0.5);
glVertex2f(0.8,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.15);
glVertex2f(0.8,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.2);
glVertex2f(0.8,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.25);
glVertex2f(0.8,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.3);
glVertex2f(0.8,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.35);
glVertex2f(0.8,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.4);
glVertex2f(0.8,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.45);
glVertex2f(0.8,-0.45);
glEnd();
glBegin(GL_QUADS); ///DOWN RIGHT side window 1
glColor3ub(153, 102, 51);
glVertex2f(0.75,-0.2);
glVertex2f(0.66,-0.2);
glVertex2f(0.66,-0.5);
glVertex2f(0.75,-0.5);
glEnd();
glBegin(GL_QUADS);  ///down RIGHT side pillar2
glColor3ub(255,204,229);
glVertex2f(0.35,-0.12);
glVertex2f(0.35,-0.5);
glVertex2f(0.45,-0.5);
glVertex2f(0.45,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.15);
glVertex2f(0.45,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.2);
glVertex2f(0.45,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.25);
glVertex2f(0.45,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.3);
glVertex2f(0.45,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.35);
glVertex2f(0.45,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.4);
glVertex2f(0.45,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.45);
glVertex2f(0.45,-0.45);
glEnd();
glBegin(GL_QUADS); ///DOWN right side window 2
glColor3ub(153, 102, 51);
glVertex2f(0.59,-0.2);
glVertex2f(0.5,-0.2);
glVertex2f(0.5,-0.5);
glVertex2f(0.59,-0.5);
glEnd();

///the round shapes gombuj
int j;

	GLfloat a=0.0f; GLfloat b=0.7f; GLfloat rad =0.2f;
	int triangleAmoun = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twiceP = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(a, b); // center of circle
		for(j = 0; j <= triangleAmoun;j++) {
			glVertex2f(
		            a + (rad * cos(j *  twiceP / triangleAmoun)),b + (rad * sin(j * twiceP/ triangleAmoun))
			);
		}
	glEnd();
glBegin(GL_QUADS); ///round down pillar1
glColor3ub(255, 153, 204);
glVertex2f(-0.19,0.65);
glVertex2f(-0.19,0.45);
glVertex2f(0.19,0.45);
glVertex2f(0.19,0.65);
glEnd();
glBegin(GL_QUADS); /// round down pillar1 border
glColor3ub(255, 128, 179);
glVertex2f(-0.17,0.63);
glVertex2f(-0.17,0.45);
glVertex2f(0.17,0.45);
glVertex2f(0.17,0.63);
glEnd();
glBegin(GL_QUADS); /// round down pillar1 window
glColor3ub(153, 102, 51);
glVertex2f(-0.06,0.58);
glVertex2f(-0.06,0.45);
glVertex2f(0.06,0.45);
glVertex2f(0.06,0.58);
glEnd();
glBegin(GL_QUADS); ///round down pillar2
glColor3ub(255,204,229);
glVertex2f(-0.25,0.7);
glVertex2f(-0.25,0.65);
glVertex2f(0.25,0.65);
glVertex2f(0.25,0.7);
glEnd();
glBegin(GL_TRIANGLES); ///round down pillar2
glColor3ub(163, 163, 194);
glVertex2f(-0.03,0.89);
glVertex2f(0.03,0.89);
glVertex2f(0.0,1.0);
glEnd();
glBegin(GL_QUADS); ///round down pillar2
glColor3ub(51, 204, 51);
glVertex2f(-0.9,-0.85);
glVertex2f(-0.9,-0.9);
glVertex2f(0.9,-0.9);
glVertex2f(0.9,-0.85);
glEnd();


int i;

	GLfloat c=-0.83f; GLfloat d=0.65; GLfloat radious =0.03f;
	int triangleAmount = 10; ///# of triangles used to draw circle

	//GLfloat radius = 0.8f; ///radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(c, d); /// center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radious * cos(i *  twicePi / triangleAmount)),d + (radious * sin(i * twicePi/ triangleAmount))
			);
		}
	glEnd();


	int k;

	GLfloat e=-0.43f; GLfloat f=0.65; GLfloat radious1 =0.03f;
	int triangleAmount1 = 10; ///# of triangles used to draw circle

	//GLfloat radius = 0.8f; ///radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(e, f); /// center of circle
		for(k = 0; k <= triangleAmount1;k++) {
			glVertex2f(
		            e + (radious1 * cos(k *  twicePi1 / triangleAmount1)),f + (radious1 * sin(k * twicePi1/ triangleAmount1))
			);
		}
	glEnd();



	int L;         ///positive axis

	GLfloat g=0.43f; GLfloat h=0.65; GLfloat radious2 =0.03f;
	int triangleAmount2 = 10; ///# of triangles used to draw circle

	//GLfloat radius = 0.8f; ///radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(g, h); /// center of circle
		for(L = 0; L <= triangleAmount1;L++) {
			glVertex2f(
		            g + (radious2 * cos(L *  twicePi2 / triangleAmount2)),h + (radious2 * sin(L * twicePi2/ triangleAmount2))
			);
		}
	glEnd();

	int m;

	GLfloat n=0.83f; GLfloat o=0.65; GLfloat radious3 =0.03f;
	int triangleAmount3 = 10; ///# of triangles used to draw circle

	//GLfloat radius = 0.8f; ///radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(n, o); /// center of circle
		for(m = 0; m <= triangleAmount3;m++) {
			glVertex2f(
		            n + (radious3 * cos(m *  twicePi3 / triangleAmount3)),o + (radious3 * sin(m * twicePi3/ triangleAmount3))
			);
		}
	glEnd();

/// Birds
///bird 1
glPushMatrix();
glTranslatef(positionBird1,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.8,0.8);
glVertex2f(-0.76,0.76);
glVertex2f(-0.72,0.76);
glVertex2f(-0.67,0.8);
glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.71,0.82);
glVertex2f(-0.71,0.8);
glVertex2f(-0.69,0.8);
glVertex2f(-0.69,0.82);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.76,0.8);
glVertex2f(-0.73,0.8);
glVertex2f(-0.76,0.84);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.72,0.8);
glVertex2f(-0.76,0.8);
glVertex2f(-0.71,0.84);

glEnd();
glPopMatrix();

///Bird 2
glPushMatrix();
glTranslatef(positionBird2,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.7,0.7);
glVertex2f(-0.66,0.66);
glVertex2f(-0.62,0.66);
glVertex2f(-0.57,0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.61,0.72);
glVertex2f(-0.61,0.7);
glVertex2f(-0.59,0.7);
glVertex2f(-0.59,0.72);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.67,0.7);
glVertex2f(-0.64,0.7);
glVertex2f(-0.67,0.74);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.66,0.7);
glVertex2f(-0.62,0.7);
glVertex2f(-0.62,0.74);
glEnd();
glPopMatrix();

/// Bird 3
glPushMatrix();
glTranslatef(positionBird3,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.65,0.9);
glVertex2f(-0.61,0.86);
glVertex2f(-0.57,0.86);
glVertex2f(-0.53,0.9);
glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.55,0.9);
glVertex2f(-0.57,0.9);
glVertex2f(-0.57,0.92);
glVertex2f(-0.55,0.92);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.62,0.9);
glVertex2f(-0.58,0.9);
glVertex2f(-0.62,0.94);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.61,0.9);
glVertex2f(-0.58,0.9);
glVertex2f(-0.58,0.94);
glEnd();
glPopMatrix();

///small trees
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.85,-0.4);
glVertex2f(-0.85,-0.6);
glVertex2f(-0.82,-0.6);
glVertex2f(-0.82,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.9,-0.45);
glVertex2f(-0.76,-0.45);
glVertex2f(-0.83,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.9,-0.4);
glVertex2f(-0.76,-0.4);
glVertex2f(-0.83,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.64,-0.4);
glVertex2f(-0.64,-0.6);
glVertex2f(-0.61,-0.6);
glVertex2f(-0.61,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.69,-0.45);
glVertex2f(-0.55,-0.45);
glVertex2f(-0.62,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.69,-0.4);
glVertex2f(-0.55,-0.4);
glVertex2f(-0.62,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.36,-0.4);
glVertex2f(-0.36,-0.6);
glVertex2f(-0.33,-0.6);
glVertex2f(-0.33,-0.4);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.41,-0.45);
glVertex2f(-0.27,-0.45);
glVertex2f(-0.345,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.41,-0.4);
glVertex2f(-0.27,-0.4);
glVertex2f(-0.345,-0.3);
glEnd();
///small tree x axis(positive)
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.85,-0.4);
glVertex2f(0.85,-0.6);
glVertex2f(0.82,-0.6);
glVertex2f(0.82,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.9,-0.45);
glVertex2f(0.76,-0.45);
glVertex2f(0.83,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.9,-0.4);
glVertex2f(0.76,-0.4);
glVertex2f(0.83,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.64,-0.4);
glVertex2f(0.64,-0.6);
glVertex2f(0.61,-0.6);
glVertex2f(0.61,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.69,-0.45);
glVertex2f(0.55,-0.45);
glVertex2f(0.62,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.69,-0.4);
glVertex2f(0.55,-0.4);
glVertex2f(0.62,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.36,-0.4);
glVertex2f(0.36,-0.6);
glVertex2f(0.33,-0.6);
glVertex2f(0.33,-0.4);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.41,-0.45);
glVertex2f(0.27,-0.45);
glVertex2f(0.345,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.41,-0.4);
glVertex2f(0.27,-0.4);
glVertex2f(0.345,-0.3);
glEnd();



///tree
    glBegin(GL_QUADS);///coplant
	glColor3ub(77, 40, 0);
	glVertex2f(-0.8f, -0.75f);
	glVertex2f(-0.77f,-0.75f);
	glVertex2f(-0.77f, -0.9f);
	glVertex2f(-0.8f, -0.9f);
	glEnd();

    glBegin(GL_QUADS);///coplant2
	glColor3ub(77, 40, 0);
	glVertex2f(-0.77f, -0.3f);
	glVertex2f(-0.76f,-0.3f);
	glVertex2f(-0.77f, -0.75f);
	glVertex2f(-0.8f, -0.75f);
	glEnd();


    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(-0.77f, -0.3f);
    glVertex2f(-0.86f,-0.33f);
    glVertex2f(-0.8f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(-0.9f, -0.45f);
    glVertex2f(-0.86f,-0.33f);
    glVertex2f(-0.8f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(-0.77f, -0.3f);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.68f, -0.4f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.6f, -0.45f);
	glEnd();

    glBegin(GL_QUADS);///copata3
	glColor3ub(0, 77, 0);
    glVertex2f(-0.56f,-0.27f);
    glVertex2f(-0.67f, -0.2f);
    glVertex2f(-0.57f, -0.25f);
    glVertex2f(-0.77f, -0.3f);
	glEnd();

    glBegin(GL_QUADS);///copata4
	glColor3ub(0, 77, 0);
    glVertex2f(-0.90f,-0.28f);
    glVertex2f(-0.97f, -0.25f);
    glVertex2f(-0.87f, -0.2f);
    glVertex2f(-0.77f, -0.3f);
	glEnd();
   ///tree two
    glBegin(GL_QUADS);///coplant
	glColor3ub(77, 40, 0);
	glVertex2f(0.80f, -0.75f);
	glVertex2f(0.77f, -0.75f);
	glVertex2f(0.77f, -0.90f);
	glVertex2f(0.80f, -0.90f);
	glEnd();

    glBegin(GL_QUADS);///coplant2
	glColor3ub(77, 40, 0);
	glVertex2f(0.77f, -0.3f);
	glVertex2f(0.76f, -0.3f);
	glVertex2f(0.77f, -0.75f);
	glVertex2f(0.80f, -0.75f);
	glEnd();


    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(0.77f, -0.30f);
    glVertex2f(0.86f, -0.33f);
    glVertex2f(0.80f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(0.90f, -0.45f);
    glVertex2f(0.86f, -0.33f);
    glVertex2f(0.80f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(0.77f, -0.30f);
    glVertex2f(0.65f, -0.33f);
    glVertex2f(0.68f, -0.40f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(0.65f, -0.33f);
    glVertex2f(0.68f, -0.40f);
    glVertex2f(0.60f, -0.45f);
	glEnd();

    glBegin(GL_QUADS);///copata3
	glColor3ub(0, 77, 0);
    glVertex2f(0.56f, -0.27f);
    glVertex2f(0.67f, -0.20f);
    glVertex2f(0.57f, -0.25f);
    glVertex2f(0.77f, -0.30f);
	glEnd();

    glBegin(GL_QUADS);///copata4
	glColor3ub(0, 77, 0);
    glVertex2f(0.90f, -0.28f);
    glVertex2f(0.97f, -0.25f);
    glVertex2f(0.87f, -0.20f);
    glVertex2f(0.77f, -0.30f);
	glEnd();


glFlush();
}
///Evening View

void display2() {
	glClearColor(1.0f, 1.0f,10.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2i(1,0) ;
glVertex2i(-1,0);
glColor3f(0,0,0);
glVertex2i(0,1);
glVertex2i(0,-1);
glEnd();

glBegin(GL_QUADS); /// field quads
glColor3ub(0, 153, 51);
glVertex2f(-1,0);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glVertex2f(1,0);
glEnd();
glBegin(GL_QUADS);  ///sky quad
glColor3ub(255, 166, 77);
glVertex2f(-1,0);
glVertex2f(1,0);
glVertex2f(1,1);
glVertex2f(-1,1);
glEnd();

///sun
      glBegin(GL_POLYGON);
      for(int i=0;i<100;i++){
        glColor3ub(255, 133, 51);
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.10;
        float x=r*cos(A)+0.8;
        float y=r*sin(A)+0.85;
       glVertex2f(x,y);
    }
    glEnd();

///Cloud
	glPushMatrix();
	glTranslatef(positionCloud1, 0.0, 0.0);

	glPushMatrix();
	glTranslatef(-0.28, 0.90, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-0.36, 0.81, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r =0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-0.33, 0.85, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.28, 0.80, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
    glPopMatrix();

///Cloud Two
	glPushMatrix();
	glTranslatef(positionCloud2, 0.0, 0.0);

	glPushMatrix();
	glTranslatef(0.25, 0.88, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.06;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.33, 0.81, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r =0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.30, 0.85, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.25, 0.80, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
    glPopMatrix();



/// Ahsan Manjil(pink palace)

glBegin(GL_QUADS);  /// Building quads started
glColor3ub(255, 153, 204);
glVertex2f(-0.9,-0.5);
glVertex2f(0.9,-0.5);
glVertex2f(0.9,0.35);
glVertex2f(-0.9,0.35);
glEnd();
glBegin(GL_QUADS);  ///upper side design
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.42);
glVertex2f(0.5,0.42);
glVertex2f(0.5,0.46);
glVertex2f(-0.5,0.46);
glEnd();
glBegin(GL_QUADS);  /// Building MIDDLE BORDER started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,-0.1);
glVertex2f(-0.9,-0.12);
glVertex2f(0.9,-0.12);
glVertex2f(0.9,-0.1);
glEnd();
glBegin(GL_QUADS);  /// Building upper quads started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.35);
glVertex2f(-0.9,0.38);
glVertex2f(0.9,0.38);
glVertex2f(0.9,0.35);
glEnd();
glBegin(GL_LINES); ///border
glColor3ub(153, 77, 0);
glVertex2f(-0.9,0.35);
glVertex2f(0.9,0.35);
glEnd();
glBegin(GL_QUADS);  /// Building upper 2nd quads started
glColor3ub(255, 153, 204);
glVertex2f(-0.9,0.38);
glVertex2f(0.9,0.38);
glVertex2f(0.9,0.42);
glVertex2f(-0.9,0.42);
glEnd();
glBegin(GL_QUADS);  ///piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.35);
glVertex2f(-0.85,0.3);
glVertex2f(-0.8,0.3);
glVertex2f(-0.75,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.85,0.3);
glVertex2f(-0.85,0.28);
glVertex2f(-0.8,0.28);
glVertex2f(-0.8,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(-0.9,-0.1);
glVertex2f(-0.75,-0.1);
glVertex2f(-0.8,-0.05);
glVertex2f(-0.85,-0.05);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.85,-0.05);
glVertex2f(-0.8,-0.05);
glVertex2f(-0.8,-0.03);
glVertex2f(-0.85,-0.03);
glEnd();
glBegin(GL_QUADS); /// main piller
glColor3ub(255, 204, 229);
glVertex2f(-0.85,-0.03);
glVertex2f(-0.8,-0.03);
glVertex2f(-0.8,0.28);
glVertex2f(-0.85,0.28);
glEnd();
glBegin(GL_QUADS); /// ventilator
glColor3ub(255, 204, 229);
glVertex2f(-0.75,0.26);
glVertex2f(-0.64,0.26);
glVertex2f(-0.64,0.31);
glVertex2f(-0.75,0.31);
glEnd();
glBegin(GL_QUADS); /// left side window 1
glColor3ub(153, 102, 51);
glVertex2f(-0.75,0.0);
glVertex2f(-0.66,0.0);
glVertex2f(-0.66,0.15);
glVertex2f(-0.75,0.15);
glEnd();
glBegin(GL_QUADS); /// left side window cover 1
glColor3ub(128, 43, 0);
glVertex2f(-0.75,0.15);
glVertex2f(-0.78,0.1);
glVertex2f(-0.63,0.1);
glVertex2f(-0.66,0.15);
glEnd();
glBegin(GL_QUADS); /// ventilator
glColor3ub(255, 204, 229);
glVertex2f(-0.61,0.26);
glVertex2f(-0.5,0.26);
glVertex2f(-0.5,0.31);
glVertex2f(-0.61,0.31);
glEnd();
glBegin(GL_QUADS); /// left side window 2
glColor3ub(153, 102, 51);
glVertex2f(-0.59,0.0);
glVertex2f(-0.5,0.0);
glVertex2f(-0.5,0.15);
glVertex2f(-0.59,0.15);
glEnd();
glBegin(GL_QUADS); /// left side window cover2
glColor3ub(128, 43, 0);
glVertex2f(-0.59,0.15);
glVertex2f(-0.62,0.1);
glVertex2f(-0.47,0.1);
glVertex2f(-0.5,0.15);
glEnd();

glBegin(GL_QUADS); /// ventilator border
glColor3ub(255, 153, 204);
glVertex2f(-0.73,0.27);
glVertex2f(-0.66,0.27);
glVertex2f(-0.66,0.3);
glVertex2f(-0.73,0.3);
glEnd();
glBegin(GL_QUADS); /// ventilator border
glColor3ub(255, 153, 204);
glVertex2f(-0.59,0.27);
glVertex2f(-0.52,0.27);
glVertex2f(-0.52,0.3);
glVertex2f(-0.59,0.3);
glEnd();
glBegin(GL_LINES); ///window details
glColor3ub(128, 43, 0);
glVertex2f(-0.625,-0.1);
glVertex2f(-0.625,0.35);
glEnd();
glBegin(GL_LINES);/// window details
glColor3ub(128, 43, 0);
glVertex2f(-0.8,0.2);
glVertex2f(-0.4,0.2);
glEnd();
glBegin(GL_QUADS);  ///left side 1st final pillar
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.42);
glVertex2f(-0.75,0.42);
glVertex2f(-0.75,0.62);
glVertex2f(-0.9,0.62);
glEnd();
glBegin(GL_QUADS);  ///left side 1st final pillar border
glColor3ub(255, 153, 204);
glVertex2f(-0.88,0.42);
glVertex2f(-0.77,0.42);
glVertex2f(-0.77,0.58);
glVertex2f(-0.88,0.58);
glEnd();
glBegin(GL_QUADS);  ///left side triangle border
glColor3ub(255,204,229);
glVertex2f(-0.75,0.42);
glVertex2f(-0.49,0.42);
glVertex2f(-0.49,0.46);
glVertex2f(-0.75,0.46);
glEnd();
glBegin(GL_LINES);
glColor3ub(153, 77, 0);
glVertex2f(-0.75,0.46);
glVertex2f(-0.49,0.46);
glEnd();
glBegin(GL_TRIANGLES);  ///1ST triangle
glColor3ub(255,153,204);
glVertex2f(-0.75,0.46);
glVertex2f(-0.49,0.46);
glVertex2f(-0.62,0.62);
glEnd();
glBegin(GL_TRIANGLES);  ///1ST INNER triangle
glColor3ub(255,204,229);
glVertex2f(-0.69,0.46);
glVertex2f(-0.55,0.46);
glVertex2f(-0.62,0.62);
glEnd();
glBegin(GL_QUADS);  ///2nd piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.35);
glVertex2f(-0.45,0.3);
glVertex2f(-0.4,0.3);
glVertex2f(-0.35,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.45,0.3);
glVertex2f(-0.45,0.28);
glVertex2f(-0.4,0.28);
glVertex2f(-0.4,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(-0.5,-0.1);
glVertex2f(-0.45,-0.05);
glVertex2f(-0.4,-0.05);
glVertex2f(-0.35,-0.1);
glEnd();
glBegin(GL_QUADS); ///2nd piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.45,-0.05);
glVertex2f(-0.4,-0.05);
glVertex2f(-0.4,-0.03);
glVertex2f(-0.45,-0.03);
glEnd();
glBegin(GL_QUADS); ///2nd main piller border
glColor3ub(255, 204, 229);
glVertex2f(-0.45,-0.03);
glVertex2f(-0.4,-0.03);
glVertex2f(-0.4,0.28);
glVertex2f(-0.45,0.28);
glEnd();
glBegin(GL_QUADS);  ///2nd final piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.42);
glVertex2f(-0.35,0.42);
glVertex2f(-0.35,0.62);
glVertex2f(-0.5,0.62);
glEnd();
glBegin(GL_QUADS);  ///2nd final piller border
glColor3ub(255, 153, 204);
glVertex2f(-0.48,0.42);
glVertex2f(-0.37,0.42);
glVertex2f(-0.37,0.58);
glVertex2f(-0.48,0.58);
glEnd();
glBegin(GL_QUADS);  ///right piller started
glColor3ub(255, 204, 229);
glVertex2f(0.9,0.35);
glVertex2f(0.85,0.3);
glVertex2f(0.8,0.3);
glVertex2f(0.75,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.85,0.3);
glVertex2f(0.85,0.28);
glVertex2f(0.8,0.28);
glVertex2f(0.8,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(0.9,-0.1);
glVertex2f(0.75,-0.1);
glVertex2f(0.8,-0.05);
glVertex2f(0.85,-0.05);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.85,-0.05);
glVertex2f(0.8,-0.05);
glVertex2f(0.8,-0.03);
glVertex2f(0.85,-0.03);
glEnd();
glBegin(GL_QUADS); /// main piller
glColor3ub(255, 204, 229);
glVertex2f(0.85,-0.03);
glVertex2f(0.8,-0.03);
glVertex2f(0.8,0.28);
glVertex2f(0.85,0.28);
glEnd();
glBegin(GL_QUADS);  ///right 2nd piller started
glColor3ub(255, 204, 229);
glVertex2f(0.5,0.35);
glVertex2f(0.45,0.3);
glVertex2f(0.4,0.3);
glVertex2f(0.35,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.45,0.3);
glVertex2f(0.45,0.28);
glVertex2f(0.4,0.28);
glVertex2f(0.4,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(0.5,-0.1);
glVertex2f(0.45,-0.05);
glVertex2f(0.4,-0.05);
glVertex2f(0.35,-0.1);
glEnd();
glBegin(GL_QUADS); ///right 2nd piller border
glColor3ub(153, 77, 0);
glVertex2f(0.45,-0.05);
glVertex2f(0.4,-0.05);
glVertex2f(0.4,-0.03);
glVertex2f(0.45,-0.03);
glEnd();
glBegin(GL_QUADS); ///right  2nd main piller border
glColor3ub(255, 204, 229);
glVertex2f(0.45,-0.03);
glVertex2f(0.4,-0.03);
glVertex2f(0.4,0.28);
glVertex2f(0.45,0.28);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator
glColor3ub(255, 204, 229);
glVertex2f(0.75,0.26);
glVertex2f(0.64,0.26);
glVertex2f(0.64,0.31);
glVertex2f(0.75,0.31);
glEnd();
glBegin(GL_QUADS); /// right side window 1
glColor3ub(153, 102, 51);
glVertex2f(0.75,0.0);
glVertex2f(0.66,0.0);
glVertex2f(0.66,0.15);
glVertex2f(0.75,0.15);
glEnd();
glBegin(GL_QUADS); /// right side window cover 1
glColor3ub(128, 43, 0);
glVertex2f(0.75,0.15);
glVertex2f(0.78,0.1);
glVertex2f(0.63,0.1);
glVertex2f(0.66,0.15);
glEnd();

glBegin(GL_QUADS); /// 2nd ventilator
glColor3ub(255, 204, 229);
glVertex2f(0.61,0.26);
glVertex2f(0.5,0.26);
glVertex2f(0.5,0.31);
glVertex2f(0.61,0.31);
glEnd();
glBegin(GL_QUADS); /// right side window 2
glColor3ub(153, 102, 51);
glVertex2f(0.59,0.0);
glVertex2f(0.5,0.0);
glVertex2f(0.5,0.15);
glVertex2f(0.59,0.15);
glEnd();
glBegin(GL_QUADS); /// right side window cover2
glColor3ub(128, 43, 0);
glVertex2f(0.59,0.15);
glVertex2f(0.62,0.1);
glVertex2f(0.47,0.1);
glVertex2f(0.5,0.15);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator border
glColor3ub(255, 153, 204);
glVertex2f(0.73,0.27);
glVertex2f(0.66,0.27);
glVertex2f(0.66,0.3);
glVertex2f(0.73,0.3);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator border
glColor3ub(255, 153, 204);
glVertex2f(0.59,0.27);
glVertex2f(0.52,0.27);
glVertex2f(0.52,0.3);
glVertex2f(0.59,0.3);
glEnd();
glBegin(GL_LINES); ///right side window details
glColor3ub(128, 43, 0);
glVertex2f(0.625,-0.1);
glVertex2f(0.625,0.35);
glEnd();
glBegin(GL_LINES);///right side window details
glColor3ub(128, 43, 0);
glVertex2f(0.8,0.2);
glVertex2f(0.45,0.2);
glEnd();
glBegin(GL_QUADS); ///right 1st final piller started
glColor3ub(255, 204, 229);
glVertex2f(0.5,0.42);
glVertex2f(0.35,0.42);
glVertex2f(0.35,0.62);
glVertex2f(0.5,0.62);
glEnd();
glBegin(GL_QUADS);  ///right 1st final piller border
glColor3ub(255, 153, 204);
glVertex2f(0.48,0.42);
glVertex2f(0.37,0.42);
glVertex2f(0.37,0.58);
glVertex2f(0.48,0.58);
glEnd();
glBegin(GL_QUADS);  ///right side 2nd final pillar
glColor3ub(255, 204, 229);
glVertex2f(0.9,0.42);
glVertex2f(0.75,0.42);
glVertex2f(0.75,0.62);
glVertex2f(0.9,0.62);
glEnd();
glBegin(GL_QUADS);  ///right side 2nd final pillar border
glColor3ub(255, 153, 204);
glVertex2f(0.88,0.42);
glVertex2f(0.77,0.42);
glVertex2f(0.77,0.58);
glVertex2f(0.88,0.58);
glEnd();
glBegin(GL_QUADS);  ///left side triangle border
glColor3ub(255,204,229);
glVertex2f(0.75,0.42);
glVertex2f(0.49,0.42);
glVertex2f(0.49,0.46);
glVertex2f(0.75,0.46);
glEnd();
glBegin(GL_LINES); ///detail
glColor3ub(153, 77, 0);
glVertex2f(0.75,0.46);
glVertex2f(0.5,0.46);
glEnd();
glBegin(GL_TRIANGLES);  ///2nd triangle
glColor3ub(255,153,204);
glVertex2f(0.75,0.46);
glVertex2f(0.5,0.46);
glVertex2f(0.62,0.62);
glEnd();
glBegin(GL_TRIANGLES);  ///2nd INNER triangle
glColor3ub(255,204,229);
glVertex2f(0.69,0.46);
glVertex2f(0.55,0.46);
glVertex2f(0.62,0.62);
glEnd();

glBegin(GL_QUADS);  ///stairs upper border
glColor3ub(153,77,0);
glVertex2f(-0.3,-0.1);
glVertex2f(0.3,-0.1);
glVertex2f(0.3,-0.02);
glVertex2f(-0.3,-0.02);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(-0.28,-0.1);
glVertex2f(-0.18,-0.1);
glVertex2f(-0.18,-0.04);
glVertex2f(-0.28,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(-0.12,-0.1);
glVertex2f(-0.02,-0.1);
glVertex2f(-0.02,-0.04);
glVertex2f(-0.12,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(0.0,-0.1);
glVertex2f(0.1,-0.1);
glVertex2f(0.1,-0.04);
glVertex2f(0.0,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(0.16,-0.1);
glVertex2f(0.27,-0.1);
glVertex2f(0.27,-0.04);
glVertex2f(0.16,-0.04);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 204, 229);/// left Middle pillar
glVertex2f(-0.19,-0.02);
glVertex2f(-0.27,-0.02);
glVertex2f(-0.27,0.55);
glVertex2f(-0.19,0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204); ///left middle pillar inner border
glVertex2f(-0.21,-0.02);
glVertex2f(-0.25,-0.02);
glVertex2f(-0.25,0.5);
glVertex2f(-0.21,0.5);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);/// left most door
glVertex2f(-0.1,-0.02);
glVertex2f(-0.19,-0.02);
glVertex2f(-0.19,0.23);
glVertex2f(-0.1,0.23);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,204,229);///left side middle 3/4 pillar
glVertex2f(-0.1,-0.02);
glVertex2f(-0.05,-0.02);
glVertex2f(-0.05,0.42);
glVertex2f(-0.1,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204);///left side middle 3/4 pillar border
glVertex2f(-0.09,-0.02);
glVertex2f(-0.06,-0.02);
glVertex2f(-0.06,0.42);
glVertex2f(-0.09,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);///middle main door
glVertex2f(-0.05,-0.02);
glVertex2f(0.05,-0.02);
glVertex2f(0.05,0.3);
glVertex2f(-0.05,0.3);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,204,229);///right side middle 2/4 pillar
glVertex2f(0.1,-0.02);
glVertex2f(0.05,-0.02);
glVertex2f(0.05,0.42);
glVertex2f(0.1,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204);///right side middle 2/4 pillar border
glVertex2f(0.09,-0.02);
glVertex2f(0.06,-0.02);
glVertex2f(0.06,0.42);
glVertex2f(0.09,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);///right most door
glVertex2f(0.1,-0.02);
glVertex2f(0.19,-0.02);
glVertex2f(0.19,0.23);
glVertex2f(0.1,0.23);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 204, 229);///right Middle pillar
glVertex2f(0.19,-0.02);
glVertex2f(0.27,-0.02);
glVertex2f(0.27,0.55);
glVertex2f(0.19,0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204); ///right middle pillar inner border
glVertex2f(0.21,-0.02);
glVertex2f(0.25,-0.02);
glVertex2f(0.25,0.5);
glVertex2f(0.21,0.5);
glEnd();
glBegin(GL_LINES); /// middle border details
glColor3ub(153, 77, 0);
glVertex2f(-0.9,-0.1);
glVertex2f(0.9,-0.1);
glEnd();
glBegin(GL_LINES); /// middle border details2
glColor3ub(153, 77, 0);
glVertex2f(-0.9,-0.12);
glVertex2f(0.9,-0.12);
glEnd();

glBegin(GL_QUADS);  ///stairs side border1
glColor3ub(153,77,0);
glVertex2f(-0.32,-0.1);
glVertex2f(-0.32,-0.3);
glVertex2f(0.32,-0.3);
glVertex2f(0.32,-0.1);
glEnd();
glBegin(GL_QUADS);  ///stairs middle border1
glColor3ub(136, 136, 68);
glVertex2f(-0.3,-0.1);
glVertex2f(-0.3,-0.3);
glVertex2f(0.3,-0.3);
glVertex2f(0.3,-0.1);
glEnd();

glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.1);
glVertex2f(-0.3,-0.13);
glVertex2f(0.3,-0.13);
glVertex2f(0.3,-0.1);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.16);
glVertex2f(-0.3,-0.19);
glVertex2f(0.3,-0.19);
glVertex2f(0.3,-0.16);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.22);
glVertex2f(-0.3,-0.25);
glVertex2f(0.3,-0.25);
glVertex2f(0.3,-0.22);
glEnd();

glBegin(GL_QUADS);  ///stairs side border2
glColor3ub(153,77,0);
glVertex2f(-0.34,-0.3);
glVertex2f(-0.34,-0.5);
glVertex2f(0.34,-0.5);
glVertex2f(0.34,-0.3);
glEnd();
glBegin(GL_QUADS);  ///stairs middle border2
glColor3ub(136, 136, 68);
glVertex2f(-0.32,-0.3);
glVertex2f(-0.32,-0.5);
glVertex2f(0.32,-0.5);
glVertex2f(0.32,-0.3);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.28);
glVertex2f(-0.32,-0.31);
glVertex2f(0.32,-0.31);
glVertex2f(0.32,-0.28);
glEnd();

glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.34);
glVertex2f(-0.32,-0.37);
glVertex2f(0.32,-0.37);
glVertex2f(0.32,-0.34);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.4);
glVertex2f(-0.32,-0.43);
glVertex2f(0.32,-0.43);
glVertex2f(0.32,-0.4);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.46);
glVertex2f(-0.32,-0.49);
glVertex2f(0.32,-0.49);
glVertex2f(0.32,-0.46);
glEnd();
glBegin(GL_QUADS);  ///down left side pillar1
glColor3ub(255,204,229);
glVertex2f(-0.9,-0.12);
glVertex2f(-0.9,-0.5);
glVertex2f(-0.8,-0.5);
glVertex2f(-0.8,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.15);
glVertex2f(-0.8,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.2);
glVertex2f(-0.8,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.25);
glVertex2f(-0.8,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.3);
glVertex2f(-0.8,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.35);
glVertex2f(-0.8,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.4);
glVertex2f(-0.8,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.45);
glVertex2f(-0.8,-0.45);
glEnd();
glBegin(GL_QUADS); /// DOWN left side window 1
glColor3ub(153, 102, 51);
glVertex2f(-0.75,-0.2);
glVertex2f(-0.66,-0.2);
glVertex2f(-0.66,-0.5);
glVertex2f(-0.75,-0.5);
glEnd();
glBegin(GL_QUADS);  ///down left side pillar2
glColor3ub(255,204,229);
glVertex2f(-0.35,-0.12);
glVertex2f(-0.35,-0.5);
glVertex2f(-0.45,-0.5);
glVertex2f(-0.45,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.15);
glVertex2f(-0.45,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.2);
glVertex2f(-0.45,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.25);
glVertex2f(-0.45,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.3);
glVertex2f(-0.45,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.35);
glVertex2f(-0.45,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.4);
glVertex2f(-0.45,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.45);
glVertex2f(-0.45,-0.45);
glEnd();
glBegin(GL_QUADS); /// DOWN LEFT side window 2
glColor3ub(153, 102, 51);
glVertex2f(-0.59,-0.2);
glVertex2f(-0.5,-0.2);
glVertex2f(-0.5,-0.5);
glVertex2f(-0.59,-0.5);
glEnd();


glBegin(GL_QUADS); ///down RIGHT side pillar1
glColor3ub(255,204,229);
glVertex2f(0.9,-0.12);
glVertex2f(0.9,-0.5);
glVertex2f(0.8,-0.5);
glVertex2f(0.8,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.15);
glVertex2f(0.8,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.2);
glVertex2f(0.8,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.25);
glVertex2f(0.8,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.3);
glVertex2f(0.8,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.35);
glVertex2f(0.8,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.4);
glVertex2f(0.8,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.45);
glVertex2f(0.8,-0.45);
glEnd();
glBegin(GL_QUADS); ///DOWN RIGHT side window 1
glColor3ub(153, 102, 51);
glVertex2f(0.75,-0.2);
glVertex2f(0.66,-0.2);
glVertex2f(0.66,-0.5);
glVertex2f(0.75,-0.5);
glEnd();
glBegin(GL_QUADS);  ///down RIGHT side pillar2
glColor3ub(255,204,229);
glVertex2f(0.35,-0.12);
glVertex2f(0.35,-0.5);
glVertex2f(0.45,-0.5);
glVertex2f(0.45,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.15);
glVertex2f(0.45,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.2);
glVertex2f(0.45,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.25);
glVertex2f(0.45,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.3);
glVertex2f(0.45,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.35);
glVertex2f(0.45,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.4);
glVertex2f(0.45,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.45);
glVertex2f(0.45,-0.45);
glEnd();
glBegin(GL_QUADS); ///DOWN right side window 2
glColor3ub(153, 102, 51);
glVertex2f(0.59,-0.2);
glVertex2f(0.5,-0.2);
glVertex2f(0.5,-0.5);
glVertex2f(0.59,-0.5);
glEnd();

///the round shapes gombuj
int j;

	GLfloat a=0.0f; GLfloat b=0.7f; GLfloat rad =0.2f;
	int triangleAmoun = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twiceP = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(a, b); // center of circle
		for(j = 0; j <= triangleAmoun;j++) {
			glVertex2f(
		            a + (rad * cos(j *  twiceP / triangleAmoun)),b + (rad * sin(j * twiceP/ triangleAmoun))
			);
		}
	glEnd();
glBegin(GL_QUADS); ///round down pillar1
glColor3ub(255, 153, 204);
glVertex2f(-0.19,0.65);
glVertex2f(-0.19,0.45);
glVertex2f(0.19,0.45);
glVertex2f(0.19,0.65);
glEnd();
glBegin(GL_QUADS); /// round down pillar1 border
glColor3ub(255, 128, 179);
glVertex2f(-0.17,0.63);
glVertex2f(-0.17,0.45);
glVertex2f(0.17,0.45);
glVertex2f(0.17,0.63);
glEnd();
glBegin(GL_QUADS); /// round down pillar1 window
glColor3ub(153, 102, 51);
glVertex2f(-0.06,0.58);
glVertex2f(-0.06,0.45);
glVertex2f(0.06,0.45);
glVertex2f(0.06,0.58);
glEnd();
glBegin(GL_QUADS); ///round down pillar2
glColor3ub(255,204,229);
glVertex2f(-0.25,0.7);
glVertex2f(-0.25,0.65);
glVertex2f(0.25,0.65);
glVertex2f(0.25,0.7);
glEnd();
glBegin(GL_TRIANGLES); ///round down pillar2
glColor3ub(163, 163, 194);
glVertex2f(-0.03,0.89);
glVertex2f(0.03,0.89);
glVertex2f(0.0,1.0);
glEnd();
glBegin(GL_QUADS); ///round down pillar2
glColor3ub(51, 204, 51);
glVertex2f(-0.9,-0.85);
glVertex2f(-0.9,-0.9);
glVertex2f(0.9,-0.9);
glVertex2f(0.9,-0.85);
glEnd();


int i;

	GLfloat c=-0.83f; GLfloat d=0.65; GLfloat radious =0.03f;
	int triangleAmount = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radious * cos(i *  twicePi / triangleAmount)),d + (radious * sin(i * twicePi/ triangleAmount))
			);
		}
	glEnd();


	int k;

	GLfloat e=-0.43f; GLfloat f=0.65; GLfloat radious1 =0.03f;
	int triangleAmount1 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(e, f); // center of circle
		for(k = 0; k <= triangleAmount1;k++) {
			glVertex2f(
		            e + (radious1 * cos(k *  twicePi1 / triangleAmount1)),f + (radious1 * sin(k * twicePi1/ triangleAmount1))
			);
		}
	glEnd();



	int L;         //positive axis

	GLfloat g=0.43f; GLfloat h=0.65; GLfloat radious2 =0.03f;
	int triangleAmount2 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(g, h); /// center of circle
		for(L = 0; L <= triangleAmount1;L++) {
			glVertex2f(
		            g + (radious2 * cos(L *  twicePi2 / triangleAmount2)),h + (radious2 * sin(L * twicePi2/ triangleAmount2))
			);
		}
	glEnd();

	int m;

	GLfloat n=0.83f; GLfloat o=0.65; GLfloat radious3 =0.03f;
	int triangleAmount3 = 10; ///# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(n, o); // center of circle
		for(m = 0; m <= triangleAmount3;m++) {
			glVertex2f(
		            n + (radious3 * cos(m *  twicePi3 / triangleAmount3)),o + (radious3 * sin(m * twicePi3/ triangleAmount3))
			);
		}
	glEnd();

/// Birds
///bird 1
glPushMatrix();
glTranslatef(positionBird1,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.8,0.8);
glVertex2f(-0.76,0.76);
glVertex2f(-0.72,0.76);
glVertex2f(-0.67,0.8);
glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.71,0.82);
glVertex2f(-0.71,0.8);
glVertex2f(-0.69,0.8);
glVertex2f(-0.69,0.82);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.76,0.8);
glVertex2f(-0.73,0.8);
glVertex2f(-0.76,0.84);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.72,0.8);
glVertex2f(-0.76,0.8);
glVertex2f(-0.71,0.84);

glEnd();
glPopMatrix();

///Bird 2
glPushMatrix();
glTranslatef(positionBird2,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.7,0.7);
glVertex2f(-0.66,0.66);
glVertex2f(-0.62,0.66);
glVertex2f(-0.57,0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.61,0.72);
glVertex2f(-0.61,0.7);
glVertex2f(-0.59,0.7);
glVertex2f(-0.59,0.72);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.67,0.7);
glVertex2f(-0.64,0.7);
glVertex2f(-0.67,0.74);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.66,0.7);
glVertex2f(-0.62,0.7);
glVertex2f(-0.62,0.74);
glEnd();
glPopMatrix();

/// Bird 3
glPushMatrix();
glTranslatef(positionBird3,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.65,0.9);
glVertex2f(-0.61,0.86);
glVertex2f(-0.57,0.86);
glVertex2f(-0.53,0.9);
glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.55,0.9);
glVertex2f(-0.57,0.9);
glVertex2f(-0.57,0.92);
glVertex2f(-0.55,0.92);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.62,0.9);
glVertex2f(-0.58,0.9);
glVertex2f(-0.62,0.94);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.61,0.9);
glVertex2f(-0.58,0.9);
glVertex2f(-0.58,0.94);
glEnd();
glPopMatrix();

///small trees
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.85,-0.4);
glVertex2f(-0.85,-0.6);
glVertex2f(-0.82,-0.6);
glVertex2f(-0.82,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.9,-0.45);
glVertex2f(-0.76,-0.45);
glVertex2f(-0.83,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.9,-0.4);
glVertex2f(-0.76,-0.4);
glVertex2f(-0.83,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.64,-0.4);
glVertex2f(-0.64,-0.6);
glVertex2f(-0.61,-0.6);
glVertex2f(-0.61,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.69,-0.45);
glVertex2f(-0.55,-0.45);
glVertex2f(-0.62,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.69,-0.4);
glVertex2f(-0.55,-0.4);
glVertex2f(-0.62,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.36,-0.4);
glVertex2f(-0.36,-0.6);
glVertex2f(-0.33,-0.6);
glVertex2f(-0.33,-0.4);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.41,-0.45);
glVertex2f(-0.27,-0.45);
glVertex2f(-0.345,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.41,-0.4);
glVertex2f(-0.27,-0.4);
glVertex2f(-0.345,-0.3);
glEnd();
// small tree x axis(positive)
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.85,-0.4);
glVertex2f(0.85,-0.6);
glVertex2f(0.82,-0.6);
glVertex2f(0.82,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.9,-0.45);
glVertex2f(0.76,-0.45);
glVertex2f(0.83,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.9,-0.4);
glVertex2f(0.76,-0.4);
glVertex2f(0.83,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.64,-0.4);
glVertex2f(0.64,-0.6);
glVertex2f(0.61,-0.6);
glVertex2f(0.61,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.69,-0.45);
glVertex2f(0.55,-0.45);
glVertex2f(0.62,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.69,-0.4);
glVertex2f(0.55,-0.4);
glVertex2f(0.62,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.36,-0.4);
glVertex2f(0.36,-0.6);
glVertex2f(0.33,-0.6);
glVertex2f(0.33,-0.4);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.41,-0.45);
glVertex2f(0.27,-0.45);
glVertex2f(0.345,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.41,-0.4);
glVertex2f(0.27,-0.4);
glVertex2f(0.345,-0.3);
glEnd();

///tree
    glBegin(GL_QUADS);///coplant
	glColor3ub(77, 40, 0);
	glVertex2f(-0.8f, -0.75f);
	glVertex2f(-0.77f,-0.75f);
	glVertex2f(-0.77f, -0.9f);
	glVertex2f(-0.8f, -0.9f);
	glEnd();

    glBegin(GL_QUADS);///coplant2
	glColor3ub(77, 40, 0);
	glVertex2f(-0.77f, -0.3f);
	glVertex2f(-0.76f,-0.3f);
	glVertex2f(-0.77f, -0.75f);
	glVertex2f(-0.8f, -0.75f);
	glEnd();


    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(-0.77f, -0.3f);
    glVertex2f(-0.86f,-0.33f);
    glVertex2f(-0.8f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(-0.9f, -0.45f);
    glVertex2f(-0.86f,-0.33f);
    glVertex2f(-0.8f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(-0.77f, -0.3f);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.68f, -0.4f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.6f, -0.45f);
	glEnd();

    glBegin(GL_QUADS);///copata3
	glColor3ub(0, 77, 0);
    glVertex2f(-0.56f,-0.27f);
    glVertex2f(-0.67f, -0.2f);
    glVertex2f(-0.57f, -0.25f);
    glVertex2f(-0.77f, -0.3f);
	glEnd();

    glBegin(GL_QUADS);///copata4
	glColor3ub(0, 77, 0);
    glVertex2f(-0.90f,-0.28f);
    glVertex2f(-0.97f, -0.25f);
    glVertex2f(-0.87f, -0.2f);
    glVertex2f(-0.77f, -0.3f);
	glEnd();
   ///tree two
    glBegin(GL_QUADS);///coplant
	glColor3ub(77, 40, 0);
	glVertex2f(0.80f, -0.75f);
	glVertex2f(0.77f, -0.75f);
	glVertex2f(0.77f, -0.90f);
	glVertex2f(0.80f, -0.90f);
	glEnd();

    glBegin(GL_QUADS);///coplant2
	glColor3ub(77, 40, 0);
	glVertex2f(0.77f, -0.3f);
	glVertex2f(0.76f, -0.3f);
	glVertex2f(0.77f, -0.75f);
	glVertex2f(0.80f, -0.75f);
	glEnd();


    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(0.77f, -0.30f);
    glVertex2f(0.86f, -0.33f);
    glVertex2f(0.80f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(0.90f, -0.45f);
    glVertex2f(0.86f, -0.33f);
    glVertex2f(0.80f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(0.77f, -0.30f);
    glVertex2f(0.65f, -0.33f);
    glVertex2f(0.68f, -0.40f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(0.65f, -0.33f);
    glVertex2f(0.68f, -0.40f);
    glVertex2f(0.60f, -0.45f);
	glEnd();

    glBegin(GL_QUADS);///copata3
	glColor3ub(0, 77, 0);
    glVertex2f(0.56f, -0.27f);
    glVertex2f(0.67f, -0.20f);
    glVertex2f(0.57f, -0.25f);
    glVertex2f(0.77f, -0.30f);
	glEnd();

    glBegin(GL_QUADS);///copata4
	glColor3ub(0, 77, 0);
    glVertex2f(0.90f, -0.28f);
    glVertex2f(0.97f, -0.25f);
    glVertex2f(0.87f, -0.20f);
    glVertex2f(0.77f, -0.30f);
	glEnd();


glFlush();
}
/// Rain View

void display4() {
	glClearColor(1.0f, 1.0f,10.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2i(1,0) ;
glVertex2i(-1,0);
glColor3f(0,0,0);
glVertex2i(0,1);
glVertex2i(0,-1);
glEnd();

glBegin(GL_QUADS); /// field quads
//glColor3ub(0, 153, 51);
glColor3ub(0, 102, 0);
glVertex2f(-1,0);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glVertex2f(1,0);
glEnd();
glBegin(GL_QUADS);  ///sky quad
glColor3ub(128, 128, 128);
glVertex2f(-1,0);
glVertex2f(1,0);
glVertex2f(1,1);
glVertex2f(-1,1);
glEnd();


///Cloud
	glPushMatrix();
	glTranslatef(positionCloud1, 0.0, 0.0);

	glPushMatrix();
	glTranslatef(-0.28, 0.90, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-0.36, 0.81, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r =0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-0.33, 0.85, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-0.28, 0.80, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.08;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
    glPopMatrix();

///Cloud Two
	glPushMatrix();
	glTranslatef(positionCloud2, 0.0, 0.0);

	glPushMatrix();
	glTranslatef(0.25, 0.88, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.06;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.33, 0.81, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r =0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(0.30, 0.85, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0.25, 0.80, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 0.07;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
    glPopMatrix();



/// Ahsan Manjil(pink palace)

glBegin(GL_QUADS);  /// Building quads started
glColor3ub(255, 153, 204);
glVertex2f(-0.9,-0.5);
glVertex2f(0.9,-0.5);
glVertex2f(0.9,0.35);
glVertex2f(-0.9,0.35);
glEnd();
glBegin(GL_QUADS);  ///upper side design
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.42);
glVertex2f(0.5,0.42);
glVertex2f(0.5,0.46);
glVertex2f(-0.5,0.46);
glEnd();
glBegin(GL_QUADS);  /// Building MIDDLE BORDER started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,-0.1);
glVertex2f(-0.9,-0.12);
glVertex2f(0.9,-0.12);
glVertex2f(0.9,-0.1);
glEnd();
glBegin(GL_QUADS);  /// Building upper quads started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.35);
glVertex2f(-0.9,0.38);
glVertex2f(0.9,0.38);
glVertex2f(0.9,0.35);
glEnd();
glBegin(GL_LINES); ///border
glColor3ub(153, 77, 0);
glVertex2f(-0.9,0.35);
glVertex2f(0.9,0.35);
glEnd();
glBegin(GL_QUADS);  /// Building upper 2nd quads started
glColor3ub(255, 153, 204);
glVertex2f(-0.9,0.38);
glVertex2f(0.9,0.38);
glVertex2f(0.9,0.42);
glVertex2f(-0.9,0.42);
glEnd();
glBegin(GL_QUADS);  ///piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.35);
glVertex2f(-0.85,0.3);
glVertex2f(-0.8,0.3);
glVertex2f(-0.75,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.85,0.3);
glVertex2f(-0.85,0.28);
glVertex2f(-0.8,0.28);
glVertex2f(-0.8,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(-0.9,-0.1);
glVertex2f(-0.75,-0.1);
glVertex2f(-0.8,-0.05);
glVertex2f(-0.85,-0.05);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.85,-0.05);
glVertex2f(-0.8,-0.05);
glVertex2f(-0.8,-0.03);
glVertex2f(-0.85,-0.03);
glEnd();
glBegin(GL_QUADS); /// main piller
glColor3ub(255, 204, 229);
glVertex2f(-0.85,-0.03);
glVertex2f(-0.8,-0.03);
glVertex2f(-0.8,0.28);
glVertex2f(-0.85,0.28);
glEnd();
glBegin(GL_QUADS); /// ventilator
glColor3ub(255, 204, 229);
glVertex2f(-0.75,0.26);
glVertex2f(-0.64,0.26);
glVertex2f(-0.64,0.31);
glVertex2f(-0.75,0.31);
glEnd();
glBegin(GL_QUADS); /// left side window 1
glColor3ub(153, 102, 51);
glVertex2f(-0.75,0.0);
glVertex2f(-0.66,0.0);
glVertex2f(-0.66,0.15);
glVertex2f(-0.75,0.15);
glEnd();
glBegin(GL_QUADS); /// left side window cover 1
glColor3ub(128, 43, 0);
glVertex2f(-0.75,0.15);
glVertex2f(-0.78,0.1);
glVertex2f(-0.63,0.1);
glVertex2f(-0.66,0.15);
glEnd();
glBegin(GL_QUADS); /// ventilator
glColor3ub(255, 204, 229);
glVertex2f(-0.61,0.26);
glVertex2f(-0.5,0.26);
glVertex2f(-0.5,0.31);
glVertex2f(-0.61,0.31);
glEnd();
glBegin(GL_QUADS); /// left side window 2
glColor3ub(153, 102, 51);
glVertex2f(-0.59,0.0);
glVertex2f(-0.5,0.0);
glVertex2f(-0.5,0.15);
glVertex2f(-0.59,0.15);
glEnd();
glBegin(GL_QUADS); /// left side window cover2
glColor3ub(128, 43, 0);
glVertex2f(-0.59,0.15);
glVertex2f(-0.62,0.1);
glVertex2f(-0.47,0.1);
glVertex2f(-0.5,0.15);
glEnd();

glBegin(GL_QUADS); /// ventilator border
glColor3ub(255, 153, 204);
glVertex2f(-0.73,0.27);
glVertex2f(-0.66,0.27);
glVertex2f(-0.66,0.3);
glVertex2f(-0.73,0.3);
glEnd();
glBegin(GL_QUADS); /// ventilator border
glColor3ub(255, 153, 204);
glVertex2f(-0.59,0.27);
glVertex2f(-0.52,0.27);
glVertex2f(-0.52,0.3);
glVertex2f(-0.59,0.3);
glEnd();
glBegin(GL_LINES); ///window details
glColor3ub(128, 43, 0);
glVertex2f(-0.625,-0.1);
glVertex2f(-0.625,0.35);
glEnd();
glBegin(GL_LINES);/// window details
glColor3ub(128, 43, 0);
glVertex2f(-0.8,0.2);
glVertex2f(-0.4,0.2);
glEnd();
glBegin(GL_QUADS);  ///left side 1st final pillar
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.42);
glVertex2f(-0.75,0.42);
glVertex2f(-0.75,0.62);
glVertex2f(-0.9,0.62);
glEnd();
glBegin(GL_QUADS);  ///left side 1st final pillar border
glColor3ub(255, 153, 204);
glVertex2f(-0.88,0.42);
glVertex2f(-0.77,0.42);
glVertex2f(-0.77,0.58);
glVertex2f(-0.88,0.58);
glEnd();
glBegin(GL_QUADS);  ///left side triangle border
glColor3ub(255,204,229);
glVertex2f(-0.75,0.42);
glVertex2f(-0.49,0.42);
glVertex2f(-0.49,0.46);
glVertex2f(-0.75,0.46);
glEnd();
glBegin(GL_LINES);
glColor3ub(153, 77, 0);
glVertex2f(-0.75,0.46);
glVertex2f(-0.49,0.46);
glEnd();
glBegin(GL_TRIANGLES);  ///1ST triangle
glColor3ub(255,153,204);
glVertex2f(-0.75,0.46);
glVertex2f(-0.49,0.46);
glVertex2f(-0.62,0.62);
glEnd();
glBegin(GL_TRIANGLES);  ///1ST INNER triangle
glColor3ub(255,204,229);
glVertex2f(-0.69,0.46);
glVertex2f(-0.55,0.46);
glVertex2f(-0.62,0.62);
glEnd();
glBegin(GL_QUADS);  ///2nd piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.35);
glVertex2f(-0.45,0.3);
glVertex2f(-0.4,0.3);
glVertex2f(-0.35,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.45,0.3);
glVertex2f(-0.45,0.28);
glVertex2f(-0.4,0.28);
glVertex2f(-0.4,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(-0.5,-0.1);
glVertex2f(-0.45,-0.05);
glVertex2f(-0.4,-0.05);
glVertex2f(-0.35,-0.1);
glEnd();
glBegin(GL_QUADS); ///2nd piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.45,-0.05);
glVertex2f(-0.4,-0.05);
glVertex2f(-0.4,-0.03);
glVertex2f(-0.45,-0.03);
glEnd();
glBegin(GL_QUADS); ///2nd main piller border
glColor3ub(255, 204, 229);
glVertex2f(-0.45,-0.03);
glVertex2f(-0.4,-0.03);
glVertex2f(-0.4,0.28);
glVertex2f(-0.45,0.28);
glEnd();
glBegin(GL_QUADS);  ///2nd final piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.42);
glVertex2f(-0.35,0.42);
glVertex2f(-0.35,0.62);
glVertex2f(-0.5,0.62);
glEnd();
glBegin(GL_QUADS);  ///2nd final piller border
glColor3ub(255, 153, 204);
glVertex2f(-0.48,0.42);
glVertex2f(-0.37,0.42);
glVertex2f(-0.37,0.58);
glVertex2f(-0.48,0.58);
glEnd();
glBegin(GL_QUADS);  ///right piller started
glColor3ub(255, 204, 229);
glVertex2f(0.9,0.35);
glVertex2f(0.85,0.3);
glVertex2f(0.8,0.3);
glVertex2f(0.75,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.85,0.3);
glVertex2f(0.85,0.28);
glVertex2f(0.8,0.28);
glVertex2f(0.8,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(0.9,-0.1);
glVertex2f(0.75,-0.1);
glVertex2f(0.8,-0.05);
glVertex2f(0.85,-0.05);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.85,-0.05);
glVertex2f(0.8,-0.05);
glVertex2f(0.8,-0.03);
glVertex2f(0.85,-0.03);
glEnd();
glBegin(GL_QUADS); /// main piller
glColor3ub(255, 204, 229);
glVertex2f(0.85,-0.03);
glVertex2f(0.8,-0.03);
glVertex2f(0.8,0.28);
glVertex2f(0.85,0.28);
glEnd();
glBegin(GL_QUADS);  ///right 2nd piller started
glColor3ub(255, 204, 229);
glVertex2f(0.5,0.35);
glVertex2f(0.45,0.3);
glVertex2f(0.4,0.3);
glVertex2f(0.35,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.45,0.3);
glVertex2f(0.45,0.28);
glVertex2f(0.4,0.28);
glVertex2f(0.4,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(0.5,-0.1);
glVertex2f(0.45,-0.05);
glVertex2f(0.4,-0.05);
glVertex2f(0.35,-0.1);
glEnd();
glBegin(GL_QUADS); ///right 2nd piller border
glColor3ub(153, 77, 0);
glVertex2f(0.45,-0.05);
glVertex2f(0.4,-0.05);
glVertex2f(0.4,-0.03);
glVertex2f(0.45,-0.03);
glEnd();
glBegin(GL_QUADS); ///right  2nd main piller border
glColor3ub(255, 204, 229);
glVertex2f(0.45,-0.03);
glVertex2f(0.4,-0.03);
glVertex2f(0.4,0.28);
glVertex2f(0.45,0.28);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator
glColor3ub(255, 204, 229);
glVertex2f(0.75,0.26);
glVertex2f(0.64,0.26);
glVertex2f(0.64,0.31);
glVertex2f(0.75,0.31);
glEnd();
glBegin(GL_QUADS); /// right side window 1
glColor3ub(153, 102, 51);
glVertex2f(0.75,0.0);
glVertex2f(0.66,0.0);
glVertex2f(0.66,0.15);
glVertex2f(0.75,0.15);
glEnd();
glBegin(GL_QUADS); /// right side window cover 1
glColor3ub(128, 43, 0);
glVertex2f(0.75,0.15);
glVertex2f(0.78,0.1);
glVertex2f(0.63,0.1);
glVertex2f(0.66,0.15);
glEnd();

glBegin(GL_QUADS); /// 2nd ventilator
glColor3ub(255, 204, 229);
glVertex2f(0.61,0.26);
glVertex2f(0.5,0.26);
glVertex2f(0.5,0.31);
glVertex2f(0.61,0.31);
glEnd();
glBegin(GL_QUADS); /// right side window 2
glColor3ub(153, 102, 51);
glVertex2f(0.59,0.0);
glVertex2f(0.5,0.0);
glVertex2f(0.5,0.15);
glVertex2f(0.59,0.15);
glEnd();
glBegin(GL_QUADS); /// right side window cover2
glColor3ub(128, 43, 0);
glVertex2f(0.59,0.15);
glVertex2f(0.62,0.1);
glVertex2f(0.47,0.1);
glVertex2f(0.5,0.15);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator border
glColor3ub(255, 153, 204);
glVertex2f(0.73,0.27);
glVertex2f(0.66,0.27);
glVertex2f(0.66,0.3);
glVertex2f(0.73,0.3);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator border
glColor3ub(255, 153, 204);
glVertex2f(0.59,0.27);
glVertex2f(0.52,0.27);
glVertex2f(0.52,0.3);
glVertex2f(0.59,0.3);
glEnd();
glBegin(GL_LINES); ///right side window details
glColor3ub(128, 43, 0);
glVertex2f(0.625,-0.1);
glVertex2f(0.625,0.35);
glEnd();
glBegin(GL_LINES);///right side window details
glColor3ub(128, 43, 0);
glVertex2f(0.8,0.2);
glVertex2f(0.45,0.2);
glEnd();
glBegin(GL_QUADS); ///right 1st final piller started
glColor3ub(255, 204, 229);
glVertex2f(0.5,0.42);
glVertex2f(0.35,0.42);
glVertex2f(0.35,0.62);
glVertex2f(0.5,0.62);
glEnd();
glBegin(GL_QUADS);  ///right 1st final piller border
glColor3ub(255, 153, 204);
glVertex2f(0.48,0.42);
glVertex2f(0.37,0.42);
glVertex2f(0.37,0.58);
glVertex2f(0.48,0.58);
glEnd();
glBegin(GL_QUADS);  ///right side 2nd final pillar
glColor3ub(255, 204, 229);
glVertex2f(0.9,0.42);
glVertex2f(0.75,0.42);
glVertex2f(0.75,0.62);
glVertex2f(0.9,0.62);
glEnd();
glBegin(GL_QUADS);  ///right side 2nd final pillar border
glColor3ub(255, 153, 204);
glVertex2f(0.88,0.42);
glVertex2f(0.77,0.42);
glVertex2f(0.77,0.58);
glVertex2f(0.88,0.58);
glEnd();
glBegin(GL_QUADS);  ///left side triangle border
glColor3ub(255,204,229);
glVertex2f(0.75,0.42);
glVertex2f(0.49,0.42);
glVertex2f(0.49,0.46);
glVertex2f(0.75,0.46);
glEnd();
glBegin(GL_LINES); ///detail
glColor3ub(153, 77, 0);
glVertex2f(0.75,0.46);
glVertex2f(0.5,0.46);
glEnd();
glBegin(GL_TRIANGLES);  ///2nd triangle
glColor3ub(255,153,204);
glVertex2f(0.75,0.46);
glVertex2f(0.5,0.46);
glVertex2f(0.62,0.62);
glEnd();
glBegin(GL_TRIANGLES);  ///2nd INNER triangle
glColor3ub(255,204,229);
glVertex2f(0.69,0.46);
glVertex2f(0.55,0.46);
glVertex2f(0.62,0.62);
glEnd();

glBegin(GL_QUADS);  ///stairs upper border
glColor3ub(153,77,0);
glVertex2f(-0.3,-0.1);
glVertex2f(0.3,-0.1);
glVertex2f(0.3,-0.02);
glVertex2f(-0.3,-0.02);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(-0.28,-0.1);
glVertex2f(-0.18,-0.1);
glVertex2f(-0.18,-0.04);
glVertex2f(-0.28,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(-0.12,-0.1);
glVertex2f(-0.02,-0.1);
glVertex2f(-0.02,-0.04);
glVertex2f(-0.12,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(0.0,-0.1);
glVertex2f(0.1,-0.1);
glVertex2f(0.1,-0.04);
glVertex2f(0.0,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(0.16,-0.1);
glVertex2f(0.27,-0.1);
glVertex2f(0.27,-0.04);
glVertex2f(0.16,-0.04);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 204, 229);/// left Middle pillar
glVertex2f(-0.19,-0.02);
glVertex2f(-0.27,-0.02);
glVertex2f(-0.27,0.55);
glVertex2f(-0.19,0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204); ///left middle pillar inner border
glVertex2f(-0.21,-0.02);
glVertex2f(-0.25,-0.02);
glVertex2f(-0.25,0.5);
glVertex2f(-0.21,0.5);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);/// left most door
glVertex2f(-0.1,-0.02);
glVertex2f(-0.19,-0.02);
glVertex2f(-0.19,0.23);
glVertex2f(-0.1,0.23);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,204,229);///left side middle 3/4 pillar
glVertex2f(-0.1,-0.02);
glVertex2f(-0.05,-0.02);
glVertex2f(-0.05,0.42);
glVertex2f(-0.1,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204);///left side middle 3/4 pillar border
glVertex2f(-0.09,-0.02);
glVertex2f(-0.06,-0.02);
glVertex2f(-0.06,0.42);
glVertex2f(-0.09,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);///middle main door
glVertex2f(-0.05,-0.02);
glVertex2f(0.05,-0.02);
glVertex2f(0.05,0.3);
glVertex2f(-0.05,0.3);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,204,229);///right side middle 2/4 pillar
glVertex2f(0.1,-0.02);
glVertex2f(0.05,-0.02);
glVertex2f(0.05,0.42);
glVertex2f(0.1,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204);///right side middle 2/4 pillar border
glVertex2f(0.09,-0.02);
glVertex2f(0.06,-0.02);
glVertex2f(0.06,0.42);
glVertex2f(0.09,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);///right most door
glVertex2f(0.1,-0.02);
glVertex2f(0.19,-0.02);
glVertex2f(0.19,0.23);
glVertex2f(0.1,0.23);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 204, 229);///right Middle pillar
glVertex2f(0.19,-0.02);
glVertex2f(0.27,-0.02);
glVertex2f(0.27,0.55);
glVertex2f(0.19,0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204); ///right middle pillar inner border
glVertex2f(0.21,-0.02);
glVertex2f(0.25,-0.02);
glVertex2f(0.25,0.5);
glVertex2f(0.21,0.5);
glEnd();
glBegin(GL_LINES); /// middle border details
glColor3ub(153, 77, 0);
glVertex2f(-0.9,-0.1);
glVertex2f(0.9,-0.1);
glEnd();
glBegin(GL_LINES); /// middle border details2
glColor3ub(153, 77, 0);
glVertex2f(-0.9,-0.12);
glVertex2f(0.9,-0.12);
glEnd();

glBegin(GL_QUADS);  ///stairs side border1
glColor3ub(153,77,0);
glVertex2f(-0.32,-0.1);
glVertex2f(-0.32,-0.3);
glVertex2f(0.32,-0.3);
glVertex2f(0.32,-0.1);
glEnd();
glBegin(GL_QUADS);  ///stairs middle border1
glColor3ub(136, 136, 68);
glVertex2f(-0.3,-0.1);
glVertex2f(-0.3,-0.3);
glVertex2f(0.3,-0.3);
glVertex2f(0.3,-0.1);
glEnd();

glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.1);
glVertex2f(-0.3,-0.13);
glVertex2f(0.3,-0.13);
glVertex2f(0.3,-0.1);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.16);
glVertex2f(-0.3,-0.19);
glVertex2f(0.3,-0.19);
glVertex2f(0.3,-0.16);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.22);
glVertex2f(-0.3,-0.25);
glVertex2f(0.3,-0.25);
glVertex2f(0.3,-0.22);
glEnd();

glBegin(GL_QUADS);  ///stairs side border2
glColor3ub(153,77,0);
glVertex2f(-0.34,-0.3);
glVertex2f(-0.34,-0.5);
glVertex2f(0.34,-0.5);
glVertex2f(0.34,-0.3);
glEnd();
glBegin(GL_QUADS);  ///stairs middle border2
glColor3ub(136, 136, 68);
glVertex2f(-0.32,-0.3);
glVertex2f(-0.32,-0.5);
glVertex2f(0.32,-0.5);
glVertex2f(0.32,-0.3);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.28);
glVertex2f(-0.32,-0.31);
glVertex2f(0.32,-0.31);
glVertex2f(0.32,-0.28);
glEnd();

glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.34);
glVertex2f(-0.32,-0.37);
glVertex2f(0.32,-0.37);
glVertex2f(0.32,-0.34);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.4);
glVertex2f(-0.32,-0.43);
glVertex2f(0.32,-0.43);
glVertex2f(0.32,-0.4);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.46);
glVertex2f(-0.32,-0.49);
glVertex2f(0.32,-0.49);
glVertex2f(0.32,-0.46);
glEnd();
glBegin(GL_QUADS);  ///down left side pillar1
glColor3ub(255,204,229);
glVertex2f(-0.9,-0.12);
glVertex2f(-0.9,-0.5);
glVertex2f(-0.8,-0.5);
glVertex2f(-0.8,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.15);
glVertex2f(-0.8,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.2);
glVertex2f(-0.8,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.25);
glVertex2f(-0.8,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.3);
glVertex2f(-0.8,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.35);
glVertex2f(-0.8,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.4);
glVertex2f(-0.8,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.45);
glVertex2f(-0.8,-0.45);
glEnd();
glBegin(GL_QUADS); /// DOWN left side window 1
glColor3ub(153, 102, 51);
glVertex2f(-0.75,-0.2);
glVertex2f(-0.66,-0.2);
glVertex2f(-0.66,-0.5);
glVertex2f(-0.75,-0.5);
glEnd();
glBegin(GL_QUADS);  ///down left side pillar2
glColor3ub(255,204,229);
glVertex2f(-0.35,-0.12);
glVertex2f(-0.35,-0.5);
glVertex2f(-0.45,-0.5);
glVertex2f(-0.45,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.15);
glVertex2f(-0.45,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.2);
glVertex2f(-0.45,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.25);
glVertex2f(-0.45,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.3);
glVertex2f(-0.45,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.35);
glVertex2f(-0.45,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.4);
glVertex2f(-0.45,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.45);
glVertex2f(-0.45,-0.45);
glEnd();
glBegin(GL_QUADS); /// DOWN LEFT side window 2
glColor3ub(153, 102, 51);
glVertex2f(-0.59,-0.2);
glVertex2f(-0.5,-0.2);
glVertex2f(-0.5,-0.5);
glVertex2f(-0.59,-0.5);
glEnd();


glBegin(GL_QUADS); ///down RIGHT side pillar1
glColor3ub(255,204,229);
glVertex2f(0.9,-0.12);
glVertex2f(0.9,-0.5);
glVertex2f(0.8,-0.5);
glVertex2f(0.8,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.15);
glVertex2f(0.8,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.2);
glVertex2f(0.8,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.25);
glVertex2f(0.8,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.3);
glVertex2f(0.8,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.35);
glVertex2f(0.8,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.4);
glVertex2f(0.8,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.45);
glVertex2f(0.8,-0.45);
glEnd();
glBegin(GL_QUADS); ///DOWN RIGHT side window 1
glColor3ub(153, 102, 51);
glVertex2f(0.75,-0.2);
glVertex2f(0.66,-0.2);
glVertex2f(0.66,-0.5);
glVertex2f(0.75,-0.5);
glEnd();
glBegin(GL_QUADS);  ///down RIGHT side pillar2
glColor3ub(255,204,229);
glVertex2f(0.35,-0.12);
glVertex2f(0.35,-0.5);
glVertex2f(0.45,-0.5);
glVertex2f(0.45,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.15);
glVertex2f(0.45,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.2);
glVertex2f(0.45,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.25);
glVertex2f(0.45,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.3);
glVertex2f(0.45,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.35);
glVertex2f(0.45,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.4);
glVertex2f(0.45,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.45);
glVertex2f(0.45,-0.45);
glEnd();
glBegin(GL_QUADS); ///DOWN right side window 2
glColor3ub(153, 102, 51);
glVertex2f(0.59,-0.2);
glVertex2f(0.5,-0.2);
glVertex2f(0.5,-0.5);
glVertex2f(0.59,-0.5);
glEnd();

///the round shapes gombuj
int j;

	GLfloat a=0.0f; GLfloat b=0.7f; GLfloat rad =0.2f;
	int triangleAmoun = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twiceP = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(a, b); // center of circle
		for(j = 0; j <= triangleAmoun;j++) {
			glVertex2f(
		            a + (rad * cos(j *  twiceP / triangleAmoun)),b + (rad * sin(j * twiceP/ triangleAmoun))
			);
		}
	glEnd();
glBegin(GL_QUADS); ///round down pillar1
glColor3ub(255, 153, 204);
glVertex2f(-0.19,0.65);
glVertex2f(-0.19,0.45);
glVertex2f(0.19,0.45);
glVertex2f(0.19,0.65);
glEnd();
glBegin(GL_QUADS); /// round down pillar1 border
glColor3ub(255, 128, 179);
glVertex2f(-0.17,0.63);
glVertex2f(-0.17,0.45);
glVertex2f(0.17,0.45);
glVertex2f(0.17,0.63);
glEnd();
glBegin(GL_QUADS); /// round down pillar1 window
glColor3ub(153, 102, 51);
glVertex2f(-0.06,0.58);
glVertex2f(-0.06,0.45);
glVertex2f(0.06,0.45);
glVertex2f(0.06,0.58);
glEnd();
glBegin(GL_QUADS); ///round down pillar2
glColor3ub(255,204,229);
glVertex2f(-0.25,0.7);
glVertex2f(-0.25,0.65);
glVertex2f(0.25,0.65);
glVertex2f(0.25,0.7);
glEnd();
glBegin(GL_TRIANGLES); ///round down pillar2
glColor3ub(163, 163, 194);
glVertex2f(-0.03,0.89);
glVertex2f(0.03,0.89);
glVertex2f(0.0,1.0);
glEnd();
glBegin(GL_QUADS); ///round down pillar2
glColor3ub(51, 204, 51);
glVertex2f(-0.9,-0.85);
glVertex2f(-0.9,-0.9);
glVertex2f(0.9,-0.9);
glVertex2f(0.9,-0.85);
glEnd();


int i;

	GLfloat c=-0.83f; GLfloat d=0.65; GLfloat radious =0.03f;
	int triangleAmount = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radious * cos(i *  twicePi / triangleAmount)),d + (radious * sin(i * twicePi/ triangleAmount))
			);
		}
	glEnd();


	int k;

	GLfloat e=-0.43f; GLfloat f=0.65; GLfloat radious1 =0.03f;
	int triangleAmount1 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(e, f); // center of circle
		for(k = 0; k <= triangleAmount1;k++) {
			glVertex2f(
		            e + (radious1 * cos(k *  twicePi1 / triangleAmount1)),f + (radious1 * sin(k * twicePi1/ triangleAmount1))
			);
		}
	glEnd();



	int L;         //positive axis

	GLfloat g=0.43f; GLfloat h=0.65; GLfloat radious2 =0.03f;
	int triangleAmount2 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(g, h); /// center of circle
		for(L = 0; L <= triangleAmount1;L++) {
			glVertex2f(
		            g + (radious2 * cos(L *  twicePi2 / triangleAmount2)),h + (radious2 * sin(L * twicePi2/ triangleAmount2))
			);
		}
	glEnd();

	int m;

	GLfloat n=0.83f; GLfloat o=0.65; GLfloat radious3 =0.03f;
	int triangleAmount3 = 10; ///# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(n, o); // center of circle
		for(m = 0; m <= triangleAmount3;m++) {
			glVertex2f(
		            n + (radious3 * cos(m *  twicePi3 / triangleAmount3)),o + (radious3 * sin(m * twicePi3/ triangleAmount3))
			);
		}
	glEnd();

/// Birds
///bird 1
glPushMatrix();
glTranslatef(positionBird1,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.8,0.8);
glVertex2f(-0.76,0.76);
glVertex2f(-0.72,0.76);
glVertex2f(-0.67,0.8);
glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.71,0.82);
glVertex2f(-0.71,0.8);
glVertex2f(-0.69,0.8);
glVertex2f(-0.69,0.82);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.76,0.8);
glVertex2f(-0.73,0.8);
glVertex2f(-0.76,0.84);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.72,0.8);
glVertex2f(-0.76,0.8);
glVertex2f(-0.71,0.84);

glEnd();
glPopMatrix();

///Bird 2
glPushMatrix();
glTranslatef(positionBird2,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.7,0.7);
glVertex2f(-0.66,0.66);
glVertex2f(-0.62,0.66);
glVertex2f(-0.57,0.7);
glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.61,0.72);
glVertex2f(-0.61,0.7);
glVertex2f(-0.59,0.7);
glVertex2f(-0.59,0.72);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.67,0.7);
glVertex2f(-0.64,0.7);
glVertex2f(-0.67,0.74);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.66,0.7);
glVertex2f(-0.62,0.7);
glVertex2f(-0.62,0.74);
glEnd();
glPopMatrix();

/// Bird 3
glPushMatrix();
glTranslatef(positionBird3,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.65,0.9);
glVertex2f(-0.61,0.86);
glVertex2f(-0.57,0.86);
glVertex2f(-0.53,0.9);
glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 184, 148);
glVertex2f(-0.55,0.9);
glVertex2f(-0.57,0.9);
glVertex2f(-0.57,0.92);
glVertex2f(-0.55,0.92);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.62,0.9);
glVertex2f(-0.58,0.9);
glVertex2f(-0.62,0.94);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(184, 184, 148);
glVertex2f(-0.61,0.9);
glVertex2f(-0.58,0.9);
glVertex2f(-0.58,0.94);
glEnd();
glPopMatrix();

///small trees
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.85,-0.4);
glVertex2f(-0.85,-0.6);
glVertex2f(-0.82,-0.6);
glVertex2f(-0.82,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.9,-0.45);
glVertex2f(-0.76,-0.45);
glVertex2f(-0.83,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.9,-0.4);
glVertex2f(-0.76,-0.4);
glVertex2f(-0.83,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.64,-0.4);
glVertex2f(-0.64,-0.6);
glVertex2f(-0.61,-0.6);
glVertex2f(-0.61,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.69,-0.45);
glVertex2f(-0.55,-0.45);
glVertex2f(-0.62,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.69,-0.4);
glVertex2f(-0.55,-0.4);
glVertex2f(-0.62,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.36,-0.4);
glVertex2f(-0.36,-0.6);
glVertex2f(-0.33,-0.6);
glVertex2f(-0.33,-0.4);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.41,-0.45);
glVertex2f(-0.27,-0.45);
glVertex2f(-0.345,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.41,-0.4);
glVertex2f(-0.27,-0.4);
glVertex2f(-0.345,-0.3);
glEnd();
// small tree x axis(positive)
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.85,-0.4);
glVertex2f(0.85,-0.6);
glVertex2f(0.82,-0.6);
glVertex2f(0.82,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.9,-0.45);
glVertex2f(0.76,-0.45);
glVertex2f(0.83,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.9,-0.4);
glVertex2f(0.76,-0.4);
glVertex2f(0.83,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.64,-0.4);
glVertex2f(0.64,-0.6);
glVertex2f(0.61,-0.6);
glVertex2f(0.61,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.69,-0.45);
glVertex2f(0.55,-0.45);
glVertex2f(0.62,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.69,-0.4);
glVertex2f(0.55,-0.4);
glVertex2f(0.62,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.36,-0.4);
glVertex2f(0.36,-0.6);
glVertex2f(0.33,-0.6);
glVertex2f(0.33,-0.4);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.41,-0.45);
glVertex2f(0.27,-0.45);
glVertex2f(0.345,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.41,-0.4);
glVertex2f(0.27,-0.4);
glVertex2f(0.345,-0.3);
glEnd();

///tree
    glBegin(GL_QUADS);///coplant
	glColor3ub(77, 40, 0);
	glVertex2f(-0.8f, -0.75f);
	glVertex2f(-0.77f,-0.75f);
	glVertex2f(-0.77f, -0.9f);
	glVertex2f(-0.8f, -0.9f);
	glEnd();

    glBegin(GL_QUADS);///coplant2
	glColor3ub(77, 40, 0);
	glVertex2f(-0.77f, -0.3f);
	glVertex2f(-0.76f,-0.3f);
	glVertex2f(-0.77f, -0.75f);
	glVertex2f(-0.8f, -0.75f);
	glEnd();


    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(-0.77f, -0.3f);
    glVertex2f(-0.86f,-0.33f);
    glVertex2f(-0.8f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(-0.9f, -0.45f);
    glVertex2f(-0.86f,-0.33f);
    glVertex2f(-0.8f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(-0.77f, -0.3f);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.68f, -0.4f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.6f, -0.45f);
	glEnd();

    glBegin(GL_QUADS);///copata3
	glColor3ub(0, 77, 0);
    glVertex2f(-0.56f,-0.27f);
    glVertex2f(-0.67f, -0.2f);
    glVertex2f(-0.57f, -0.25f);
    glVertex2f(-0.77f, -0.3f);
	glEnd();

    glBegin(GL_QUADS);///copata4
	glColor3ub(0, 77, 0);
    glVertex2f(-0.90f,-0.28f);
    glVertex2f(-0.97f, -0.25f);
    glVertex2f(-0.87f, -0.2f);
    glVertex2f(-0.77f, -0.3f);
	glEnd();
   ///tree two
    glBegin(GL_QUADS);///coplant
	glColor3ub(77, 40, 0);
	glVertex2f(0.80f, -0.75f);
	glVertex2f(0.77f, -0.75f);
	glVertex2f(0.77f, -0.90f);
	glVertex2f(0.80f, -0.90f);
	glEnd();

    glBegin(GL_QUADS);///coplant2
	glColor3ub(77, 40, 0);
	glVertex2f(0.77f, -0.3f);
	glVertex2f(0.76f, -0.3f);
	glVertex2f(0.77f, -0.75f);
	glVertex2f(0.80f, -0.75f);
	glEnd();


    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(0.77f, -0.30f);
    glVertex2f(0.86f, -0.33f);
    glVertex2f(0.80f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(0.90f, -0.45f);
    glVertex2f(0.86f, -0.33f);
    glVertex2f(0.80f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(0.77f, -0.30f);
    glVertex2f(0.65f, -0.33f);
    glVertex2f(0.68f, -0.40f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(0.65f, -0.33f);
    glVertex2f(0.68f, -0.40f);
    glVertex2f(0.60f, -0.45f);
	glEnd();

    glBegin(GL_QUADS);///copata3
	glColor3ub(0, 77, 0);
    glVertex2f(0.56f, -0.27f);
    glVertex2f(0.67f, -0.20f);
    glVertex2f(0.57f, -0.25f);
    glVertex2f(0.77f, -0.30f);
	glEnd();

    glBegin(GL_QUADS);///copata4
	glColor3ub(0, 77, 0);
    glVertex2f(0.90f, -0.28f);
    glVertex2f(0.97f, -0.25f);
    glVertex2f(0.87f, -0.20f);
    glVertex2f(0.77f, -0.30f);
	glEnd();

	bool rainStatus= true;
///rain
    if(rainStatus==true)
    {
       // glLoadIdentity();
        glPushMatrix();
        glTranslatef(Rainposition, Rainposition, 0.0f);

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();

        glTranslatef(0.0,-0.15,0.0);
        rain();
        glEnd();
        glPopMatrix();
    }


glFlush();
}



/// Night View

void display3() {
	glClearColor(1.0f, 1.0f,10.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2i(1,0) ;
glVertex2i(-1,0);
glColor3f(0,0,0);
glVertex2i(0,1);
glVertex2i(0,-1);
glEnd();

glBegin(GL_QUADS); /// field quads
//glColor3ub(0, 153, 51);
glColor3ub(0, 77, 0);
glVertex2f(-1,0);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glVertex2f(1,0);
glEnd();
glBegin(GL_QUADS);  ///sky quad
glColor3ub(20, 24, 82);
glVertex2f(-1,0);
glVertex2f(1,0);
glVertex2f(1,1);
glVertex2f(-1,1);
glEnd();



///Moon
      glBegin(GL_POLYGON);
      for(int i=0;i<100;i++){
        glColor3ub(242, 242, 242);
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=0.10;
        float x=r*cos(A)-0.8;
        float y=r*sin(A)+0.85;
       glVertex2f(x,y);
    }
    glEnd();
/// Stars
glBegin(GL_POINTS);
   glColor3ub(242, 242, 242);
   glVertex3f(-0.55f, 0.82f, 0.0f);
   glVertex3f(-0.57f, 0.95f, 0.0f);
   glVertex3f(-0.67f, 0.89f, 0.0f);
   glVertex3f(-0.75f, 0.96f, 0.0f);
   glVertex3f(-0.45f, 0.90f, 0.0f);
   glVertex3f(-0.25f, 0.79f, 0.0f);
   glVertex3f(-0.15f, 0.82f, 0.0f);
   glVertex3f(0.55f, 0.82f, 0.0f);
   glVertex3f(0.50f, 0.86f, 0.0f);
   glVertex3f(0.45f, 0.76f, 0.0f);
   glVertex3f(0.65f, 0.90f, 0.0f);
   glVertex3f(0.30f, 0.95f, 0.0f);
   glVertex3f(0.35f, 0.89f, 0.0f);
   glVertex3f(0.25f, 0.95f, 0.0f);
   glEnd();


/// Ahsan Manjil(pink palace)

glBegin(GL_QUADS);  /// Building quads started
glColor3ub(255, 153, 204);
glVertex2f(-0.9,-0.5);
glVertex2f(0.9,-0.5);
glVertex2f(0.9,0.35);
glVertex2f(-0.9,0.35);
glEnd();
glBegin(GL_QUADS);  ///upper side design
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.42);
glVertex2f(0.5,0.42);
glVertex2f(0.5,0.46);
glVertex2f(-0.5,0.46);
glEnd();
glBegin(GL_QUADS);  /// Building MIDDLE BORDER started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,-0.1);
glVertex2f(-0.9,-0.12);
glVertex2f(0.9,-0.12);
glVertex2f(0.9,-0.1);
glEnd();
glBegin(GL_QUADS);  /// Building upper quads started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.35);
glVertex2f(-0.9,0.38);
glVertex2f(0.9,0.38);
glVertex2f(0.9,0.35);
glEnd();
glBegin(GL_LINES); ///border
glColor3ub(153, 77, 0);
glVertex2f(-0.9,0.35);
glVertex2f(0.9,0.35);
glEnd();
glBegin(GL_QUADS);  /// Building upper 2nd quads started
glColor3ub(255, 153, 204);
glVertex2f(-0.9,0.38);
glVertex2f(0.9,0.38);
glVertex2f(0.9,0.42);
glVertex2f(-0.9,0.42);
glEnd();
glBegin(GL_QUADS);  ///piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.35);
glVertex2f(-0.85,0.3);
glVertex2f(-0.8,0.3);
glVertex2f(-0.75,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.85,0.3);
glVertex2f(-0.85,0.28);
glVertex2f(-0.8,0.28);
glVertex2f(-0.8,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(-0.9,-0.1);
glVertex2f(-0.75,-0.1);
glVertex2f(-0.8,-0.05);
glVertex2f(-0.85,-0.05);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.85,-0.05);
glVertex2f(-0.8,-0.05);
glVertex2f(-0.8,-0.03);
glVertex2f(-0.85,-0.03);
glEnd();
glBegin(GL_QUADS); /// main piller
glColor3ub(255, 204, 229);
glVertex2f(-0.85,-0.03);
glVertex2f(-0.8,-0.03);
glVertex2f(-0.8,0.28);
glVertex2f(-0.85,0.28);
glEnd();
glBegin(GL_QUADS); /// ventilator
glColor3ub(255, 204, 229);
glVertex2f(-0.75,0.26);
glVertex2f(-0.64,0.26);
glVertex2f(-0.64,0.31);
glVertex2f(-0.75,0.31);
glEnd();
glBegin(GL_QUADS); /// left side window 1
glColor3ub(153, 102, 51);
glVertex2f(-0.75,0.0);
glVertex2f(-0.66,0.0);
glVertex2f(-0.66,0.15);
glVertex2f(-0.75,0.15);
glEnd();
glBegin(GL_QUADS); /// left side window cover 1
glColor3ub(128, 43, 0);
glVertex2f(-0.75,0.15);
glVertex2f(-0.78,0.1);
glVertex2f(-0.63,0.1);
glVertex2f(-0.66,0.15);
glEnd();
glBegin(GL_QUADS); /// ventilator
glColor3ub(255, 204, 229);
glVertex2f(-0.61,0.26);
glVertex2f(-0.5,0.26);
glVertex2f(-0.5,0.31);
glVertex2f(-0.61,0.31);
glEnd();
glBegin(GL_QUADS); /// left side window 2
glColor3ub(153, 102, 51);
glVertex2f(-0.59,0.0);
glVertex2f(-0.5,0.0);
glVertex2f(-0.5,0.15);
glVertex2f(-0.59,0.15);
glEnd();
glBegin(GL_QUADS); /// left side window cover2
glColor3ub(128, 43, 0);
glVertex2f(-0.59,0.15);
glVertex2f(-0.62,0.1);
glVertex2f(-0.47,0.1);
glVertex2f(-0.5,0.15);
glEnd();

glBegin(GL_QUADS); /// ventilator border
glColor3ub(255, 153, 204);
glVertex2f(-0.73,0.27);
glVertex2f(-0.66,0.27);
glVertex2f(-0.66,0.3);
glVertex2f(-0.73,0.3);
glEnd();
glBegin(GL_QUADS); /// ventilator border
glColor3ub(255, 153, 204);
glVertex2f(-0.59,0.27);
glVertex2f(-0.52,0.27);
glVertex2f(-0.52,0.3);
glVertex2f(-0.59,0.3);
glEnd();
glBegin(GL_LINES); ///window details
glColor3ub(128, 43, 0);
glVertex2f(-0.625,-0.1);
glVertex2f(-0.625,0.35);
glEnd();
glBegin(GL_LINES);/// window details
glColor3ub(128, 43, 0);
glVertex2f(-0.8,0.2);
glVertex2f(-0.4,0.2);
glEnd();
glBegin(GL_QUADS);  ///left side 1st final pillar
glColor3ub(255, 204, 229);
glVertex2f(-0.9,0.42);
glVertex2f(-0.75,0.42);
glVertex2f(-0.75,0.62);
glVertex2f(-0.9,0.62);
glEnd();
glBegin(GL_QUADS);  ///left side 1st final pillar border
glColor3ub(255, 153, 204);
glVertex2f(-0.88,0.42);
glVertex2f(-0.77,0.42);
glVertex2f(-0.77,0.58);
glVertex2f(-0.88,0.58);
glEnd();
glBegin(GL_QUADS);  ///left side triangle border
glColor3ub(255,204,229);
glVertex2f(-0.75,0.42);
glVertex2f(-0.49,0.42);
glVertex2f(-0.49,0.46);
glVertex2f(-0.75,0.46);
glEnd();
glBegin(GL_LINES);
glColor3ub(153, 77, 0);
glVertex2f(-0.75,0.46);
glVertex2f(-0.49,0.46);
glEnd();
glBegin(GL_TRIANGLES);  ///1ST triangle
glColor3ub(255,153,204);
glVertex2f(-0.75,0.46);
glVertex2f(-0.49,0.46);
glVertex2f(-0.62,0.62);
glEnd();
glBegin(GL_TRIANGLES);  ///1ST INNER triangle
glColor3ub(255,204,229);
glVertex2f(-0.69,0.46);
glVertex2f(-0.55,0.46);
glVertex2f(-0.62,0.62);
glEnd();
glBegin(GL_QUADS);  ///2nd piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.35);
glVertex2f(-0.45,0.3);
glVertex2f(-0.4,0.3);
glVertex2f(-0.35,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.45,0.3);
glVertex2f(-0.45,0.28);
glVertex2f(-0.4,0.28);
glVertex2f(-0.4,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(-0.5,-0.1);
glVertex2f(-0.45,-0.05);
glVertex2f(-0.4,-0.05);
glVertex2f(-0.35,-0.1);
glEnd();
glBegin(GL_QUADS); ///2nd piller border
glColor3ub(153, 77, 0);
glVertex2f(-0.45,-0.05);
glVertex2f(-0.4,-0.05);
glVertex2f(-0.4,-0.03);
glVertex2f(-0.45,-0.03);
glEnd();
glBegin(GL_QUADS); ///2nd main piller border
glColor3ub(255, 204, 229);
glVertex2f(-0.45,-0.03);
glVertex2f(-0.4,-0.03);
glVertex2f(-0.4,0.28);
glVertex2f(-0.45,0.28);
glEnd();
glBegin(GL_QUADS);  ///2nd final piller started
glColor3ub(255, 204, 229);
glVertex2f(-0.5,0.42);
glVertex2f(-0.35,0.42);
glVertex2f(-0.35,0.62);
glVertex2f(-0.5,0.62);
glEnd();
glBegin(GL_QUADS);  ///2nd final piller border
glColor3ub(255, 153, 204);
glVertex2f(-0.48,0.42);
glVertex2f(-0.37,0.42);
glVertex2f(-0.37,0.58);
glVertex2f(-0.48,0.58);
glEnd();
glBegin(GL_QUADS);  ///right piller started
glColor3ub(255, 204, 229);
glVertex2f(0.9,0.35);
glVertex2f(0.85,0.3);
glVertex2f(0.8,0.3);
glVertex2f(0.75,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.85,0.3);
glVertex2f(0.85,0.28);
glVertex2f(0.8,0.28);
glVertex2f(0.8,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(0.9,-0.1);
glVertex2f(0.75,-0.1);
glVertex2f(0.8,-0.05);
glVertex2f(0.85,-0.05);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.85,-0.05);
glVertex2f(0.8,-0.05);
glVertex2f(0.8,-0.03);
glVertex2f(0.85,-0.03);
glEnd();
glBegin(GL_QUADS); /// main piller
glColor3ub(255, 204, 229);
glVertex2f(0.85,-0.03);
glVertex2f(0.8,-0.03);
glVertex2f(0.8,0.28);
glVertex2f(0.85,0.28);
glEnd();
glBegin(GL_QUADS);  ///right 2nd piller started
glColor3ub(255, 204, 229);
glVertex2f(0.5,0.35);
glVertex2f(0.45,0.3);
glVertex2f(0.4,0.3);
glVertex2f(0.35,0.35);
glEnd();
glBegin(GL_QUADS); ///piller border
glColor3ub(153, 77, 0);
glVertex2f(0.45,0.3);
glVertex2f(0.45,0.28);
glVertex2f(0.4,0.28);
glVertex2f(0.4,0.3);
glEnd();
glBegin(GL_QUADS);  ///piller
glColor3ub(255, 204, 229);
glVertex2f(0.5,-0.1);
glVertex2f(0.45,-0.05);
glVertex2f(0.4,-0.05);
glVertex2f(0.35,-0.1);
glEnd();
glBegin(GL_QUADS); ///right 2nd piller border
glColor3ub(153, 77, 0);
glVertex2f(0.45,-0.05);
glVertex2f(0.4,-0.05);
glVertex2f(0.4,-0.03);
glVertex2f(0.45,-0.03);
glEnd();
glBegin(GL_QUADS); ///right  2nd main piller border
glColor3ub(255, 204, 229);
glVertex2f(0.45,-0.03);
glVertex2f(0.4,-0.03);
glVertex2f(0.4,0.28);
glVertex2f(0.45,0.28);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator
glColor3ub(255, 204, 229);
glVertex2f(0.75,0.26);
glVertex2f(0.64,0.26);
glVertex2f(0.64,0.31);
glVertex2f(0.75,0.31);
glEnd();
glBegin(GL_QUADS); /// right side window 1
glColor3ub(153, 102, 51);
glVertex2f(0.75,0.0);
glVertex2f(0.66,0.0);
glVertex2f(0.66,0.15);
glVertex2f(0.75,0.15);
glEnd();
glBegin(GL_QUADS); /// right side window cover 1
glColor3ub(128, 43, 0);
glVertex2f(0.75,0.15);
glVertex2f(0.78,0.1);
glVertex2f(0.63,0.1);
glVertex2f(0.66,0.15);
glEnd();

glBegin(GL_QUADS); /// 2nd ventilator
glColor3ub(255, 204, 229);
glVertex2f(0.61,0.26);
glVertex2f(0.5,0.26);
glVertex2f(0.5,0.31);
glVertex2f(0.61,0.31);
glEnd();
glBegin(GL_QUADS); /// right side window 2
glColor3ub(153, 102, 51);
glVertex2f(0.59,0.0);
glVertex2f(0.5,0.0);
glVertex2f(0.5,0.15);
glVertex2f(0.59,0.15);
glEnd();
glBegin(GL_QUADS); /// right side window cover2
glColor3ub(128, 43, 0);
glVertex2f(0.59,0.15);
glVertex2f(0.62,0.1);
glVertex2f(0.47,0.1);
glVertex2f(0.5,0.15);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator border
glColor3ub(255, 153, 204);
glVertex2f(0.73,0.27);
glVertex2f(0.66,0.27);
glVertex2f(0.66,0.3);
glVertex2f(0.73,0.3);
glEnd();
glBegin(GL_QUADS); /// 2nd ventilator border
glColor3ub(255, 153, 204);
glVertex2f(0.59,0.27);
glVertex2f(0.52,0.27);
glVertex2f(0.52,0.3);
glVertex2f(0.59,0.3);
glEnd();
glBegin(GL_LINES); ///right side window details
glColor3ub(128, 43, 0);
glVertex2f(0.625,-0.1);
glVertex2f(0.625,0.35);
glEnd();
glBegin(GL_LINES);///right side window details
glColor3ub(128, 43, 0);
glVertex2f(0.8,0.2);
glVertex2f(0.45,0.2);
glEnd();
glBegin(GL_QUADS); ///right 1st final piller started
glColor3ub(255, 204, 229);
glVertex2f(0.5,0.42);
glVertex2f(0.35,0.42);
glVertex2f(0.35,0.62);
glVertex2f(0.5,0.62);
glEnd();
glBegin(GL_QUADS);  ///right 1st final piller border
glColor3ub(255, 153, 204);
glVertex2f(0.48,0.42);
glVertex2f(0.37,0.42);
glVertex2f(0.37,0.58);
glVertex2f(0.48,0.58);
glEnd();
glBegin(GL_QUADS);  ///right side 2nd final pillar
glColor3ub(255, 204, 229);
glVertex2f(0.9,0.42);
glVertex2f(0.75,0.42);
glVertex2f(0.75,0.62);
glVertex2f(0.9,0.62);
glEnd();
glBegin(GL_QUADS);  ///right side 2nd final pillar border
glColor3ub(255, 153, 204);
glVertex2f(0.88,0.42);
glVertex2f(0.77,0.42);
glVertex2f(0.77,0.58);
glVertex2f(0.88,0.58);
glEnd();
glBegin(GL_QUADS);  ///left side triangle border
glColor3ub(255,204,229);
glVertex2f(0.75,0.42);
glVertex2f(0.49,0.42);
glVertex2f(0.49,0.46);
glVertex2f(0.75,0.46);
glEnd();
glBegin(GL_LINES); ///detail
glColor3ub(153, 77, 0);
glVertex2f(0.75,0.46);
glVertex2f(0.5,0.46);
glEnd();
glBegin(GL_TRIANGLES);  ///2nd triangle
glColor3ub(255,153,204);
glVertex2f(0.75,0.46);
glVertex2f(0.5,0.46);
glVertex2f(0.62,0.62);
glEnd();
glBegin(GL_TRIANGLES);  ///2nd INNER triangle
glColor3ub(255,204,229);
glVertex2f(0.69,0.46);
glVertex2f(0.55,0.46);
glVertex2f(0.62,0.62);
glEnd();

glBegin(GL_QUADS);  ///stairs upper border
glColor3ub(153,77,0);
glVertex2f(-0.3,-0.1);
glVertex2f(0.3,-0.1);
glVertex2f(0.3,-0.02);
glVertex2f(-0.3,-0.02);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(-0.28,-0.1);
glVertex2f(-0.18,-0.1);
glVertex2f(-0.18,-0.04);
glVertex2f(-0.28,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(-0.12,-0.1);
glVertex2f(-0.02,-0.1);
glVertex2f(-0.02,-0.04);
glVertex2f(-0.12,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(0.0,-0.1);
glVertex2f(0.1,-0.1);
glVertex2f(0.1,-0.04);
glVertex2f(0.0,-0.04);
glEnd();
glBegin(GL_QUADS);  ///stairs inner border
glColor3ub(230, 138, 0);
glVertex2f(0.16,-0.1);
glVertex2f(0.27,-0.1);
glVertex2f(0.27,-0.04);
glVertex2f(0.16,-0.04);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 204, 229);/// left Middle pillar
glVertex2f(-0.19,-0.02);
glVertex2f(-0.27,-0.02);
glVertex2f(-0.27,0.55);
glVertex2f(-0.19,0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204); ///left middle pillar inner border
glVertex2f(-0.21,-0.02);
glVertex2f(-0.25,-0.02);
glVertex2f(-0.25,0.5);
glVertex2f(-0.21,0.5);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);/// left most door
glVertex2f(-0.1,-0.02);
glVertex2f(-0.19,-0.02);
glVertex2f(-0.19,0.23);
glVertex2f(-0.1,0.23);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,204,229);///left side middle 3/4 pillar
glVertex2f(-0.1,-0.02);
glVertex2f(-0.05,-0.02);
glVertex2f(-0.05,0.42);
glVertex2f(-0.1,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204);///left side middle 3/4 pillar border
glVertex2f(-0.09,-0.02);
glVertex2f(-0.06,-0.02);
glVertex2f(-0.06,0.42);
glVertex2f(-0.09,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);///middle main door
glVertex2f(-0.05,-0.02);
glVertex2f(0.05,-0.02);
glVertex2f(0.05,0.3);
glVertex2f(-0.05,0.3);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,204,229);///right side middle 2/4 pillar
glVertex2f(0.1,-0.02);
glVertex2f(0.05,-0.02);
glVertex2f(0.05,0.42);
glVertex2f(0.1,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204);///right side middle 2/4 pillar border
glVertex2f(0.09,-0.02);
glVertex2f(0.06,-0.02);
glVertex2f(0.06,0.42);
glVertex2f(0.09,0.42);
glEnd();
glBegin(GL_QUADS);
glColor3ub(153, 102, 51);///right most door
glVertex2f(0.1,-0.02);
glVertex2f(0.19,-0.02);
glVertex2f(0.19,0.23);
glVertex2f(0.1,0.23);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255, 204, 229);///right Middle pillar
glVertex2f(0.19,-0.02);
glVertex2f(0.27,-0.02);
glVertex2f(0.27,0.55);
glVertex2f(0.19,0.55);
glEnd();
glBegin(GL_QUADS);
glColor3ub(255,153,204); ///right middle pillar inner border
glVertex2f(0.21,-0.02);
glVertex2f(0.25,-0.02);
glVertex2f(0.25,0.5);
glVertex2f(0.21,0.5);
glEnd();
glBegin(GL_LINES); /// middle border details
glColor3ub(153, 77, 0);
glVertex2f(-0.9,-0.1);
glVertex2f(0.9,-0.1);
glEnd();
glBegin(GL_LINES); /// middle border details2
glColor3ub(153, 77, 0);
glVertex2f(-0.9,-0.12);
glVertex2f(0.9,-0.12);
glEnd();

glBegin(GL_QUADS);  ///stairs side border1
glColor3ub(153,77,0);
glVertex2f(-0.32,-0.1);
glVertex2f(-0.32,-0.3);
glVertex2f(0.32,-0.3);
glVertex2f(0.32,-0.1);
glEnd();
glBegin(GL_QUADS);  ///stairs middle border1
glColor3ub(136, 136, 68);
glVertex2f(-0.3,-0.1);
glVertex2f(-0.3,-0.3);
glVertex2f(0.3,-0.3);
glVertex2f(0.3,-0.1);
glEnd();

glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.1);
glVertex2f(-0.3,-0.13);
glVertex2f(0.3,-0.13);
glVertex2f(0.3,-0.1);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.16);
glVertex2f(-0.3,-0.19);
glVertex2f(0.3,-0.19);
glVertex2f(0.3,-0.16);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.3,-0.22);
glVertex2f(-0.3,-0.25);
glVertex2f(0.3,-0.25);
glVertex2f(0.3,-0.22);
glEnd();

glBegin(GL_QUADS);  ///stairs side border2
glColor3ub(153,77,0);
glVertex2f(-0.34,-0.3);
glVertex2f(-0.34,-0.5);
glVertex2f(0.34,-0.5);
glVertex2f(0.34,-0.3);
glEnd();
glBegin(GL_QUADS);  ///stairs middle border2
glColor3ub(136, 136, 68);
glVertex2f(-0.32,-0.3);
glVertex2f(-0.32,-0.5);
glVertex2f(0.32,-0.5);
glVertex2f(0.32,-0.3);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.28);
glVertex2f(-0.32,-0.31);
glVertex2f(0.32,-0.31);
glVertex2f(0.32,-0.28);
glEnd();

glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.34);
glVertex2f(-0.32,-0.37);
glVertex2f(0.32,-0.37);
glVertex2f(0.32,-0.34);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.4);
glVertex2f(-0.32,-0.43);
glVertex2f(0.32,-0.43);
glVertex2f(0.32,-0.4);
glEnd();
glBegin(GL_QUADS);  ///stairs steps
glColor3ub(128, 43, 0);
glVertex2f(-0.32,-0.46);
glVertex2f(-0.32,-0.49);
glVertex2f(0.32,-0.49);
glVertex2f(0.32,-0.46);
glEnd();
glBegin(GL_QUADS);  ///down left side pillar1
glColor3ub(255,204,229);
glVertex2f(-0.9,-0.12);
glVertex2f(-0.9,-0.5);
glVertex2f(-0.8,-0.5);
glVertex2f(-0.8,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.15);
glVertex2f(-0.8,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.2);
glVertex2f(-0.8,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.25);
glVertex2f(-0.8,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.3);
glVertex2f(-0.8,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.35);
glVertex2f(-0.8,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.4);
glVertex2f(-0.8,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(-0.9,-0.45);
glVertex2f(-0.8,-0.45);
glEnd();
glBegin(GL_QUADS); /// DOWN left side window 1
glColor3ub(153, 102, 51);
glVertex2f(-0.75,-0.2);
glVertex2f(-0.66,-0.2);
glVertex2f(-0.66,-0.5);
glVertex2f(-0.75,-0.5);
glEnd();
glBegin(GL_QUADS);  ///down left side pillar2
glColor3ub(255,204,229);
glVertex2f(-0.35,-0.12);
glVertex2f(-0.35,-0.5);
glVertex2f(-0.45,-0.5);
glVertex2f(-0.45,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.15);
glVertex2f(-0.45,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.2);
glVertex2f(-0.45,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.25);
glVertex2f(-0.45,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.3);
glVertex2f(-0.45,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.35);
glVertex2f(-0.45,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.4);
glVertex2f(-0.45,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(-0.35,-0.45);
glVertex2f(-0.45,-0.45);
glEnd();
glBegin(GL_QUADS); /// DOWN LEFT side window 2
glColor3ub(153, 102, 51);
glVertex2f(-0.59,-0.2);
glVertex2f(-0.5,-0.2);
glVertex2f(-0.5,-0.5);
glVertex2f(-0.59,-0.5);
glEnd();


glBegin(GL_QUADS); ///down RIGHT side pillar1
glColor3ub(255,204,229);
glVertex2f(0.9,-0.12);
glVertex2f(0.9,-0.5);
glVertex2f(0.8,-0.5);
glVertex2f(0.8,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.15);
glVertex2f(0.8,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.2);
glVertex2f(0.8,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.25);
glVertex2f(0.8,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.3);
glVertex2f(0.8,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.35);
glVertex2f(0.8,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.4);
glVertex2f(0.8,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128, 43, 0);
glVertex2f(0.9,-0.45);
glVertex2f(0.8,-0.45);
glEnd();
glBegin(GL_QUADS); ///DOWN RIGHT side window 1
glColor3ub(153, 102, 51);
glVertex2f(0.75,-0.2);
glVertex2f(0.66,-0.2);
glVertex2f(0.66,-0.5);
glVertex2f(0.75,-0.5);
glEnd();
glBegin(GL_QUADS);  ///down RIGHT side pillar2
glColor3ub(255,204,229);
glVertex2f(0.35,-0.12);
glVertex2f(0.35,-0.5);
glVertex2f(0.45,-0.5);
glVertex2f(0.45,-0.12);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.15);
glVertex2f(0.45,-0.15);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.2);
glVertex2f(0.45,-0.2);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.25);
glVertex2f(0.45,-0.25);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.3);
glVertex2f(0.45,-0.3);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.35);
glVertex2f(0.45,-0.35);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.4);
glVertex2f(0.45,-0.4);
glEnd();
glBegin(GL_LINES);
glColor3ub(128,43,0);
glVertex2f(0.35,-0.45);
glVertex2f(0.45,-0.45);
glEnd();
glBegin(GL_QUADS); ///DOWN right side window 2
glColor3ub(153, 102, 51);
glVertex2f(0.59,-0.2);
glVertex2f(0.5,-0.2);
glVertex2f(0.5,-0.5);
glVertex2f(0.59,-0.5);
glEnd();

///the round shapes gombuj
int j;

	GLfloat a=0.0f; GLfloat b=0.7f; GLfloat rad =0.2f;
	int triangleAmoun = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twiceP = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(a, b); // center of circle
		for(j = 0; j <= triangleAmoun;j++) {
			glVertex2f(
		            a + (rad * cos(j *  twiceP / triangleAmoun)),b + (rad * sin(j * twiceP/ triangleAmoun))
			);
		}
	glEnd();
glBegin(GL_QUADS); ///round down pillar1
glColor3ub(255, 153, 204);
glVertex2f(-0.19,0.65);
glVertex2f(-0.19,0.45);
glVertex2f(0.19,0.45);
glVertex2f(0.19,0.65);
glEnd();
glBegin(GL_QUADS); /// round down pillar1 border
glColor3ub(255, 128, 179);
glVertex2f(-0.17,0.63);
glVertex2f(-0.17,0.45);
glVertex2f(0.17,0.45);
glVertex2f(0.17,0.63);
glEnd();
glBegin(GL_QUADS); /// round down pillar1 window
glColor3ub(153, 102, 51);
glVertex2f(-0.06,0.58);
glVertex2f(-0.06,0.45);
glVertex2f(0.06,0.45);
glVertex2f(0.06,0.58);
glEnd();
glBegin(GL_QUADS); ///round down pillar2
glColor3ub(255,204,229);
glVertex2f(-0.25,0.7);
glVertex2f(-0.25,0.65);
glVertex2f(0.25,0.65);
glVertex2f(0.25,0.7);
glEnd();
glBegin(GL_TRIANGLES); ///round down pillar2
glColor3ub(163, 163, 194);
glVertex2f(-0.03,0.89);
glVertex2f(0.03,0.89);
glVertex2f(0.0,1.0);
glEnd();
glBegin(GL_QUADS); ///round down pillar2
glColor3ub(51, 204, 51);
glVertex2f(-0.9,-0.85);
glVertex2f(-0.9,-0.9);
glVertex2f(0.9,-0.9);
glVertex2f(0.9,-0.85);
glEnd();


int i;

	GLfloat c=-0.83f; GLfloat d=0.65; GLfloat radious =0.03f;
	int triangleAmount = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radious * cos(i *  twicePi / triangleAmount)),d + (radious * sin(i * twicePi/ triangleAmount))
			);
		}
	glEnd();


	int k;

	GLfloat e=-0.43f; GLfloat f=0.65; GLfloat radious1 =0.03f;
	int triangleAmount1 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(e, f); // center of circle
		for(k = 0; k <= triangleAmount1;k++) {
			glVertex2f(
		            e + (radious1 * cos(k *  twicePi1 / triangleAmount1)),f + (radious1 * sin(k * twicePi1/ triangleAmount1))
			);
		}
	glEnd();



	int L;         //positive axis

	GLfloat g=0.43f; GLfloat h=0.65; GLfloat radious2 =0.03f;
	int triangleAmount2 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(g, h); // center of circle
		for(L = 0; L <= triangleAmount1;L++) {
			glVertex2f(
		            g + (radious2 * cos(L *  twicePi2 / triangleAmount2)),h + (radious2 * sin(L * twicePi2/ triangleAmount2))
			);
		}
	glEnd();

	int m;

	GLfloat n=0.83f; GLfloat o=0.65; GLfloat radious3 =0.03f;
	int triangleAmount3 = 10; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 153, 204);
		glVertex2f(n, o); // center of circle
		for(m = 0; m <= triangleAmount3;m++) {
			glVertex2f(
		            n + (radious3 * cos(m *  twicePi3 / triangleAmount3)),o + (radious3 * sin(m * twicePi3/ triangleAmount3))
			);
		}
	glEnd();

///small trees
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.85,-0.4);
glVertex2f(-0.85,-0.6);
glVertex2f(-0.82,-0.6);
glVertex2f(-0.82,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.9,-0.45);
glVertex2f(-0.76,-0.45);
glVertex2f(-0.83,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.9,-0.4);
glVertex2f(-0.76,-0.4);
glVertex2f(-0.83,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.64,-0.4);
glVertex2f(-0.64,-0.6);
glVertex2f(-0.61,-0.6);
glVertex2f(-0.61,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.69,-0.45);
glVertex2f(-0.55,-0.45);
glVertex2f(-0.62,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.69,-0.4);
glVertex2f(-0.55,-0.4);
glVertex2f(-0.62,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.36,-0.4);
glVertex2f(-0.36,-0.6);
glVertex2f(-0.33,-0.6);
glVertex2f(-0.33,-0.4);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.41,-0.45);
glVertex2f(-0.27,-0.45);
glVertex2f(-0.345,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(-0.41,-0.4);
glVertex2f(-0.27,-0.4);
glVertex2f(-0.345,-0.3);
glEnd();
// small tree x axis(positive)
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.85,-0.4);
glVertex2f(0.85,-0.6);
glVertex2f(0.82,-0.6);
glVertex2f(0.82,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.9,-0.45);
glVertex2f(0.76,-0.45);
glVertex2f(0.83,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.9,-0.4);
glVertex2f(0.76,-0.4);
glVertex2f(0.83,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.64,-0.4);
glVertex2f(0.64,-0.6);
glVertex2f(0.61,-0.6);
glVertex2f(0.61,-0.4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.69,-0.45);
glVertex2f(0.55,-0.45);
glVertex2f(0.62,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.69,-0.4);
glVertex2f(0.55,-0.4);
glVertex2f(0.62,-0.3);
glEnd();

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(0.36,-0.4);
glVertex2f(0.36,-0.6);
glVertex2f(0.33,-0.6);
glVertex2f(0.33,-0.4);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.41,-0.45);
glVertex2f(0.27,-0.45);
glVertex2f(0.345,-0.3);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 204, 0);
glVertex2f(0.41,-0.4);
glVertex2f(0.27,-0.4);
glVertex2f(0.345,-0.3);
glEnd();




///tree
    glBegin(GL_QUADS);///coplant
	glColor3ub(77, 40, 0);
	glVertex2f(-0.8f, -0.75f);
	glVertex2f(-0.77f,-0.75f);
	glVertex2f(-0.77f, -0.9f);
	glVertex2f(-0.8f, -0.9f);
	glEnd();

    glBegin(GL_QUADS);///coplant2
	glColor3ub(77, 40, 0);
	glVertex2f(-0.77f, -0.3f);
	glVertex2f(-0.76f,-0.3f);
	glVertex2f(-0.77f, -0.75f);
	glVertex2f(-0.8f, -0.75f);
	glEnd();


    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(-0.77f, -0.3f);
    glVertex2f(-0.86f,-0.33f);
    glVertex2f(-0.8f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(-0.9f, -0.45f);
    glVertex2f(-0.86f,-0.33f);
    glVertex2f(-0.8f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(-0.77f, -0.3f);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.68f, -0.4f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(-0.65f,-0.33f);
    glVertex2f(-0.68f, -0.4f);
    glVertex2f(-0.6f, -0.45f);
	glEnd();

    glBegin(GL_QUADS);///copata3
	glColor3ub(0, 77, 0);
    glVertex2f(-0.56f,-0.27f);
    glVertex2f(-0.67f, -0.2f);
    glVertex2f(-0.57f, -0.25f);
    glVertex2f(-0.77f, -0.3f);
	glEnd();

    glBegin(GL_QUADS);///copata4
	glColor3ub(0, 77, 0);
    glVertex2f(-0.90f,-0.28f);
    glVertex2f(-0.97f, -0.25f);
    glVertex2f(-0.87f, -0.2f);
    glVertex2f(-0.77f, -0.3f);
	glEnd();
   ///tree two
    glBegin(GL_QUADS);///coplant
	glColor3ub(77, 40, 0);
	glVertex2f(0.80f, -0.75f);
	glVertex2f(0.77f, -0.75f);
	glVertex2f(0.77f, -0.90f);
	glVertex2f(0.80f, -0.90f);
	glEnd();

    glBegin(GL_QUADS);///coplant2
	glColor3ub(77, 40, 0);
	glVertex2f(0.77f, -0.3f);
	glVertex2f(0.76f, -0.3f);
	glVertex2f(0.77f, -0.75f);
	glVertex2f(0.80f, -0.75f);
	glEnd();


    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(0.77f, -0.30f);
    glVertex2f(0.86f, -0.33f);
    glVertex2f(0.80f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata1
	glColor3ub(0, 77, 0);
    glVertex2f(0.90f, -0.45f);
    glVertex2f(0.86f, -0.33f);
    glVertex2f(0.80f, -0.36f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(0.77f, -0.30f);
    glVertex2f(0.65f, -0.33f);
    glVertex2f(0.68f, -0.40f);
	glEnd();

    glBegin(GL_TRIANGLES);///copata2
	glColor3ub(0, 77, 0);
    glVertex2f(0.65f, -0.33f);
    glVertex2f(0.68f, -0.40f);
    glVertex2f(0.60f, -0.45f);
	glEnd();

    glBegin(GL_QUADS);///copata3
	glColor3ub(0, 77, 0);
    glVertex2f(0.56f, -0.27f);
    glVertex2f(0.67f, -0.20f);
    glVertex2f(0.57f, -0.25f);
    glVertex2f(0.77f, -0.30f);
	glEnd();

    glBegin(GL_QUADS);///copata4
	glColor3ub(0, 77, 0);
    glVertex2f(0.90f, -0.28f);
    glVertex2f(0.97f, -0.25f);
    glVertex2f(0.87f, -0.20f);
    glVertex2f(0.77f, -0.30f);
	glEnd();


glFlush();
}
///Sound

void sound()
{

    PlaySound("Sunnyday.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound2()
{

    PlaySound("Wind.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void sound3()
{

    PlaySound("NightTime.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void sound4()
{

    PlaySound("NightStorm.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}


///manual change

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
glutDisplayFunc(display1);
 sound();
break;
case GLUT_KEY_DOWN:
glutDisplayFunc(display2);
sound2();
break;
case GLUT_KEY_LEFT:
glutDisplayFunc(display3);
sound3();
break;
case GLUT_KEY_RIGHT:
   glutDisplayFunc(display4);
   sound4();
break;}
glutPostRedisplay();
	}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("Ahsan Manjil");
    glutDisplayFunc(display1);
    glutMouseFunc(handleMouse);
    glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(SpecialInput);
    glutTimerFunc(100, updateCloud, 0);
    glutTimerFunc(100, updateBirds, 0);
     glutTimerFunc(100, Rainupdate, 0);
    glutMainLoop();
    sound();
    return 0;

}
