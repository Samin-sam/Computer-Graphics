/// The sound files is in my special key inputs. there are three view.so 3 sound file.
#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.14159265358979323846



void Idle()
{
    glutPostRedisplay();
}

GLfloat position = 0.0f;
GLfloat speed = 0.70f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.70f;

//GLfloat position2 = 0.0f;
//GLfloat speed2 = 0.50f;


void update(int value) {

    if(position <-3.0)

        position = 80.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void update1(int value) {

    if(position1 >70.0)
        position1 = -20.0f;

    position1 += speed1;

	glutPostRedisplay();


	glutTimerFunc(100, update1, 0);
}

/*
void update2(int value) {

    if(position2 >40.0)
        position2 = 90.0f;

    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);
}

*/


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void handleMouse(int button, int state, int x, int y)
 {
	if (button == GLUT_LEFT_BUTTON)
        {
			speed1 += 0.3f;

        }
			if (button == GLUT_RIGHT_BUTTON)
	{
	    speed1 -= 0.3f;

    }
	glutPostRedisplay();
	}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    break;
case 'r':
    speed = 0.8f;
    break;
glutPostRedisplay();
	}
}

///no need
/*

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed2=.90;
break;
case GLUT_KEY_DOWN:
speed2=.2;
break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
break;}
glutPostRedisplay();
	}



*/

/// Day View

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    //circle
    glLineWidth(5.5);

    glBegin(GL_QUADS);
    glColor3ub(0.0f,128.0f,0.0f);
    glVertex2f(100.0f,-100.0f);
    glVertex2f(100.0f,80.0f);
    glVertex2f(-100.0f,80.0f);
    glVertex2f(-100.0f,-100.0f);
    glEnd();

    ///road
    glBegin(GL_QUADS);
    glColor3ub(190.0f,190.0f,190.0f);
    glVertex2f(-40.0f,70.0f);
    glVertex2f(-90.0f,-100.0f);
    glVertex2f(38.0f,-100.0f);
    glVertex2f(-20.0f,70.0f);
    glEnd();

    ///sky
    glBegin(GL_QUADS);
    glColor3ub(204.0f,221.0f,255.0f);
    glVertex2f(-100.0f,100.0f);
    glVertex2f(-100.0f,60.0f);
    glVertex2f(100.0f,60.0f);
    glVertex2f(100.0f,100.0f);
    glEnd();


/*
    ///Bird
glPushMatrix();
glTranslatef(position2,0.0f, 0.0f);
glBegin(GL_LINES); //Bird
glColor3ub(0, 0, 153);
glVertex2f(-40,80);
glVertex2f(-30,90);
glEnd();
glBegin(GL_LINES); //Bird
glColor3ub(0, 0, 153);
glVertex2f(-40,80);
glVertex2f(-50,90);
glEnd();
glPopMatrix();


*/


    ///Cloud

	glPushMatrix();
	glTranslatef(position1, 0.0, 0.0);

	glPushMatrix();
	glTranslatef(-30, 95, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-20, 87, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r =10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-25, 92, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-30, 85, 0);

	glBegin(GL_POLYGON);
	glColor3ub(140, 140, 140);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
    glPopMatrix();





    ///sun
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++){
        glColor3ub(255, 255, 77);
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=15;
        float x=r*cos(A)+80;
        float y=r*sin(A)+85;
        glVertex2f(x,y);
    }
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,-70.0f);
    glVertex2f(-30.0f,-90.0f);
    glVertex2f(-28.0f,-90.0f);
    glVertex2f(-28.0f,-70.0f);
    glEnd();
  //Runway middle line
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,-40.0f);
    glVertex2f(-30.0f,-60.0f);
    glVertex2f(-28.0f,-60.0f);
    glVertex2f(-28.0f,-40.0f);
    glEnd();
    //Runway middle line
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,10.0f);
    glVertex2f(-30.0f,20.0f);
    glVertex2f(-28.0f,20.0f);
    glVertex2f(-28.0f,10.0f);
    glEnd();

    //Runway middle line
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,50.0f);
    glVertex2f(-30.0f,57.0f);
    glVertex2f(-28.0f,57.0f);
    glVertex2f(-28.0f,50.0f);
    glEnd();
    ///Runway middle line
   /*
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,65.0f);
    glVertex2f(-30.0f,71.0f);
    glVertex2f(-28.0f,71.0f);
    glVertex2f(-28.0f,65.0f);
    glEnd();
*/

       glPushMatrix();
glTranslatef(0.0f,position, 0.0f);

     glBegin(GL_POLYGON);
    for(int i=0;i<200;i++){
            glColor3ub(242, 242, 242);
      //  glColor3ub(102.0,51.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=14;
        float x=r*cos(A)-30;
        float y=r*sin(A);
        glVertex2f(x,y);
    }
    glEnd();

//left side
   glBegin(GL_QUADS);
   glColor3ub(0, 82, 204);
    glVertex2f(-41.0f,-9.0f);
    glVertex2f(-43.0f,-4.0f);
    glVertex2f(-43.9f,1.0f);
    glVertex2f(-75.0f,0.0f);
    glEnd();


    //right side
    glBegin(GL_QUADS);
    glColor3ub(0, 82, 204);
    glVertex2f(-19.0f,-9.0f);
    glVertex2f(-17.0f,-4.0f);
    glVertex2f(-16.0f,1.0f);
    glVertex2f(17.0f,0.0f);
    glEnd();

    //short left
    glBegin(GL_QUADS);
   glColor3ub(0, 82, 204);
    glVertex2f(-41.0f,9.0f);
    glVertex2f(-39.0f,11.0f);
    glVertex2f(-38.0f,11.0f);
    glVertex2f(-60.0f,13.0f);
    glEnd();
    //short middle
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 82, 204);
    glVertex2f(-31.0f,13.0f);
    glVertex2f(-29.0f,13.0f);
    glVertex2f(-30.0f,50.0f);
    glEnd();
    //short right
    glBegin(GL_QUADS);
    glColor3ub(0, 82, 204);
    glVertex2f(-19.0f,9.0f);
    glVertex2f(-21.0f,11.0f);
    glVertex2f(-11.0f,12.0f);
    glVertex2f(0.0f,13.0f);
    glEnd();

    //left side quad
    glBegin(GL_QUADS);
    glColor3ub(0, 82, 204);
    glVertex2f(-56.0f,-5.0f);
    glVertex2f(-60.0f,-4.0f);
    glVertex2f(-60.0f,-7.0f);
    glVertex2f(-56.0f,-7.0f);
    glEnd();


    //right side quad
    glBegin(GL_QUADS);

    glColor3ub(0, 82, 204);
    glVertex2f(-1.0f,-7.0f);
    glVertex2f(-5.0f,-8.0f);
    glVertex2f(-5.0f,-5.0f);
    glVertex2f(-1.0f,-4.0f);
    glEnd();

     //left engine
    glColor3ub(204, 255, 255);
    GLfloat x=-58;
	GLfloat y=-14;
	GLfloat radius =7;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount;i++) {
		glVertex2f(x + (radius * cos(i *  twicePi / lineAmount)),y + (radius* sin(i * twicePi / lineAmount)));
		}
	glEnd();

	//left middle circle engine
  glColor3ub(102.0,51.0,0.0);
    GLfloat x2=-58;
	GLfloat y2=-14;
	GLfloat radius2 =5;
	int lineAmount2 = 100;
	GLfloat twicePi2 = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount2;i++) {
		glVertex2f(x2 + (radius2 * cos(i *  twicePi2 / lineAmount2)),y2 + (radius2* sin(i * twicePi2 / lineAmount2)));
		}
	glEnd();

	//right engine
    glColor3ub(204, 255, 255);
    GLfloat x3=-2;
	GLfloat y3=-14;
	GLfloat radius3 =7;
	int lineAmount3 = 100;
	GLfloat twicePi3 = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount3;i++) {
		glVertex2f(x3 + (radius3 * cos(i *  twicePi3 / lineAmount3)),y3 + (radius3* sin(i * twicePi3 / lineAmount3)));
		}
	glEnd();

	//right middle circle engine
 glColor3ub(102.0,51.0,0.0);
    GLfloat x5=-2;
	GLfloat y5=-14;
	GLfloat radius5 =5;
	int lineAmount5 = 100;
	GLfloat twicePi5 = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount5;i++) {
		glVertex2f(x5 + (radius5 * cos(i *  twicePi5 / lineAmount5)),y5 + (radius5* sin(i * twicePi5 / lineAmount5)));
		}
	glEnd();

 //middle wheel line
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glLineWidth(1.0f);
    glVertex2f(-30.0f,-14.0f);
    glVertex2f(-30.0f,-26.0f);
    glVertex2f(-29.0f,-26.0f);
    glVertex2f(-29.0f,-14.0f);
    glEnd();


    //middle wheel
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-32.0f,-23.0f);
    glVertex2f(-32.0f,-29.0f);
    glVertex2f(-31.0f,-29.0f);
    glVertex2f(-31.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-28.0f,-23.0f);
    glVertex2f(-28.0f,-29.0f);
    glVertex2f(-27.0f,-29.0f);
    glVertex2f(-27.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
   glColor3ub(102.0,51.0,0.0);
    glVertex2f(-31.0f,-26.0f);
    glVertex2f(-31.0f,-27.0f);
    glVertex2f(-28.0f,-27.0f);
    glVertex2f(-28.0f,-26.0f);
    glEnd();

  //left wheel line
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glLineWidth(1.0f);
    glVertex2f(-49.0f,-7.0f);
    glVertex2f(-49.0f,-26.0f);
    glVertex2f(-48.0f,-26.0f);
    glVertex2f(-48.0f,-7.0f);
    glEnd();

    //left wheel
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glLineWidth(1.0f);
    glVertex2f(-51.0f,-23.0f);
    glVertex2f(-51.0f,-29.0f);
    glVertex2f(-50.0f,-29.0f);
    glVertex2f(-50.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glLineWidth(1.0f);
    glVertex2f(-47.0f,-23.0f);
    glVertex2f(-47.0f,-29.0f);
    glVertex2f(-46.0f,-29.0f);
    glVertex2f(-46.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glLineWidth(1.0f);
    glVertex2f(-50.0f,-26.0f);
    glVertex2f(-50.0f,-27.0f);
    glVertex2f(-47.0f,-27.0f);
    glVertex2f(-47.0f,-26.0f);
    glEnd();

    //left wheel line1
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-48.0f,-15.0f);
    glVertex2f(-48.0f,-16.0f);
    glVertex2f(-42.0f,-9.0f);
    glVertex2f(-42.0f,-8.0f);
    glEnd();
    //left wheel line2
    glBegin(GL_QUADS);
   glColor3ub(102.0,51.0,0.0);
    glVertex2f(-48.0f,-7.0f);
    glVertex2f(-48.0f,-8.0f);
    glVertex2f(-45.0f,-13.0f);
    glVertex2f(-45.0f,-12.0f);
    glEnd();


    //right wheel line
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glLineWidth(1.0f);
    glVertex2f(-11.0f,-7.0f);
    glVertex2f(-11.0f,-26.0f);
    glVertex2f(-10.0f,-26.0f);
    glVertex2f(-10.0f,-7.0f);
    glEnd();

    //right wheel
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);

    glVertex2f(-13.0f,-23.0f);
    glVertex2f(-13.0f,-29.0f);
    glVertex2f(-12.0f,-29.0f);
    glVertex2f(-12.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glVertex2f(-9.0f,-23.0f);
    glVertex2f(-9.0f,-29.0f);
    glVertex2f(-8.0f,-29.0f);
    glVertex2f(-8.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);

    glVertex2f(-13.0f,-26.0f);
    glVertex2f(-13.0f,-27.0f);
    glVertex2f(-9.0f,-27.0f);
    glVertex2f(-9.0f,-26.0f);
    glEnd();

    //right wheel line1
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-12.0f,-15.0f);
    glVertex2f(-12.0f,-16.0f);
    glVertex2f(-18.0f,-9.0f);
    glVertex2f(-18.0f,-8.0f);
    glEnd();
    //right wheel line2
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-12.0f,-7.0f);
    glVertex2f(-12.0f,-8.0f);
    glVertex2f(-15.0f,-13.0f);
    glVertex2f(-15.0f,-12.0f);
    glEnd();



        //circle white space
    glBegin(GL_POLYGON);
    glColor3ub(170.0f,170.0f,150.0f);
    glVertex2f(-37.0f,2.0f);
    glVertex2f(-38.0f,2.0f);
    glVertex2f(-37.0f,10.0f);
    glVertex2f(-23.0f,10.0f);
    glVertex2f(-23.0f,10.0f);
    glVertex2f(-22.0f,2.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-30.0f,10.0f);
    glVertex2f(-31.0f,2.0f);
    glEnd();


glPopMatrix();


  //building line 1
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(50.0f,-30.0f);
    glVertex2f(60.0f,-30.0f);
    glEnd();
    //building line 2
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(80.0f,-25.0f);
    glVertex2f(70.0f,-30.0f);
    glEnd();
    //inside building
    glBegin(GL_POLYGON);
    glColor3ub(178.0f,252.0f,255.0f);
    glVertex2f(58.0f,-32.0f);
    glVertex2f(58.0f,-52.0f);
    glVertex2f(52.0f,-43.0f);
    glVertex2f(52.0f,-32.0f);
    glEnd();
    //inside building line 1
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(56.0f,-32.0f);
    glVertex2f(56.0f,-49.0f);
    glEnd();
    //inside building line 2
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(54.0f,-32.0f);
    glVertex2f(54.0f,-46.0f);
    glEnd();
    //inside building line 3
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(52.0f,-38.0f);
    glVertex2f(58.0f,-42.0f);
    glEnd();
    //inside building line right
    glBegin(GL_POLYGON);
    glColor3ub(178.0f,252.0f,255.0f);
    glVertex2f(72.0f,-55.0f);
    glVertex2f(78.0f,-50.0f);
    glVertex2f(78.0f,-28.0f);
    glVertex2f(72.0f,-32.0f);
    glEnd();
    //inside building line right 1
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(74.0f,-30.0f);
    glVertex2f(74.0f,-54.0f);
    glEnd();
    //inside building line right 2
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(76.0f,-29.0f);
    glVertex2f(76.0f,-52.0f);
    glEnd();
    //inside building line right 3
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(72.0f,-43.0f);
    glVertex2f(78.0f,-38.0f);
    glEnd();


    //tower
    glBegin(GL_POLYGON);
    glColor3ub(132.0f,127.0f,121.0f);
    glVertex2f(60.0f,-70.0f);
    glVertex2f(65.0f,-71.0f);
    glVertex2f(70.0f,-70.0f);
    glVertex2f(70.0f,-30.0f);
    glVertex2f(60.0f,-30.0f);
    glEnd();
    //tower head1
    glBegin(GL_POLYGON);
    glColor3ub(194.0f,194.0f,214.0f);
    glVertex2f(60.0f,-30.0f);
    glVertex2f(70.0f,-30.0f);
    glVertex2f(80.0f,-10.0f);
    glVertex2f(50.0f,-10.0f);
    glEnd();
    //tower head2
    glBegin(GL_POLYGON);
    glColor3ub(194.0f,194.0f,214.0f);
    glVertex2f(55.0f,-10.0f);
    glVertex2f(75.0f,-10.0f);
    glVertex2f(75.0f,5.0f);
    glVertex2f(70.0f,9.0f);
    glVertex2f(60.0f,9.0f);
    glVertex2f(55.0f,5.0f);
    glEnd();
    //tower head white space
    glBegin(GL_POLYGON);
    glColor3ub(204.0f,242.0f,255.0f);
    glVertex2f(57.0f,-9.0f);
    glVertex2f(73.0f,-9.0f);
    glVertex2f(70.0f,4.0f);
    glVertex2f(60.0f,4.0f);
    glEnd();
    //tower head white space line 1
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(61.0f,-9.0f);
    glVertex2f(61.0f,4.0f);
    glEnd();
    //tower head white space line 2
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(69.0f,-9.0f);
    glVertex2f(69.0f,4.0f);
    glEnd();
    //tower head white space line 3
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(61.0f,-2.5f);
    glVertex2f(69.0f,-2.5f);
    glEnd();
    //tower head white space line 4
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(64.5f,-2.5f);
    glVertex2f(64.5f,4.0f);
    glEnd();



  //  windmil


glBegin(GL_QUADS);
    glColor3ub(0.0,0.0,0.0);
    glVertex2f(60.0f,50.0f);
    glVertex2f(57.0f,50.0f);
    glVertex2f(52.0f,10.0f);
    glVertex2f(65.0f,10.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3ub(242, 242, 242);

        glVertex3f(59, 49, 0);
        glVertex3f(79, 60, 0);
        glVertex3f(73, 70, 0);


        glVertex3f(59, 49, 0);
        glVertex3f(39, 60, 0);
        glVertex3f(45, 70, 0);


        glVertex3f(59, 49, 0);
        glVertex3f(39, 38, 0);
        glVertex3f(45, 28, 0);

        glVertex3f(59, 49, 0);
        glVertex3f(79, 38, 0);
        glVertex3f(73, 28, 0);



glEnd();





        glFlush();
}

/// Evening View

void display1()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    ///circle
    glLineWidth(5.5);

    glBegin(GL_QUADS);
    glColor3ub(0.0f,128.0f,0.0f);
    glVertex2f(100.0f,-100.0f);
    glVertex2f(100.0f,80.0f);
    glVertex2f(-100.0f,80.0f);
    glVertex2f(-100.0f,-100.0f);
    glEnd();

    ///road
    glBegin(GL_QUADS);
    glColor3ub(190.0f,190.0f,190.0f);
    glVertex2f(-40.0f,70.0f);
    glVertex2f(-90.0f,-100.0f);
    glVertex2f(38.0f,-100.0f);
    glVertex2f(-20.0f,70.0f);
    glEnd();

    ///sky
    glBegin(GL_QUADS);
    glColor3ub(255, 166, 77);
    glVertex2f(-100.0f,100.0f);
    glVertex2f(-100.0f,60.0f);
    glVertex2f(100.0f,60.0f);
    glVertex2f(100.0f,100.0f);
    glEnd();

    ///Bird
   glPushMatrix();
   //glTranslatef(position2,0.0f, 0.0f);
   glBegin(GL_LINES); //Bird
   glColor3ub(0, 0, 153);
  glVertex2f(-40,80);
  glVertex2f(-30,90);
   glEnd();
  glBegin(GL_LINES); //Bird
  glColor3ub(0, 0, 153);
  glVertex2f(-40,80);
   glVertex2f(-50,90);
  glEnd();
  glPopMatrix();





    ///Cloud

	glPushMatrix();
	glTranslatef(position1, 0.0, 0.0);

	glPushMatrix();
	glTranslatef(-30, 95, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-20, 87, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r =10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();


	glPushMatrix();
	glTranslatef(-25, 92, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-30, 85, 0);

	glBegin(GL_POLYGON);
	glColor3ub(77, 77, 77);
	for (int i = 0; i < 200; i++)
	{
		float pi = 3.1416;
		float A = (i * 2 * pi) / 200;
		float r = 10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x, y);
	}
	glEnd();
	glPopMatrix();
    glPopMatrix();





    ///sun
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++){
        glColor3ub(255, 133, 51);
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=15;
        float x=r*cos(A)+80;
        float y=r*sin(A)+85;
        glVertex2f(x,y);
    }
    glEnd();


     glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,-70.0f);
    glVertex2f(-30.0f,-90.0f);
    glVertex2f(-28.0f,-90.0f);
    glVertex2f(-28.0f,-70.0f);
    glEnd();
  //Runway middle line
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,-40.0f);
    glVertex2f(-30.0f,-60.0f);
    glVertex2f(-28.0f,-60.0f);
    glVertex2f(-28.0f,-40.0f);
    glEnd();
    //Runway middle line
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,10.0f);
    glVertex2f(-30.0f,20.0f);
    glVertex2f(-28.0f,20.0f);
    glVertex2f(-28.0f,10.0f);
    glEnd();

    //Runway middle line
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,50.0f);
    glVertex2f(-30.0f,57.0f);
    glVertex2f(-28.0f,57.0f);
    glVertex2f(-28.0f,50.0f);
    glEnd();
    ///Runway middle line
    /*
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,65.0f);
    glVertex2f(-30.0f,71.0f);
    glVertex2f(-28.0f,71.0f);
    glVertex2f(-28.0f,65.0f);
    glEnd();
    */

       glPushMatrix();
glTranslatef(0.0f,position, 0.0f);

     glBegin(GL_POLYGON);
    for(int i=0;i<200;i++){
            glColor3ub(242, 242, 242);
      //  glColor3ub(102.0,51.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=14;
        float x=r*cos(A)-30;
        float y=r*sin(A);
        glVertex2f(x,y);
    }
    glEnd();

//left side
   glBegin(GL_QUADS);
   glColor3ub(0, 82, 204);
    glVertex2f(-41.0f,-9.0f);
    glVertex2f(-43.0f,-4.0f);
    glVertex2f(-43.9f,1.0f);
    glVertex2f(-75.0f,0.0f);
    glEnd();


    //right side
    glBegin(GL_QUADS);
    glColor3ub(0, 82, 204);
    glVertex2f(-19.0f,-9.0f);
    glVertex2f(-17.0f,-4.0f);
    glVertex2f(-16.0f,1.0f);
    glVertex2f(17.0f,0.0f);
    glEnd();

    //short left
    glBegin(GL_QUADS);
   glColor3ub(0, 82, 204);
    glVertex2f(-41.0f,9.0f);
    glVertex2f(-39.0f,11.0f);
    glVertex2f(-38.0f,11.0f);
    glVertex2f(-60.0f,13.0f);
    glEnd();
    //short middle
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 82, 204);
    glVertex2f(-31.0f,13.0f);
    glVertex2f(-29.0f,13.0f);
    glVertex2f(-30.0f,50.0f);
    glEnd();
    //short right
    glBegin(GL_QUADS);
    glColor3ub(0, 82, 204);
    glVertex2f(-19.0f,9.0f);
    glVertex2f(-21.0f,11.0f);
    glVertex2f(-11.0f,12.0f);
    glVertex2f(0.0f,13.0f);
    glEnd();

    //left side quad
    glBegin(GL_QUADS);
    glColor3ub(0, 82, 204);
    glVertex2f(-56.0f,-5.0f);
    glVertex2f(-60.0f,-4.0f);
    glVertex2f(-60.0f,-7.0f);
    glVertex2f(-56.0f,-7.0f);
    glEnd();


    //right side quad
    glBegin(GL_QUADS);

    glColor3ub(0, 82, 204);
    glVertex2f(-1.0f,-7.0f);
    glVertex2f(-5.0f,-8.0f);
    glVertex2f(-5.0f,-5.0f);
    glVertex2f(-1.0f,-4.0f);
    glEnd();

     //left engine
    glColor3ub(204, 255, 255);
    GLfloat x=-58;
	GLfloat y=-14;
	GLfloat radius =7;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount;i++) {
		glVertex2f(x + (radius * cos(i *  twicePi / lineAmount)),y + (radius* sin(i * twicePi / lineAmount)));
		}
	glEnd();

	//left middle circle engine
  glColor3ub(102.0,51.0,0.0);
    GLfloat x2=-58;
	GLfloat y2=-14;
	GLfloat radius2 =5;
	int lineAmount2 = 100;
	GLfloat twicePi2 = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount2;i++) {
		glVertex2f(x2 + (radius2 * cos(i *  twicePi2 / lineAmount2)),y2 + (radius2* sin(i * twicePi2 / lineAmount2)));
		}
	glEnd();

	//right engine
    glColor3ub(204, 255, 255);
    GLfloat x3=-2;
	GLfloat y3=-14;
	GLfloat radius3 =7;
	int lineAmount3 = 100;
	GLfloat twicePi3 = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount3;i++) {
		glVertex2f(x3 + (radius3 * cos(i *  twicePi3 / lineAmount3)),y3 + (radius3* sin(i * twicePi3 / lineAmount3)));
		}
	glEnd();

	//right middle circle engine
 glColor3ub(102.0,51.0,0.0);
    GLfloat x5=-2;
	GLfloat y5=-14;
	GLfloat radius5 =5;
	int lineAmount5 = 100;
	GLfloat twicePi5 = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount5;i++) {
		glVertex2f(x5 + (radius5 * cos(i *  twicePi5 / lineAmount5)),y5 + (radius5* sin(i * twicePi5 / lineAmount5)));
		}
	glEnd();

 //middle wheel line
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glLineWidth(1.0f);
    glVertex2f(-30.0f,-14.0f);
    glVertex2f(-30.0f,-26.0f);
    glVertex2f(-29.0f,-26.0f);
    glVertex2f(-29.0f,-14.0f);
    glEnd();


    //middle wheel
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-32.0f,-23.0f);
    glVertex2f(-32.0f,-29.0f);
    glVertex2f(-31.0f,-29.0f);
    glVertex2f(-31.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-28.0f,-23.0f);
    glVertex2f(-28.0f,-29.0f);
    glVertex2f(-27.0f,-29.0f);
    glVertex2f(-27.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
   glColor3ub(102.0,51.0,0.0);
    glVertex2f(-31.0f,-26.0f);
    glVertex2f(-31.0f,-27.0f);
    glVertex2f(-28.0f,-27.0f);
    glVertex2f(-28.0f,-26.0f);
    glEnd();

  //left wheel line
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glLineWidth(1.0f);
    glVertex2f(-49.0f,-7.0f);
    glVertex2f(-49.0f,-26.0f);
    glVertex2f(-48.0f,-26.0f);
    glVertex2f(-48.0f,-7.0f);
    glEnd();

    //left wheel
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glLineWidth(1.0f);
    glVertex2f(-51.0f,-23.0f);
    glVertex2f(-51.0f,-29.0f);
    glVertex2f(-50.0f,-29.0f);
    glVertex2f(-50.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glLineWidth(1.0f);
    glVertex2f(-47.0f,-23.0f);
    glVertex2f(-47.0f,-29.0f);
    glVertex2f(-46.0f,-29.0f);
    glVertex2f(-46.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glLineWidth(1.0f);
    glVertex2f(-50.0f,-26.0f);
    glVertex2f(-50.0f,-27.0f);
    glVertex2f(-47.0f,-27.0f);
    glVertex2f(-47.0f,-26.0f);
    glEnd();

    //left wheel line1
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-48.0f,-15.0f);
    glVertex2f(-48.0f,-16.0f);
    glVertex2f(-42.0f,-9.0f);
    glVertex2f(-42.0f,-8.0f);
    glEnd();
    //left wheel line2
    glBegin(GL_QUADS);
   glColor3ub(102.0,51.0,0.0);
    glVertex2f(-48.0f,-7.0f);
    glVertex2f(-48.0f,-8.0f);
    glVertex2f(-45.0f,-13.0f);
    glVertex2f(-45.0f,-12.0f);
    glEnd();


    //right wheel line
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glLineWidth(1.0f);
    glVertex2f(-11.0f,-7.0f);
    glVertex2f(-11.0f,-26.0f);
    glVertex2f(-10.0f,-26.0f);
    glVertex2f(-10.0f,-7.0f);
    glEnd();

    //right wheel
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);

    glVertex2f(-13.0f,-23.0f);
    glVertex2f(-13.0f,-29.0f);
    glVertex2f(-12.0f,-29.0f);
    glVertex2f(-12.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glVertex2f(-9.0f,-23.0f);
    glVertex2f(-9.0f,-29.0f);
    glVertex2f(-8.0f,-29.0f);
    glVertex2f(-8.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);

    glVertex2f(-13.0f,-26.0f);
    glVertex2f(-13.0f,-27.0f);
    glVertex2f(-9.0f,-27.0f);
    glVertex2f(-9.0f,-26.0f);
    glEnd();

    //right wheel line1
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-12.0f,-15.0f);
    glVertex2f(-12.0f,-16.0f);
    glVertex2f(-18.0f,-9.0f);
    glVertex2f(-18.0f,-8.0f);
    glEnd();
    //right wheel line2
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-12.0f,-7.0f);
    glVertex2f(-12.0f,-8.0f);
    glVertex2f(-15.0f,-13.0f);
    glVertex2f(-15.0f,-12.0f);
    glEnd();



        //circle white space
    glBegin(GL_POLYGON);
    glColor3ub(170.0f,170.0f,150.0f);
    glVertex2f(-37.0f,2.0f);
    glVertex2f(-38.0f,2.0f);
    glVertex2f(-37.0f,10.0f);
    glVertex2f(-23.0f,10.0f);
    glVertex2f(-23.0f,10.0f);
    glVertex2f(-22.0f,2.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-30.0f,10.0f);
    glVertex2f(-31.0f,2.0f);
    glEnd();


glPopMatrix();


  //building line 1
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(50.0f,-30.0f);
    glVertex2f(60.0f,-30.0f);
    glEnd();
    //building line 2
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(80.0f,-25.0f);
    glVertex2f(70.0f,-30.0f);
    glEnd();
    //inside building
    glBegin(GL_POLYGON);
    glColor3ub(178.0f,252.0f,255.0f);
    glVertex2f(58.0f,-32.0f);
    glVertex2f(58.0f,-52.0f);
    glVertex2f(52.0f,-43.0f);
    glVertex2f(52.0f,-32.0f);
    glEnd();
    //inside building line 1
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(56.0f,-32.0f);
    glVertex2f(56.0f,-49.0f);
    glEnd();
    //inside building line 2
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(54.0f,-32.0f);
    glVertex2f(54.0f,-46.0f);
    glEnd();
    //inside building line 3
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(52.0f,-38.0f);
    glVertex2f(58.0f,-42.0f);
    glEnd();
    //inside building line right
    glBegin(GL_POLYGON);
    glColor3ub(178.0f,252.0f,255.0f);
    glVertex2f(72.0f,-55.0f);
    glVertex2f(78.0f,-50.0f);
    glVertex2f(78.0f,-28.0f);
    glVertex2f(72.0f,-32.0f);
    glEnd();
    //inside building line right 1
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(74.0f,-30.0f);
    glVertex2f(74.0f,-54.0f);
    glEnd();
    //inside building line right 2
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(76.0f,-29.0f);
    glVertex2f(76.0f,-52.0f);
    glEnd();
    //inside building line right 3
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(72.0f,-43.0f);
    glVertex2f(78.0f,-38.0f);
    glEnd();


    //tower
    glBegin(GL_POLYGON);
    glColor3ub(132.0f,127.0f,121.0f);
    glVertex2f(60.0f,-70.0f);
    glVertex2f(65.0f,-71.0f);
    glVertex2f(70.0f,-70.0f);
    glVertex2f(70.0f,-30.0f);
    glVertex2f(60.0f,-30.0f);
    glEnd();
    //tower head1
    glBegin(GL_POLYGON);
    glColor3ub(194.0f,194.0f,214.0f);
    glVertex2f(60.0f,-30.0f);
    glVertex2f(70.0f,-30.0f);
    glVertex2f(80.0f,-10.0f);
    glVertex2f(50.0f,-10.0f);
    glEnd();
    //tower head2
    glBegin(GL_POLYGON);
    glColor3ub(194.0f,194.0f,214.0f);
    glVertex2f(55.0f,-10.0f);
    glVertex2f(75.0f,-10.0f);
    glVertex2f(75.0f,5.0f);
    glVertex2f(70.0f,9.0f);
    glVertex2f(60.0f,9.0f);
    glVertex2f(55.0f,5.0f);
    glEnd();
    //tower head white space
    glBegin(GL_POLYGON);
    glColor3ub(204.0f,242.0f,255.0f);
    glVertex2f(57.0f,-9.0f);
    glVertex2f(73.0f,-9.0f);
    glVertex2f(70.0f,4.0f);
    glVertex2f(60.0f,4.0f);
    glEnd();
    //tower head white space line 1
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(61.0f,-9.0f);
    glVertex2f(61.0f,4.0f);
    glEnd();
    //tower head white space line 2
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(69.0f,-9.0f);
    glVertex2f(69.0f,4.0f);
    glEnd();
    //tower head white space line 3
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(61.0f,-2.5f);
    glVertex2f(69.0f,-2.5f);
    glEnd();
    //tower head white space line 4
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(64.5f,-2.5f);
    glVertex2f(64.5f,4.0f);
    glEnd();



  //  windmil


glBegin(GL_QUADS);
    glColor3ub(0.0,0.0,0.0);
    glVertex2f(60.0f,50.0f);
    glVertex2f(57.0f,50.0f);
    glVertex2f(52.0f,10.0f);
    glVertex2f(65.0f,10.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3ub(242, 242, 242);

        glVertex3f(59, 49, 0);
        glVertex3f(79, 60, 0);
        glVertex3f(73, 70, 0);


        glVertex3f(59, 49, 0);
        glVertex3f(39, 60, 0);
        glVertex3f(45, 70, 0);


        glVertex3f(59, 49, 0);
        glVertex3f(39, 38, 0);
        glVertex3f(45, 28, 0);

        glVertex3f(59, 49, 0);
        glVertex3f(79, 38, 0);
        glVertex3f(73, 28, 0);



glEnd();





        glFlush();
}

///Night view




void display3()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    ///circle
    glLineWidth(5.5);

    glBegin(GL_QUADS);
    glColor3ub(0.0f,128.0f,0.0f);
    glVertex2f(100.0f,-100.0f);
    glVertex2f(100.0f,80.0f);
    glVertex2f(-100.0f,80.0f);
    glVertex2f(-100.0f,-100.0f);
    glEnd();

    ///road
    glBegin(GL_QUADS);
    glColor3ub(190.0f,190.0f,190.0f);
    glVertex2f(-40.0f,70.0f);
    glVertex2f(-90.0f,-100.0f);
    glVertex2f(38.0f,-100.0f);
    glVertex2f(-20.0f,70.0f);
    glEnd();

    ///sky
    glBegin(GL_QUADS);
    glColor3ub(20, 24, 82);
    glVertex2f(-100.0f,100.0f);
    glVertex2f(-100.0f,60.0f);
    glVertex2f(100.0f,60.0f);
    glVertex2f(100.0f,100.0f);
    glEnd();

   /// star
   glBegin(GL_POINTS);
   glColor3ub(242, 242, 242);
   glVertex3f(-55.0f, 80.0f, 0.0f);
   glVertex3f(-57.0f, 93.0f, 0.0f);
   glVertex3f(-67.0f, 87.0f, 0.0f);
   glVertex3f(-75.0f, 94.0f, 0.0f);
   glVertex3f(-45.0f, 88.0f, 0.0f);
   glVertex3f(-25.0f, 77.0f, 0.0f);
   glVertex3f(-15.0f, 80.0f, 0.0f);
   glVertex3f(55.0f, 80.0f, 0.0f);
   glVertex3f(50.0f, 84.0f, 0.0f);
   glVertex3f(45.0f, 74.0f, 0.0f);
   glVertex3f(65.0f, 90.0f, 0.0f);
   glVertex3f(30.0f, 95.0f, 0.0f);
   glVertex3f(35.0f, 87.0f, 0.0f);
   glVertex3f(25.0f, 93.0f, 0.0f);
   glEnd();
    ///Cloud



    ///sun
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++){
        glColor3ub(242, 242, 242);
        float pi=3.1416;
        float A=(i*2*pi)/100;
        float r=15;
        float x=r*cos(A)+80;
        float y=r*sin(A)+85;
        glVertex2f(x,y);
    }
    glEnd();

///Runway middle line
     glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,-70.0f);
    glVertex2f(-30.0f,-90.0f);
    glVertex2f(-28.0f,-90.0f);
    glVertex2f(-28.0f,-70.0f);
    glEnd();

///Runway middle line
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,-40.0f);
    glVertex2f(-30.0f,-60.0f);
    glVertex2f(-28.0f,-60.0f);
    glVertex2f(-28.0f,-40.0f);
    glEnd();
///Runway middle line
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,10.0f);
    glVertex2f(-30.0f,20.0f);
    glVertex2f(-28.0f,20.0f);
    glVertex2f(-28.0f,10.0f);
    glEnd();

///Runway middle line
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,50.0f);
    glVertex2f(-30.0f,57.0f);
    glVertex2f(-28.0f,57.0f);
    glVertex2f(-28.0f,50.0f);
    glEnd();

///Runway middle line
/*
    glBegin(GL_QUADS);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(-30.0f,65.0f);
    glVertex2f(-30.0f,71.0f);
    glVertex2f(-28.0f,71.0f);
    glVertex2f(-28.0f,65.0f);
    glEnd();

*/
       glPushMatrix();
glTranslatef(0.0f,position, 0.0f);

     glBegin(GL_POLYGON);
    for(int i=0;i<200;i++){
            glColor3ub(242, 242, 242);
      //  glColor3ub(102.0,51.0,0.0);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=14;
        float x=r*cos(A)-30;
        float y=r*sin(A);
        glVertex2f(x,y);
    }
    glEnd();

//left side
   glBegin(GL_QUADS);
   glColor3ub(0, 82, 204);
    glVertex2f(-41.0f,-9.0f);
    glVertex2f(-43.0f,-4.0f);
    glVertex2f(-43.9f,1.0f);
    glVertex2f(-75.0f,0.0f);
    glEnd();


    //right side
    glBegin(GL_QUADS);
    glColor3ub(0, 82, 204);
    glVertex2f(-19.0f,-9.0f);
    glVertex2f(-17.0f,-4.0f);
    glVertex2f(-16.0f,1.0f);
    glVertex2f(17.0f,0.0f);
    glEnd();

    //short left
    glBegin(GL_QUADS);
   glColor3ub(0, 82, 204);
    glVertex2f(-41.0f,9.0f);
    glVertex2f(-39.0f,11.0f);
    glVertex2f(-38.0f,11.0f);
    glVertex2f(-60.0f,13.0f);
    glEnd();
    //short middle
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 82, 204);
    glVertex2f(-31.0f,13.0f);
    glVertex2f(-29.0f,13.0f);
    glVertex2f(-30.0f,50.0f);
    glEnd();
    //short right
    glBegin(GL_QUADS);
    glColor3ub(0, 82, 204);
    glVertex2f(-19.0f,9.0f);
    glVertex2f(-21.0f,11.0f);
    glVertex2f(-11.0f,12.0f);
    glVertex2f(0.0f,13.0f);
    glEnd();

    //left side quad
    glBegin(GL_QUADS);
    glColor3ub(0, 82, 204);
    glVertex2f(-56.0f,-5.0f);
    glVertex2f(-60.0f,-4.0f);
    glVertex2f(-60.0f,-7.0f);
    glVertex2f(-56.0f,-7.0f);
    glEnd();


    //right side quad
    glBegin(GL_QUADS);

    glColor3ub(0, 82, 204);
    glVertex2f(-1.0f,-7.0f);
    glVertex2f(-5.0f,-8.0f);
    glVertex2f(-5.0f,-5.0f);
    glVertex2f(-1.0f,-4.0f);
    glEnd();

     //left engine
    glColor3ub(204, 255, 255);
    GLfloat x=-58;
	GLfloat y=-14;
	GLfloat radius =7;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount;i++) {
		glVertex2f(x + (radius * cos(i *  twicePi / lineAmount)),y + (radius* sin(i * twicePi / lineAmount)));
		}
	glEnd();

	//left middle circle engine
  glColor3ub(102.0,51.0,0.0);
    GLfloat x2=-58;
	GLfloat y2=-14;
	GLfloat radius2 =5;
	int lineAmount2 = 100;
	GLfloat twicePi2 = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount2;i++) {
		glVertex2f(x2 + (radius2 * cos(i *  twicePi2 / lineAmount2)),y2 + (radius2* sin(i * twicePi2 / lineAmount2)));
		}
	glEnd();

	//right engine
    glColor3ub(204, 255, 255);
    GLfloat x3=-2;
	GLfloat y3=-14;
	GLfloat radius3 =7;
	int lineAmount3 = 100;
	GLfloat twicePi3 = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount3;i++) {
		glVertex2f(x3 + (radius3 * cos(i *  twicePi3 / lineAmount3)),y3 + (radius3* sin(i * twicePi3 / lineAmount3)));
		}
	glEnd();

	//right middle circle engine
 glColor3ub(102.0,51.0,0.0);
    GLfloat x5=-2;
	GLfloat y5=-14;
	GLfloat radius5 =5;
	int lineAmount5 = 100;
	GLfloat twicePi5 = 2.0f * PI;
	glLineWidth(0.1);
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i <= lineAmount5;i++) {
		glVertex2f(x5 + (radius5 * cos(i *  twicePi5 / lineAmount5)),y5 + (radius5* sin(i * twicePi5 / lineAmount5)));
		}
	glEnd();

 //middle wheel line
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glLineWidth(1.0f);
    glVertex2f(-30.0f,-14.0f);
    glVertex2f(-30.0f,-26.0f);
    glVertex2f(-29.0f,-26.0f);
    glVertex2f(-29.0f,-14.0f);
    glEnd();


    //middle wheel
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-32.0f,-23.0f);
    glVertex2f(-32.0f,-29.0f);
    glVertex2f(-31.0f,-29.0f);
    glVertex2f(-31.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-28.0f,-23.0f);
    glVertex2f(-28.0f,-29.0f);
    glVertex2f(-27.0f,-29.0f);
    glVertex2f(-27.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
   glColor3ub(102.0,51.0,0.0);
    glVertex2f(-31.0f,-26.0f);
    glVertex2f(-31.0f,-27.0f);
    glVertex2f(-28.0f,-27.0f);
    glVertex2f(-28.0f,-26.0f);
    glEnd();

  //left wheel line
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glLineWidth(1.0f);
    glVertex2f(-49.0f,-7.0f);
    glVertex2f(-49.0f,-26.0f);
    glVertex2f(-48.0f,-26.0f);
    glVertex2f(-48.0f,-7.0f);
    glEnd();

    //left wheel
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glLineWidth(1.0f);
    glVertex2f(-51.0f,-23.0f);
    glVertex2f(-51.0f,-29.0f);
    glVertex2f(-50.0f,-29.0f);
    glVertex2f(-50.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glLineWidth(1.0f);
    glVertex2f(-47.0f,-23.0f);
    glVertex2f(-47.0f,-29.0f);
    glVertex2f(-46.0f,-29.0f);
    glVertex2f(-46.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glLineWidth(1.0f);
    glVertex2f(-50.0f,-26.0f);
    glVertex2f(-50.0f,-27.0f);
    glVertex2f(-47.0f,-27.0f);
    glVertex2f(-47.0f,-26.0f);
    glEnd();

    //left wheel line1
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-48.0f,-15.0f);
    glVertex2f(-48.0f,-16.0f);
    glVertex2f(-42.0f,-9.0f);
    glVertex2f(-42.0f,-8.0f);
    glEnd();
    //left wheel line2
    glBegin(GL_QUADS);
   glColor3ub(102.0,51.0,0.0);
    glVertex2f(-48.0f,-7.0f);
    glVertex2f(-48.0f,-8.0f);
    glVertex2f(-45.0f,-13.0f);
    glVertex2f(-45.0f,-12.0f);
    glEnd();


    //right wheel line
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glLineWidth(1.0f);
    glVertex2f(-11.0f,-7.0f);
    glVertex2f(-11.0f,-26.0f);
    glVertex2f(-10.0f,-26.0f);
    glVertex2f(-10.0f,-7.0f);
    glEnd();

    //right wheel
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);

    glVertex2f(-13.0f,-23.0f);
    glVertex2f(-13.0f,-29.0f);
    glVertex2f(-12.0f,-29.0f);
    glVertex2f(-12.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);
    glVertex2f(-9.0f,-23.0f);
    glVertex2f(-9.0f,-29.0f);
    glVertex2f(-8.0f,-29.0f);
    glVertex2f(-8.0f,-23.0f);
    glEnd();
    glBegin(GL_QUADS);
     glColor3ub(242, 242, 242);

    glVertex2f(-13.0f,-26.0f);
    glVertex2f(-13.0f,-27.0f);
    glVertex2f(-9.0f,-27.0f);
    glVertex2f(-9.0f,-26.0f);
    glEnd();

    //right wheel line1
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-12.0f,-15.0f);
    glVertex2f(-12.0f,-16.0f);
    glVertex2f(-18.0f,-9.0f);
    glVertex2f(-18.0f,-8.0f);
    glEnd();
    //right wheel line2
    glBegin(GL_QUADS);
    glColor3ub(102.0,51.0,0.0);
    glVertex2f(-12.0f,-7.0f);
    glVertex2f(-12.0f,-8.0f);
    glVertex2f(-15.0f,-13.0f);
    glVertex2f(-15.0f,-12.0f);
    glEnd();



        //circle white space
    glBegin(GL_POLYGON);
    glColor3ub(170.0f,170.0f,150.0f);
    glVertex2f(-37.0f,2.0f);
    glVertex2f(-38.0f,2.0f);
    glVertex2f(-37.0f,10.0f);
    glVertex2f(-23.0f,10.0f);
    glVertex2f(-23.0f,10.0f);
    glVertex2f(-22.0f,2.0f);
    glEnd();

     glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(-30.0f,10.0f);
    glVertex2f(-31.0f,2.0f);
    glEnd();


glPopMatrix();


  //building line 1
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(50.0f,-30.0f);
    glVertex2f(60.0f,-30.0f);
    glEnd();
    //building line 2
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(80.0f,-25.0f);
    glVertex2f(70.0f,-30.0f);
    glEnd();
    //inside building
    glBegin(GL_POLYGON);
    glColor3ub(178.0f,252.0f,255.0f);
    glVertex2f(58.0f,-32.0f);
    glVertex2f(58.0f,-52.0f);
    glVertex2f(52.0f,-43.0f);
    glVertex2f(52.0f,-32.0f);
    glEnd();
    //inside building line 1
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(56.0f,-32.0f);
    glVertex2f(56.0f,-49.0f);
    glEnd();
    //inside building line 2
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(54.0f,-32.0f);
    glVertex2f(54.0f,-46.0f);
    glEnd();
    //inside building line 3
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(52.0f,-38.0f);
    glVertex2f(58.0f,-42.0f);
    glEnd();
    //inside building line right
    glBegin(GL_POLYGON);
    glColor3ub(178.0f,252.0f,255.0f);
    glVertex2f(72.0f,-55.0f);
    glVertex2f(78.0f,-50.0f);
    glVertex2f(78.0f,-28.0f);
    glVertex2f(72.0f,-32.0f);
    glEnd();
    //inside building line right 1
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(74.0f,-30.0f);
    glVertex2f(74.0f,-54.0f);
    glEnd();
    //inside building line right 2
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(76.0f,-29.0f);
    glVertex2f(76.0f,-52.0f);
    glEnd();
    //inside building line right 3
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(72.0f,-43.0f);
    glVertex2f(78.0f,-38.0f);
    glEnd();


    //tower
    glBegin(GL_POLYGON);
    glColor3ub(132.0f,127.0f,121.0f);
    glVertex2f(60.0f,-70.0f);
    glVertex2f(65.0f,-71.0f);
    glVertex2f(70.0f,-70.0f);
    glVertex2f(70.0f,-30.0f);
    glVertex2f(60.0f,-30.0f);
    glEnd();
    //tower head1
    glBegin(GL_POLYGON);
    glColor3ub(194.0f,194.0f,214.0f);
    glVertex2f(60.0f,-30.0f);
    glVertex2f(70.0f,-30.0f);
    glVertex2f(80.0f,-10.0f);
    glVertex2f(50.0f,-10.0f);
    glEnd();

    //tower head2
    glBegin(GL_POLYGON);
    glColor3ub(194.0f,194.0f,214.0f);
    glVertex2f(55.0f,-10.0f);
    glVertex2f(75.0f,-10.0f);
    glVertex2f(75.0f,5.0f);
    glVertex2f(70.0f,9.0f);
    glVertex2f(60.0f,9.0f);
    glVertex2f(55.0f,5.0f);
    glEnd();
    //tower head white space
    glBegin(GL_POLYGON);
    glColor3ub(204.0f,242.0f,255.0f);
    glVertex2f(57.0f,-9.0f);
    glVertex2f(73.0f,-9.0f);
    glVertex2f(70.0f,4.0f);
    glVertex2f(60.0f,4.0f);
    glEnd();
    //tower head white space line 1
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(61.0f,-9.0f);
    glVertex2f(61.0f,4.0f);
    glEnd();
    //tower head white space line 2
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(69.0f,-9.0f);
    glVertex2f(69.0f,4.0f);
    glEnd();
    //tower head white space line 3
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(61.0f,-2.5f);
    glVertex2f(69.0f,-2.5f);
    glEnd();

    //tower head white space line 4
    glBegin(GL_LINES);
    glColor3f(0.0f,0.0f,0.0f);
    glVertex2f(64.5f,-2.5f);
    glVertex2f(64.5f,4.0f);
    glEnd();



  //  windmil


glBegin(GL_QUADS);
    glColor3ub(0.0,0.0,0.0);
    glVertex2f(60.0f,50.0f);
    glVertex2f(57.0f,50.0f);
    glVertex2f(52.0f,10.0f);
    glVertex2f(65.0f,10.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3ub(242, 242, 242);

        glVertex3f(59, 49, 0);
        glVertex3f(79, 60, 0);
        glVertex3f(73, 70, 0);


        glVertex3f(59, 49, 0);
        glVertex3f(39, 60, 0);
        glVertex3f(45, 70, 0);


        glVertex3f(59, 49, 0);
        glVertex3f(39, 38, 0);
        glVertex3f(45, 28, 0);

        glVertex3f(59, 49, 0);
        glVertex3f(79, 38, 0);
        glVertex3f(73, 28, 0);



glEnd();



        glFlush();
}







///Sound

///Wind sound(Day)
void sound()
{

    PlaySound("Wind.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}
/// Airplane sound(evening)
void sound2()
{

    PlaySound("airplane.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

/// Night sound (Night)
void sound3()
{

    PlaySound("NightStorm.wav", NULL, SND_ASYNC|SND_FILENAME);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}


///manual change of View

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
glutDisplayFunc(display);
 sound();
break;
case GLUT_KEY_DOWN:
glutDisplayFunc(display1);
sound2();
break;
case GLUT_KEY_LEFT:
glutDisplayFunc(display3);
sound3();
break;
case GLUT_KEY_RIGHT:
break;}
glutPostRedisplay();
	}






int main(int argc,char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Test");
    gluOrtho2D(-100,100,-100,100);
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutSpecialFunc(SpecialInput);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update1, 0);
  // glutTimerFunc(100, update2, 0);
    sound();
    glutMainLoop();



    return 0;
}


/*
#include <windows.h>
#include <GL/glut.h>

GLfloat i = 0.0f;


void Idle()
{
    glutPostRedisplay();
}
void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

 glPushMatrix();
 glTranslatef(59, 49, 0);
 glRotatef(i,0,0.0,0.70);

    glBegin(GL_TRIANGLES);
        glColor3ub(242, 242, 242);

        glVertex3f(0, 0, 0);
        glVertex3f(79, 60, 0);
        glVertex3f(73, 70, 0);
glEnd();
     glBegin(GL_TRIANGLES);
        glColor3ub(242, 242, 242);

        glVertex3f(0, 0, 0);
        glVertex3f(39, 60, 0);
        glVertex3f(45, 70, 0);
glEnd();
      glBegin(GL_TRIANGLES);
        glColor3ub(242, 242, 242);

        glVertex3f(0, 0, 0);
        glVertex3f(39, 38, 0);
        glVertex3f(45, 28, 0);
        glEnd();

       glBegin(GL_TRIANGLES);
        glColor3ub(242, 242, 242);

        glVertex3f(59, 49, 0);
        glVertex3f(79, 38, 0);
        glVertex3f(73, 28, 0);



glEnd();

  glLoadIdentity();
  glPopMatrix();//glPopMatrix pops the top matrix off the stack
    i=i+0.10f;//i=i+.1=.2



glBegin(GL_QUADS);
    glColor3ub(0.0,0.0,0.0);
    glVertex2f(60.0f,50.0f);
    glVertex2f(57.0f,50.0f);
    glVertex2f(52.0f,10.0f);
    glVertex2f(65.0f,10.0f);
    glEnd();


         glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    gluOrtho2D(-100,100,-100,100);
    glutDisplayFunc(display);
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;

}


*/

