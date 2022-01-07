#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.14159265358979323846

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    //circle
    glLineWidth(7.5);
//background

    glBegin(GL_QUADS);
    glColor3ub(191.0f,255.0f,128.0f);
    glVertex2f(100.0f,-100.0f);
    glVertex2f(100.0f,80.0f);
    glVertex2f(-100.0f,80.0f);
    glVertex2f(-100.0f,-100.0f);
    glEnd();
//sky

    glBegin(GL_QUADS);
    glColor3ub(204.0f,221.0f,255.0f);
    glVertex2f(-100.0f,100.0f);
    glVertex2f(-100.0f,55.0f);
    glVertex2f(100.0f,55.0f);
    glVertex2f(100.0f,100.0f);
    glEnd();

//sun

    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++){
        glColor3ub(255.0f,255.0f,100.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=17;
        float x=r*cos(A)+70;
        float y=r*sin(A)+83;
        glVertex2f(x,y);
    }
    glEnd();

//main
     glBegin(GL_POLYGON);
     for(int i=0;i<200;i++){
        glColor3ub(140.0f,140.0f,140.0f);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=45;
        float x=r*cos(A)+0;
        float y=r*sin(A)+30;
        glVertex2f(x,y);
    }
    glEnd();

//base
    glBegin(GL_QUADS);
    glColor3ub(120.0f,130.0f,140.0f);
    glVertex2f(70.0f,-20.0f);
    glVertex2f(-70.0f,-20.0f);
    glVertex2f(-70.0f,-43.0f);
    glVertex2f(70.0f,-43.0f);
    glEnd();

//middle lines
    glBegin(GL_QUADS);
    glColor3ub(140.0f,140.0f,140.0f);
    glVertex2f(20.0f,-2.0f);
    glVertex2f(-20.0f,-2.0f);
    glVertex2f(-20.0f,-32.0f);
    glVertex2f(20.0f,-32.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(209.0f,219.0f,220.0f);
    glVertex2f(38.7f,53.0f);
    glVertex2f(-38.7f,53.0f);
    glVertex2f(-41.2f,48.0f);
    glVertex2f(41.2f,48.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(209.0f,219.0f,220.0f);
    glVertex2f(43.5f,42.0f);
    glVertex2f(-43.5f,42.0f);
    glVertex2f(-44.5f,37.0f);
    glVertex2f(44.5f,37.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(209.0f,219.0f,220.0f);
    glVertex2f(45.0f,31.0f);
    glVertex2f(-45.0f,31.0f);
    glVertex2f(-44.8f,26.0f);
    glVertex2f(44.8f,26.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(209.0f,219.0f,220.0f);
    glVertex2f(44.0f,20.0f);
    glVertex2f(-44.0f,20.0f);
    glVertex2f(-42.5f,15.0f);
    glVertex2f(42.5f,15.0f);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(209.0f,219.0f,220.0f);
    glVertex2f(40.0f,9.0f);
    glVertex2f(-40.0f,9.0f);
    glVertex2f(-36.5f,4.0f);
    glVertex2f(36.5f,4.0f);
    glEnd();


 glFlush();


}
int main(int argc,char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Test");
    gluOrtho2D(-100,100,-100,100);
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

