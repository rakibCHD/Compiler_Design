#include <windows.h>
#include <GL/glut.h>
#include <iostream>

void mydisplay() {

    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);

    glVertex2i(200,700);
    glVertex2i(700,700);
    glVertex2i(700,200);
    glVertex2i(200,200);

    glColor3f(1.0, 1.0, 1.0);

    glVertex2i(400,600);
    glVertex2i(500,600);
    glVertex2i(500,300);
    glVertex2i(400,300);

    glColor3f(1.0, 1.0, 1.0);

    glVertex2i(300,500);
    glVertex2i(600,500);
    glVertex2i(600,400);
    glVertex2i(300,400);


    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2i(200,700);
    glVertex2i(200,000);
    glEnd();

    glFlush();
}

void myInit(void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,1000.0,0.0,1000.0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Flag");
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(100,150);
	glutDisplayFunc(mydisplay);
	myInit();
	glutMainLoop();
	return 0;
}


