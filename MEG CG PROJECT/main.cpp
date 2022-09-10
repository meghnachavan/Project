#include<windows.h>
#include<GL/glu.h>
#include<GL/glut.h>

GLfloat T=0,a=0;
GLfloat Cx=0,Cy=0,Cz=3;
int win;

void Spin()
{
    T=T+0.0;
    if(T>360)
        T=0;
    glutPostRedisplay();
}

void Stop()
{
    T=T+1000;
    if(T>360)
        T=0;
    glutPostRedisplay();
}

void close()
{
    glutDestroyWindow(win);
}
void Draw()
{
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    gluLookAt(Cx,Cy,Cz,0,0,0,0,1,0);
    glRotatef(T,-1,1,0);



    //HEAD//
    glPushMatrix();
        glColor3f(1,1,0);
         glTranslated(0.10,0.9,0.6);
         glutSolidSphere(0.17,10,10);
        glPopMatrix();


    //BODY//
    glPushMatrix();
        glColor3f(1,1,0);
         glTranslated(0.10,0.5,0.6);
         glutSolidSphere(0.25,10,10);
        glPopMatrix();


    //EYE2//
    glPushMatrix();
        glColor3f(0.3,0,0);
         glTranslated(0.18,0.899,0.72);
         glScalef(-0.9,-0.9,0.72);
         glutSolidSphere(0.05,10,10);
        glPopMatrix();


    //EYE1//
    glPushMatrix();
        glColor3f(0.3,0,0);
         glTranslated(0.017,0.899,0.72);
         glScalef(-0.9,-0.9,0.72);
         glutSolidSphere(0.05,10,10);
        glPopMatrix();

    //EYE s2//
    glPushMatrix();
        glColor3f(1,1,1);
         glTranslated(0.19,0.89,0.75);
         glScalef(-0.9,-0.9,0.72);
         glutSolidSphere(0.02,10,10);
        glPopMatrix();


    //EYE s1//
    glPushMatrix();
        glColor3f(1,1,1);
         glTranslated(0.018,0.89,0.75);
         glScalef(-0.9,-0.9,0.72);
         glutSolidSphere(0.02,10,10);
        glPopMatrix();

    //p//
    glPushMatrix();
        glColor3f(1,0,0);
         glTranslated(0.016,0.82,0.60);
         glutSolidSphere(0.065,10,10);
        glPopMatrix();

    //p//
    glPushMatrix();
        glColor3f(1,0,0);
         glTranslated(0.18,0.82,0.62);
         glutSolidSphere(0.065,10,10);
        glPopMatrix();

    //nose
    glPushMatrix();
        glColor3f(0.3,0,0);
         glTranslated(0.1,0.85,0.74);
         glutSolidSphere(0.03,10,10);
        glPopMatrix();

    //m
    glPushMatrix();
        glColor3f(1,0,0);
         glTranslatef(0.1,0.81,0.715);
         glScalef(1.3,0.5,0.5);
         glutSolidSphere(0.05,10,10);
        glPopMatrix();


    //e1//
    glPushMatrix();
        glColor3f(1,1,0);
         glTranslatef(0.19,1.1,0.61);
         glScalef(0.5,0.99,0.5);
         glutSolidSphere(0.12,10,10);
        glPopMatrix();


    //e s1//
    glPushMatrix();
        glColor3f(1,0.7,0);
         glTranslatef(0.19,1.07,0.64);
         glScalef(0.5,0.99,0.5);
         glutSolidSphere(0.08,10,10);
        glPopMatrix();


     //e2//
    glPushMatrix();
        glColor3f(1,1,0);
         glTranslatef(-0.017,1.1,0.62);
         glScalef(0.5,0.99,0.5);
         glutSolidSphere(0.12,10,10);
        glPopMatrix();


    //e s2//
    glPushMatrix();
        glColor3f(1,0.7,0);
         glTranslatef(-0.017,1.08,0.64);
         glScalef(0.5,0.99,0.5);
         glutSolidSphere(0.09,10,10);
        glPopMatrix();


    //l1//
    glPushMatrix();
        glColor3f(1,0.9,0);
         glTranslatef(-0.017,0.25,0.65);
         glScalef(0.5,0.39,0.97);
         glutSolidSphere(0.12,10,10);
        glPopMatrix();


    //l2//
    glPushMatrix();
    //glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
        glColor3f(1,0.9,0);
         glTranslatef(0.19,0.25,0.65);
         glScalef(0.5,0.39,0.97);
         glutSolidSphere(0.12,10,10);
        glPopMatrix();


    //hand1//
    glPushMatrix();
    //glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
        glColor3f(1,0.9,0);
         glTranslatef(0.25,0.65,0.63);
         glScalef(1.3,0.5,0.5);
         glutSolidSphere(0.12,10,10);
        glPopMatrix();

    //hand2//
    glPushMatrix();
    //glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
        glColor3f(1,0.9,0);
         glTranslatef(-0.05,0.65,0.63);
         glScalef(1.3,0.5,0.5);
         glutSolidSphere(0.12,10,10);
        glPopMatrix();

    //t
    glPushMatrix();
    //glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M1);
        glColor3f(1,1,0);
         glTranslatef(0.1,0.39,0.38);
         glScalef(0.5,0.39,0.97);
         glutSolidSphere(0.12,10,10);
        glPopMatrix();

    glPushMatrix();
    //glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,M5);
        glColor3f(1,0.9,0);
         glTranslatef(0.1,0.39,0.25);
         glutSolidSphere(0.065,10,10);
        glPopMatrix();


    glutSwapBuffers();
}

void Key(unsigned char ch,int x,int y)
{
    switch(ch)
    {
        case 'x' : Cx = Cx - 0.5;   break;
        case 'X' : Cx = Cx + 0.5;   break;

        case 'y' : Cy = Cy - 0.5;   break;
        case 'Y' : Cy = Cy + 0.5;   break;

        case 'z' : Cz = Cz - 0.5;   break;
        case 'Z' : Cz = Cz + 0.5;   break;

        case 'M' :glutIdleFunc(Spin); break;
        case 'm' :glutIdleFunc(Spin); break;

        case 'D' :glutIdleFunc(Stop); break;
        case 'd' :glutIdleFunc(Stop); break;

        case 'F' :glutIdleFunc(close); break;
        case 'f' :glutIdleFunc(close); break;

    }
}



void MyInit()
{
    glEnable(GL_DEPTH_TEST);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1,1,-1,1,2,10);
    glMatrixMode(GL_MODELVIEW);

}

int main(int argC,char *argv[])
{
    glutInit(&argC,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(600,600);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    win = glutCreateWindow("PIKACHU") ;
    MyInit();
    glutDisplayFunc(Draw);
    glutIdleFunc(Spin);
    glutKeyboardFunc(Key);
    glutMainLoop();
    return 0;
}
