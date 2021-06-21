#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846


void display() {
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(3);

//Sky
glBegin(GL_QUADS);
glColor3ub(0,151,221);
glVertex2f(-1.0f,1.0f);
glVertex2f(-1.0f,0.0f);
glVertex2f(1.0f,0.0f);
glVertex2f(1.0f,1.0f);
glEnd();

//River
glBegin(GL_QUADS);
glColor3ub(68,187,255);
glVertex2f(-1.0f,0.0f);
glVertex2f(-1.0f,-0.4f);
glVertex2f(1.0f,-0.4f);
glVertex2f(1.0f,0.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(68,187,255);
glVertex2f(0.3f,-0.4f);
glVertex2f(0.5f,-0.7f);
glVertex2f(1.0f,-0.7f);
glVertex2f(1.0f,-0.4f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(68,187,255);
glVertex2f(0.5f,-0.7f);
glVertex2f(0.5f,-1.0f);
glVertex2f(1.0f,-1.0f);
glVertex2f(1.0f,-0.7f);
glEnd();

//Sun
int i;

  GLfloat x=0.6f; GLfloat y=0.6f; GLfloat radius =0.20f;
  int triangleAmount = 20;

  GLfloat twicePi = 2.0f * PI;

  glBegin(GL_TRIANGLE_FAN);
  glColor3ub(253, 184, 19);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++) {
      glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
          y + (radius * sin(i * twicePi / triangleAmount))
      );
    }

  glEnd();
   glBegin(GL_TRIANGLES);
   glColor3ub( 255, 0, 0);
    glColor3ub(77,38,168);
glVertex2f(0.09f,-0.02f);
glVertex2f(-0.1f,-0.02f);
glVertex2f(0.065f,-0.1f);
    glEnd();

  glBegin(GL_LINE);
glColor3ub( 255, 0, 0);
glVertex2f(0.6f,0.5f);
glVertex2f(0.6f,1.0f);
glEnd();

  //Field
glBegin(GL_POLYGON);
glColor3ub(51,102,0);
glVertex2f(-1.0f,-0.4f);
glVertex2f(-1.0f,-1.0f);
glVertex2f(0.5f,-1.0f);
glVertex2f(0.5f,-0.7f);
glVertex2f(0.3f,-0.4f);
glEnd();

//House

glBegin(GL_QUADS);
glColor3ub(83,54,153);
glVertex2f(-0.7f,0.3f);
glVertex2f(-0.9f,0.0f);
glVertex2f(0.1f,0.0f);
glVertex2f(-0.1f,0.3f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(77,38,168);
glVertex2f(-0.85f,0.0f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.05f,0.0f);
glEnd();



glBegin(GL_QUADS);
glColor3ub(102,0,250);
glVertex2f(-0.3f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub( 255, 0, 0);
glVertex2f(-0.4f,-0.5f);
glVertex2f(-0.4f,-0.2f);
glEnd();


glScalef(.5,.5,0);
glTranslatef(1.5,0.0,0.0);

glBegin(GL_QUADS);
glColor3ub(83,54,153);
glVertex2f(-0.7f,0.3f);
glVertex2f(-0.9f,0.0f);
glVertex2f(0.1f,0.0f);
glVertex2f(-0.1f,0.3f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(77,38,168);
glVertex2f(-0.85f,0.0f);
glVertex2f(-0.85f,-0.5f);
glVertex2f(0.05f,-0.5f);
glVertex2f(0.05f,0.0f);
glEnd();



glBegin(GL_QUADS);
glColor3ub(102,0,250);
glVertex2f(-0.3f,-0.2f);
glVertex2f(-0.5f,-0.2f);
glVertex2f(-0.5f,-0.5f);
glVertex2f(-0.3f,-0.5f);
glEnd();

glBegin(GL_LINES);
glColor3ub( 255, 0, 0);
glVertex2f(-0.4f,-0.5f);
glVertex2f(-0.4f,-0.2f);
glEnd();
//







  glFlush();
}


int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutCreateWindow("Test");
  glutInitWindowSize(620, 620);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
