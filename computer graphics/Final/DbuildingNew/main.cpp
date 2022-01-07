///Press r for rain.
#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cmath>
#include<cstring>
#include<time.h>
#include<windows.h>
#include <sstream>
#include<fstream>

float Rainposition= 0.0f;
float Rainspeed=- 0.01f;
bool rainStatus=false;

void Rainupdate(int value) {
    if (rainStatus==true)
    {
    if(Rainposition <-0.02)
    {
        Rainposition = 0.02f;
    }
    Rainposition += Rainspeed;

	glutPostRedisplay();
    }

	glutTimerFunc(100, Rainupdate, 0);
}


///rain
void rain()
{
    glLineWidth(2);
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


void display()
{

    glClearColor(0.75,0.80,0.90,1.0);
    glClear(GL_COLOR_BUFFER_BIT);

/// side pillar
glBegin(GL_QUADS);
glColor3ub(51, 77, 77);
glVertex2f(-0.94,0.98);
glVertex2f(-0.94,-0.6);
glVertex2f(-0.6,-0.6);
glVertex2f(-0.6,0.98);
glEnd();
/// 2nd side pillar
glBegin(GL_QUADS);
glColor3ub(51, 77, 77);
glVertex2f(0.94,0.98);
glVertex2f(0.94,-0.6);
glVertex2f(0.6,-0.6);
glVertex2f(0.6,0.98);
glEnd();
/// First floor
glBegin(GL_QUADS);
///glColor3ub(204, 221, 255);
glColor3ub(223, 223, 223);
glVertex2f(-0.84,-0.1);
glVertex2f(-0.84,-0.6);
glVertex2f(0.84,-0.6);
glVertex2f(0.84,-0.1);
glEnd();
/// 1st floor  windows
glBegin(GL_QUADS);
glColor3ub(102, 181, 255);
glVertex2f(-0.8,-0.2);
glVertex2f(-0.8,-0.3);
glVertex2f(0.8,-0.3);
glVertex2f(0.8,-0.2);
glEnd();
/// window ends
glBegin(GL_QUADS);
glColor3ub(102, 181, 255);
glVertex2f(-0.8,-0.4);
glVertex2f(-0.8,-0.5);
glVertex2f(0.8,-0.5);
glVertex2f(0.8,-0.4);
glEnd();
/// Details
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.65,-0.1) ;
glVertex2f(0.65,-0.6) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.45,-0.1) ;
glVertex2f(0.45,-0.6) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.25,-0.1) ;
glVertex2f(0.25,-0.6) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.05,-0.1) ;
glVertex2f(0.05,-0.6) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.15,-0.1) ;
glVertex2f(-0.15,-0.6) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.35,-0.1) ;
glVertex2f(-0.35,-0.6) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.55,-0.1) ;
glVertex2f(-0.55,-0.6) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.75,-0.1) ;
glVertex2f(-0.75,-0.6) ;
glEnd();
///Details ends
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.84,-0.35) ;
glVertex2f(0.84,-0.35) ;
glEnd();

/// 2nd floor
glBegin(GL_QUADS);
glColor3ub(223, 223, 223);
glVertex2f(-0.8,0.4);
glVertex2f(-0.8,-0.1);
glVertex2f(0.8,-0.1);
glVertex2f(0.8,0.4);
glEnd();
///2nd floor 2nd window
glBegin(GL_QUADS);
glColor3ub(102, 181, 255);
glVertex2f(-0.75,0.1);
glVertex2f(-0.75,0.0);
glVertex2f(0.75,0.0);
glVertex2f(0.75,0.1);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.6,0.4) ;
glVertex2f(-0.6,-0.1) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.4,0.4) ;
glVertex2f(-0.4,-0.1) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.2,0.4) ;
glVertex2f(-0.2,-0.1) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.0,0.4) ;
glVertex2f(0.0,-0.1) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.2,0.4) ;
glVertex2f(0.2,-0.1) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.4,0.4) ;
glVertex2f(0.4,-0.1) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.6,0.4) ;
glVertex2f(0.6,-0.1) ;
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.8,0.15) ;
glVertex2f(0.8,0.15) ;
glEnd();
///2nd floor 1st window
glBegin(GL_QUADS);
glColor3ub(102, 181, 255);
glVertex2f(-0.5,0.3);
glVertex2f(-0.6,0.2);
glVertex2f(-0.3,0.2);
glVertex2f(-0.4,0.3);
glEnd();
/// 1st window part2
glBegin(GL_QUADS);
glColor3ub(102, 181, 255);
glVertex2f(-0.1,0.3);
glVertex2f(-0.2,0.2);
glVertex2f(0.1,0.2);
glVertex2f(0.0,0.3);
glEnd();
/// 3rd Floor
glBegin(GL_QUADS);
glColor3ub(223, 223, 223);
glVertex2f(0.75,0.4);
glVertex2f(-0.75,0.4);
glVertex2f(-0.75,0.85);
glVertex2f(0.75,0.85);
glEnd();
///3rd floor 1st window
glBegin(GL_QUADS);
glColor3ub(102, 181, 255);
glVertex2f(-0.7,0.7);
glVertex2f(-0.7,0.8);
glVertex2f(0.7,0.8);
glVertex2f(0.7,0.7);
glEnd();
///3rd floor 2nd window
glBegin(GL_QUADS);
glColor3ub(102, 181, 255);
glVertex2f(-0.7,0.5);
glVertex2f(-0.7,0.6);
glVertex2f(0.7,0.6);
glVertex2f(0.7,0.5);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.65,0.85);
glVertex2f(-0.65,0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.45,0.85);
glVertex2f(-0.45,0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.25,0.85);
glVertex2f(-0.25,0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.05,0.85);
glVertex2f(-0.05,0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.05,0.85);
glVertex2f(-0.05,0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.15,0.85);
glVertex2f(0.15,0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.35,0.85);
glVertex2f(0.35,0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(0.55,0.85);
glVertex2f(0.55,0.4);
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.75,0.628);
glVertex2f(0.75,0.628);
glEnd();
/// Road

glBegin(GL_QUADS);
glColor3ub(153, 153, 153);
glVertex2f(-1,-1);
glVertex2f(1,-1);
glVertex2f(1,-0.6);
glVertex2f(-1,-0.6);
glEnd();

///road middle lines
glLineWidth(2);
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(-0.1,-0.8) ;
glVertex2f(-0.2,-0.8) ;
glVertex2f(-0.4,-0.8) ;
glVertex2f(-0.5,-0.8) ;
glVertex2f(-0.7,-0.8) ;
glVertex2f(-0.8,-0.8) ;
glVertex2f(0.1,-0.8) ;
glVertex2f(0.2,-0.8) ;
glVertex2f(0.4,-0.8) ;
glVertex2f(0.5,-0.8) ;
glVertex2f(0.7,-0.8) ;
glVertex2f(0.8,-0.8) ;
glEnd();

///rain
    if(rainStatus==true)
    {
        glLoadIdentity();
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
        glPopMatrix();
    }
    glFlush();
}

void keyboard(unsigned char key, int x, int y)
{
   switch (key)
   {
      case 'r':
      case 'R':
        if(rainStatus==true)
        {
            rainStatus=false;
        }
        else
        {
            rainStatus=true;
        }
         break;
   }
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(700, 700);
    glutCreateWindow("D Building Aiub");
    glutDisplayFunc(display);
   glutTimerFunc(100, Rainupdate, 0);
   glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;

}
