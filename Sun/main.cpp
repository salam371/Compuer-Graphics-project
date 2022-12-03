#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
#include<math.h>


float x,y,i;
float PI=3.1416;

void circle(void)
{
    float x, y;
    int i;
    GLfloat radius;
    int triangleAmount =40;
    GLfloat twicePi = 2.0 * PI;



        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 165, 0);
        x=0; y=0; radius =15;




        twicePi = 2.0 * PI;



        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }



    glEnd();



 glutSwapBuffers();
}

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);

    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 25.0, -1.0, 1.0);
}

int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
glutInitWindowSize(750,550);
glutCreateWindow("Circle");
glutDisplayFunc(circle);
init ();
glutMainLoop();
return 0;
}
