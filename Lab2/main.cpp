#include <windows.h>
#include <GL/glut.h>
#include <iostream>

void mydisplay() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);

    glVertex2i(100,430);
    glVertex2i(400,430);
    glVertex2i(400,380);
    glVertex2i(100,380);

    glColor3f(1.0, 0.0, 0.0);

    glVertex2i(100,380);
    glVertex2i(400,380);
    glVertex2i(400,330);
    glVertex2i(100,330);

    glColor3ub(255,215,0);

    glVertex2i(100,330);
    glVertex2i(400,330);
    glVertex2i(400,280);
    glVertex2i(100,280);

    glEnd();

    glBegin(GL_LINES);
        glColor3f(0.0, 0.0, 0.0);
        glVertex2f(100,430);
        glVertex2f(100,50);

    glEnd();

        glColor3f(0.0, 0.0, 0.0);
        glRasterPos2f(200,250);
          char *string ="Germany";
          while(*string)
          {
              glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *string++);
          }


    glFlush();
}

void myInit(void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Flag");
	glutInitWindowSize(640,480);
	glutInitWindowPosition(100,150);
	glutDisplayFunc(mydisplay);
	myInit();
	glutMainLoop();
	return 0;
}


