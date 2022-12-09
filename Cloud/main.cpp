#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<windows.h>
using namespace std;

//cloud
float cloud1_position=0.0;
float cloud2_position=0.0;
float cloud3_position=0.0;





void Cloud2()
{
 glMatrixMode(GL_MODELVIEW);
 glPushMatrix();
 glTranslatef(cloud2_position,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 450+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 440+r * cos(A);
		float y = 940+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 490+r * cos(A);
		float y = 950+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 510+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();

	    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 450+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x-125,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 440+r * cos(A);
		float y = 940+r * sin(A);
		glVertex2f(x-125,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 490+r * cos(A);
		float y = 950+r * sin(A);
		glVertex2f(x-125,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 510+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x-125,y );
	}
	glEnd();
	glPopMatrix();
}


void Cloud3()
{
   glMatrixMode(GL_MODELVIEW);
 glPushMatrix();
 glTranslatef(cloud3_position,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 450+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x+400,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 440+r * cos(A);
		float y = 940+r * sin(A);
		glVertex2f(x+400,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 490+r * cos(A);
		float y = 950+r * sin(A);
		glVertex2f(x+400,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 510+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x+400,y );
	}
	glEnd();
	glPopMatrix();
}




void Cloud1()
{
 glMatrixMode(GL_MODELVIEW);
 glPushMatrix();
 glTranslatef(cloud1_position,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 450+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x-350,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<350;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 440+r * cos(A);
		float y = 940+r * sin(A);
		glVertex2f(x-350,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 490+r * cos(A);
		float y = 950+r * sin(A);
		glVertex2f(x-350,y );
	}
	glEnd();

	glBegin(GL_POLYGON);
    glColor3ub(255, 255, 255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = 510+r * cos(A);
		float y = 900+r * sin(A);
		glVertex2f(x-350,y );
	}
	glEnd();

	glPopMatrix();
}


void UpdateCloud1(int value)
{
    cloud1_position += 10;
    if(cloud1_position > 1000)
    {
        cloud1_position = -200.0f;
    }

	glutPostRedisplay();

	glutTimerFunc(25, UpdateCloud1, 0);
}
void UpdateCloud2(int value)
{
    cloud2_position += 2;
    if(cloud2_position > 1000)
    {
        cloud2_position = -600.0f;
    }

	glutPostRedisplay();

	glutTimerFunc(25, UpdateCloud2, 0);
}

void UpdateCloud3(int value)
{
    cloud3_position -= 5;
    if(cloud3_position <-1000)
    {
        cloud3_position = 200.0f;
    }

	glutPostRedisplay();

	glutTimerFunc(25, UpdateCloud3, 0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);




    Cloud1();
    Cloud2();
    Cloud3();





    glFlush();
    glutSwapBuffers();

}



void init()
{
    glClearColor(0.0,1.0,1.0,1.0);
	gluOrtho2D(0,1000,0,1000);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 600);
    glutCreateWindow("project");
    glutDisplayFunc(display);
    init();
    glutTimerFunc(25, UpdateCloud1, 0);
    glutTimerFunc(25, UpdateCloud2, 0);
    glutTimerFunc(25, UpdateCloud3, 0);



    glutMainLoop();
}
