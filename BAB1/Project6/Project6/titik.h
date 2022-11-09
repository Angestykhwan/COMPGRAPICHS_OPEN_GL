#include <stdio.h>
#include <glut.h>

void titik()
{
	glPointSize(10);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POINTS);
	glVertex2i(0, 0);
	glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}
