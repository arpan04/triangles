#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

void init()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-320,320,-240,240);
}
void tria1()
{
    glColor3f(1.0,1.0,1.0);
   glBegin(GL_TRIANGLES);
    glVertex2d(0, 0);
    glVertex2d(100, 0);
    glVertex2d(50,70);
     glEnd();
}
void tria2(int x1,int y1,int x2,int y2,int x3,int y3)
{
   glBegin(GL_TRIANGLES);
   glColor3f(1.0,0.0,0.0);
    glVertex2d(x1, y1);
    glVertex2d(x2, y2);
    glVertex2d(x3,y3);
     glEnd();
}
void tria3(int x1,int y1,int x2,int y2,int x3,int y3)
{
   glBegin(GL_TRIANGLES);
   glColor3f(0.0,0.0,1.0);
    glVertex2d(x1, y1);
    glVertex2d(x2, y2);
    glVertex2d(x3,y3);
     glEnd();
}
void tria4(int x1,int y1,int x2,int y2,int x3,int y3)
{
   glBegin(GL_TRIANGLES);
   glColor3f(0.0,1.0,0.0);
    glVertex2d(x1, y1);
    glVertex2d(x2, y2);
    glVertex2d(x3,y3);
     glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    tria1();
    tria2(50,70,25,110,75,110);
    tria2(0,0,-50,0,-25,-40);
    tria2(125,-40,150,0,100,0);
    tria3(150,0,180,0,165,20);
    tria3(125,-40,140,-60,110,-60);
    tria3(-25,-40,-10,-60,-40,-60);
    tria3(-80,0,-50,0,-65,20);
    tria3(75,110,105,110,90,130);
    tria3(25,110,-5,110,10,130);
    tria4(10,130,15,140,5,140);
    tria4(-5,110,-15,110,-10,100);
    tria4(90,130,95,140,85,140);
    tria4(165,20,160,30,170,30);
    tria4(180,0,190,0,185,-10);
    tria4(110,-60,100,-60,105,-70);
    tria4(140,-60,145,-70,150,-60);
    tria4(-40,-60,-50,-60,-45,-70);
    tria4(-10,-60,-5,-70,0,-60);
    tria4(-80,0,-90,0,-85,-10);
    tria4(-65,20,-70,30,-60,30);
    tria4(105,110,115,110,110,100);

    glEnd();
    glFlush();
}
int main(int argc,char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(640,0);
    glutCreateWindow("Arpan");
    glutDisplayFunc(display);
   
    init();
   
    glutMainLoop();
    return 0;
}
