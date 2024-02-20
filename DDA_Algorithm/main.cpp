#include<windows.h>
#include<iostream>
#include<math.h>
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

using namespace std;

int X1, Y1, X2, Y2;

void DDA(void) {

    double dx = X2 - X1, dy = Y2 - Y1, l;
    float xInc, yInc, x = X1, y = Y1;

    if (abs(dx) > abs(dy))
        l = (abs(dx));
    else
        l = (abs(dy));

    if (l == 0) {
        return;
    }

    xInc = dx / l;
    yInc = dy / l;

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);

    glVertex2d(x, y);

    for (int i = 0; i < l; i++) {
        x += xInc;
        y += yInc;
        glVertex2d(round(x), round(y));
    }
    glEnd();

    glFlush();
}

void myInit(void) {
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100.0, 700.0, -100.0, 700.0);
}

int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("Midpoint Circle");

    cout<<"Enter initial point coordinates : ";
    cin>>X1>>Y1;

    cout<<"Enter final point coordinates : ";
    cin>>X2>>Y2;

    glutDisplayFunc(DDA);
    myInit();

    glutMainLoop();

    return 0;
}
