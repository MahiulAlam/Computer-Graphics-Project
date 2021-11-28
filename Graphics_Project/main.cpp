#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>
#include <cstring>
#define PI  3.14159265358979323846



using namespace std;
GLfloat position = 0.0f;
GLfloat speed = 0.0f;

GLfloat x= 0.0;
GLfloat y = 0.0;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.005f;

float car1_speed = 0.0f;
float car2_speed = 0.0f;

GLfloat boat_speed = 0.1f;
GLfloat boat2_speed = 0.1f;
GLfloat boat3_speed = 0.2f;

float rcl1 = 0.0f;
float rcl2 = 0.0f;
float rcl3 = 0.0f;
float rcl4 = 0.0f;
float rcl5 = 0.0f;
float rcl6 = 0.0f;
float _rain = 0.0;

GLfloat spin = 0.0;
GLfloat ax=0,bx=0,cx=0,dx=0,str=500.0,mn=500.0;





float birdS=0.0f;
float birdS2=0.0f;
float birdS3=0.0f;


float cld4=0.0f;
float cld5=0.0f;
float cld6=0.0f;
float cld7=0.0f;
float cld8=0.0f;
float cld9=0.0f;
float cld10=0.0f;
float cld11=0.0f;

float rain_translate = 0.00f;


bool rainday = false;



void init()
{
glClearColor(0.0,0.5,0.8,1.0);
glColor3f(0.0,0.0,0.5);
glPointSize(4.0);
gluOrtho2D(0.0,1000.0,0.0,1000.0);
}

void circle(int R)
{


glPushMatrix();
glTranslatef(320,650,0);
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=R;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();

}
void circle2(int RR)
{


glPushMatrix();
glTranslatef(320,650,0);
    glBegin(GL_POLYGON);
    glColor3ub(220, 220, 220);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=RR;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();

}

///*** Cloud_Model***///
void cloud_model_one(){

    ///Top_Left

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(340, 225, 0);
    circle(16);
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(360,210,0);
    circle(16);
    glPopMatrix();


    ///middle_Fill
    glPushMatrix();
    glTranslatef(355,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(350,210,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(345,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(340,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(335,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(330,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(325,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(315,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(310,204,0);
    circle(10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(305,204,0);
    circle(10);
    glPopMatrix();


}

void cloud_model_two(){


  //  glColor3f(1.25, 0.924, 0.930);

    ///Top_Left

    glPushMatrix();
    glTranslatef(120,210,0);
    circle(16);
    glPopMatrix();

    ///Top

    glPushMatrix();
    glTranslatef(140, 225, 0);
    circle(17 );
    glPopMatrix();

    ///Right

    glPushMatrix();
    glTranslatef(160,210,0);
    circle(17);
    glPopMatrix();


    ///middle_Fill
    glPushMatrix();
    glTranslatef(155,210,0);
    circle(19);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(150,210,0);
    circle(18);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(145,204,0);
    circle(11);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(140,204,0);
    circle(22);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(135,204,0);
    circle(16);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(130,204,0);
    circle(14);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(125,204,0);
    circle(14);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(120,204,0);
    circle(14);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(115,204,0);
    circle(14);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(110,204,0);
    circle(14);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(105,204,0);
    circle(14);
    glPopMatrix();


}

void cloud_model_Three(){

    ///Left_Part
    glPushMatrix();
    glTranslatef(300,200,0);
    circle(15);
    glPopMatrix();

    ///Top_Left

    glPushMatrix();
    glTranslatef(320,210,0);
    circle(15);
    glPopMatrix();

    ///Top
    glPushMatrix();
    glTranslatef(340,220,0);
    circle(16);
    glPopMatrix();

    ///Top_Right
    glPushMatrix();
    glTranslatef(360,210,0);
    circle(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glTranslatef(380,200,0);
    circle(15);
    glPopMatrix();

    ///Bottom_Right
    glPushMatrix();
    glTranslatef(360,190,0);
    circle(20);
    glPopMatrix();

    ///Bottom_Left
    glPushMatrix();
    glTranslatef(320,190,0);
    circle(20);
    glPopMatrix();

    ///Bottom
    glPushMatrix();
    glTranslatef(340,190,0);
    circle(20);
    glPopMatrix();


}

void cloud4()
{
    glPushMatrix();
    glTranslatef(-cld4, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-110,20,0);
    cloud_model_one();
    glPopMatrix();
    glPopMatrix();

}


void cloud5()
{
    glPushMatrix();
    glTranslatef(-cld5, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(140,-80,0);
    cloud_model_one();
    glPopMatrix();
    glPopMatrix();
}

void cloud6()
{
    glPushMatrix();
    glTranslatef(-cld6, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(40,125,0);
    cloud_model_Three();
    glPopMatrix();
     glPopMatrix();
}

void cloud7()
{
    glPushMatrix();
    glTranslatef(-cld7, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-100,60,0);
    cloud_model_two();
    glPopMatrix();
    glPopMatrix();
}

void cloud8()
{
    glPushMatrix();
    glTranslatef(-cld8, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(270,0,0);
    cloud_model_Three();
    glPopMatrix();
    glPopMatrix();

}

void cloud_model_r()
{

///Left_Part
    glPushMatrix();
    glColor3b(76, 73, 73);
    glTranslatef(300,200,0);
    circle2(15);
    glPopMatrix();

    ///Top_Left

    glPushMatrix();
    glColor3b(76, 73, 73);
    glTranslatef(320,210,0);
    circle2(15);
    glPopMatrix();

    ///Top
    glPushMatrix();
    glColor3b(76, 73, 73);
    glTranslatef(340,220,0);
    circle2(16);
    glPopMatrix();

    ///Top_Right
    glPushMatrix();
    glColor3b(76, 73, 73);
    glTranslatef(360,210,0);
    circle2(15);
    glPopMatrix();

    ///Right_Part
    glPushMatrix();
    glColor3b(76, 73, 73);
    glTranslatef(380,200,0);
    circle2(15);
    glPopMatrix();

    ///Bottom_Right
    glPushMatrix();
    glColor3b(76, 73, 73);
    glTranslatef(360,190,0);
    circle2(20);
    glPopMatrix();

    ///Bottom_Left
    glPushMatrix();
    glColor3b(76, 73, 73);
    glTranslatef(320,190,0);
    circle2(20);
    glPopMatrix();

    ///Bottom
    glPushMatrix();
    glColor3b(76, 73, 73);
    glTranslatef(340,190,0);
    circle2(20);
    glPopMatrix();


}

void Rainycloudone()
{
  glColor3b(76, 73, 73);
  glPushMatrix();
  glTranslatef(-cld9, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(270,0,0);
    cloud_model_r();
    glPopMatrix();
    glPopMatrix();

}

void Rainycloudtwo()
{
  glColor3b(76, 73, 73);
  glPushMatrix();
  glTranslatef(-cld10, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-310,-60,0);
    cloud_model_r();
    glPopMatrix();
    glPopMatrix();

}

void Rainycloudthree()
{
 glColor3b(76, 73, 73);
 glPushMatrix();
 glTranslatef(-cld11, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-70,130,0);
    cloud_model_r();
    glPopMatrix();
    glPopMatrix();

}



void sky()
{

    glBegin(GL_QUADS);
    //glColor3ub(153,255,204);
    glColor3ub(102,178,255);
    glVertex2i(0,550);
    glVertex2i(1000,550);
    glVertex2i(1000,1000);
    glVertex2i(0,1000);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214,234,248);
    glVertex2i(0,650);
    glVertex2i(1000,640);
    glVertex2i(1000,690);
    glVertex2i(0,720);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(214,234,248);
    glVertex2i(0,850);
    glVertex2i(1000,800);
    glVertex2i(1000,820);
    glVertex2i(0,905);
    glEnd();

}

void R_sky()
{
glBegin(GL_QUADS);
glColor3ub(111,119,124);
    glVertex2i(0,550);
    glVertex2i(1000,550);
    glVertex2i(1000,1000);
    glVertex2i(0,1000);
    glEnd();
glBegin(GL_QUADS);
glColor3ub(111,119,124);
    glVertex2i(0,650);
    glVertex2i(1000,640);
    glVertex2i(1000,690);
    glVertex2i(0,720);
    glEnd();
}

void DrawCircle(float cx,float cy,float r ,int num_segment)
{
glBegin(GL_POLYGON);
for(int k=0; k<num_segment;k++)
{  float theta =2.0f*3.1416f*float(k)/float(num_segment);
   float x=r*cosf(theta);
    float y=r*sinf(theta);
    glVertex2f(x+cx ,y+cy);
}
  glEnd();
}



/////////////birds starts////////////
void Birds()
{
    ///bird 1

glPushMatrix();
glTranslatef(-birdS, 0.0, 0.0);

     glBegin(GL_POLYGON);
    glColor3ub(0,1,1);
    glVertex2f(170,885);
    glVertex2f(174,895);
    glVertex2f(180,890);
    glVertex2f(184,899);
    glVertex2f(184,889);
    glVertex2f(188,895);
    glVertex2f(184,887);
    glVertex2f(190,887);
    glVertex2f(186,883);
    glVertex2f(180,882);
    glEnd();
glPopMatrix();
    ///bird 2
    glPushMatrix();
glTranslatef(-birdS2, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(160,870);
    glVertex2f(164,880);
    glVertex2f(170,875);
    glVertex2f(174,884);
    glVertex2f(174,874);
    glVertex2f(178,880);
    glVertex2f(174,882);
    glVertex2f(180,882);
    glVertex2f(176,878);
    glVertex2f(170,877);
    glEnd();
glPopMatrix();
    ///bird 3
    glPushMatrix();
glTranslatef(-birdS3, 0.0, 0.0);
        glBegin(GL_POLYGON);
    glColor3ub(1,128,1);
    glVertex2f(185,860);
    glVertex2f(189,870);
    glVertex2f(195,865);
    glVertex2f(199,874);
    glVertex2f(199,864);
    glVertex2f(203,870);
    glVertex2f(199,872);
    glVertex2f(205,872);
    glVertex2f(201,868);
    glVertex2f(195,867);
    glEnd();
    glPopMatrix();

glPopMatrix();
}




///Day Night Hill

void Hill()
{
    glPushMatrix();

  glColor3ub(51, 153, 51);


   glBegin(GL_TRIANGLES);
 glVertex2i(48,850);
  glVertex2i(-135,500);
    glVertex2i(100,500);
  glEnd();
 DrawCircle(79,847,31,1000);//
  glBegin(GL_TRIANGLES);
 glVertex2i(47,848);
  glVertex2i(110,848);
    glVertex2i(90,500);
  glEnd();
   glBegin(GL_TRIANGLES);
 glVertex2i(110,848);
  glVertex2i(70,400);
    glVertex2i(280,400);
  glEnd();

   glBegin(GL_TRIANGLES);
 glVertex2i(230,758);
  glVertex2i(90,500);
    glVertex2i(250,500);
  glEnd();

glBegin(GL_TRIANGLES);
 glVertex2i(240,500);
  glVertex2i(390,500);
    glVertex2i(277,755);
  glEnd();

  glBegin(GL_TRIANGLES);
 glVertex2i(230,758);
  glVertex2i(277,758);
    glVertex2i(250,500);
  glEnd();
   DrawCircle(252.5,755,23,1000);//


  glPopMatrix();


}

/// Rainy Hill

void R_hill()
{
    glPushMatrix();

  glColor3ub(0, 77, 0);



   glBegin(GL_TRIANGLES);
 glVertex2i(48,850);
  glVertex2i(-135,500);
    glVertex2i(100,500);
  glEnd();
 DrawCircle(79,847,31,1000);//
  glBegin(GL_TRIANGLES);
 glVertex2i(47,848);
  glVertex2i(110,848);
    glVertex2i(90,500);
  glEnd();
   glBegin(GL_TRIANGLES);
 glVertex2i(110,848);
  glVertex2i(70,400);
    glVertex2i(280,400);
  glEnd();

   glBegin(GL_TRIANGLES);
 glVertex2i(230,758);
  glVertex2i(90,500);
    glVertex2i(250,500);
  glEnd();

glBegin(GL_TRIANGLES);
 glVertex2i(240,500);
  glVertex2i(390,500);
    glVertex2i(277,755);
  glEnd();

  glBegin(GL_TRIANGLES);
 glVertex2i(230,758);
  glVertex2i(277,758);
    glVertex2i(250,500);
  glEnd();
   DrawCircle(252.5,755,23,1000);//


}


void sun()
{
    glPushMatrix();
    glTranslatef(380,800, 0);

    glBegin(GL_POLYGON);
    glColor3ub(249,215,28);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=45;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
   glEnd();
   glPopMatrix();
}



void Sriti_shoudh()
{

glColor3f(0.55,0.55,0.55) ;     //6th
         glBegin(GL_POLYGON);

           glVertex2i(600, 480);
           glVertex2i (660, 535);
           glVertex2i (720, 480);

     glEnd();

          glColor3f(0.65, 0.65, 0.65) ;   //5th
          glBegin(GL_POLYGON);

           glVertex2i(610, 480);
           glVertex2i (660, 560);
           glVertex2i (710, 480);

     glEnd();

         glColor3f(0.62, 0.62, 0.62) ;   //4rth
         glBegin(GL_POLYGON);

           glVertex2i(620, 480);
           glVertex2i (660, 565);
           glVertex2i (700, 480);
           glEnd();

           glColor3f(0.67, 0.67, 0.67) ;   //3rd
           glBegin(GL_POLYGON);

           glVertex2i(630, 480);
           glVertex2i (660, 580);
           glVertex2i (690, 480);



     glColor3f(0.65, 0.65, 0.65) ;     //2nd
         glBegin(GL_POLYGON);

           glVertex2i(640, 480);
           glVertex2i (660, 580);
           glVertex2i (680, 480);

     glEnd();

         glColor3f(0.62, 0.62, 0.65) ;
         glBegin(GL_POLYGON);

           glVertex2i(645, 485);
           glVertex2i (660, 595);
           glVertex2i (670, 485);


     glEnd();
          glColor3f(0.60, 0.60, 0.60) ;  //middle
         glBegin(GL_POLYGON);

           glVertex2i(660, 485);
           glVertex2i (660, 630);
           glVertex2i (670, 485);

     glEnd();

     glColor3f(0.5, 0.3, 0.2) ;//stair 1st
glBegin(GL_QUADS);

           glVertex2i(599, 475);
           glVertex2i (599, 485);

           glVertex2i (725, 485);
           glVertex2i (725, 475);
glEnd();
        glColor3f(0.7, 0.3, 0.2) ;
    glBegin(GL_QUADS);
           glVertex2i(596, 475);
           glVertex2i (596, 465);

           glVertex2i (728, 465);
           glVertex2i (728, 475);

     glEnd();


}

void nSriti_shoudh()
{

glColor3f(0.85,0.85,0.85) ;     //6th
         glBegin(GL_POLYGON);

           glVertex2i(600, 480);
           glVertex2i (660, 520);
           glVertex2i (720, 480);

     glEnd();


          glColor3f(0.80, 0.80, 0.80) ;   //5th
          glBegin(GL_POLYGON);

           glVertex2i(610, 480);
           glVertex2i (660, 550);
           glVertex2i (710, 480);

     glEnd();

         glColor3f(0.75, 0.75, 0.75) ;   //4rth
         glBegin(GL_POLYGON);

           glVertex2i(620, 480);
           glVertex2i (660, 560);
           glVertex2i (700, 480);
           glEnd();

           glColor3f(0.70, 0.70, 0.70) ;   //3rd
           glBegin(GL_POLYGON);

           glVertex2i(630, 480);
           glVertex2i (660, 570);
           glVertex2i (690, 480);



     glColor3f(0.65, 0.65, 0.65) ;     //2nd
         glBegin(GL_POLYGON);

           glVertex2i(640, 480);
           glVertex2i (660, 580);
           glVertex2i (680, 480);

     glEnd();

         glColor3f(0.60, 0.60, 0.60) ;
         glBegin(GL_POLYGON);

           glVertex2i(645, 485);
           glVertex2i (660, 595);
           glVertex2i (670, 485);


     glEnd();
          glColor3f(0.55, 0.55, 0.55) ;  //middle
         glBegin(GL_POLYGON);

           glVertex2i(660, 485);
           glVertex2i (660, 600);
           glVertex2i (670, 485);

     glEnd();

     glColor3f(0.5, 0.3, 0.2) ;//stair 1st
glBegin(GL_QUADS);

           glVertex2i(599, 475);
           glVertex2i (599, 485);

           glVertex2i (725, 485);
           glVertex2i (725, 475);
glEnd();
        glColor3f(0.7, 0.3, 0.2) ;
    glBegin(GL_QUADS);
           glVertex2i(596, 475);
           glVertex2i (596, 465);

           glVertex2i (728, 465);
           glVertex2i (728, 475);

     glEnd();


}

void rSriti_shoudh()
{

glColor3f(0.85,0.85,0.85) ;     //6th
         glBegin(GL_POLYGON);

           glVertex2i(600, 480);
           glVertex2i (660, 520);
           glVertex2i (720, 480);

     glEnd();


          glColor3f(0.80, 0.80, 0.80) ;   //5th
          glBegin(GL_POLYGON);

           glVertex2i(610, 480);
           glVertex2i (660, 550);
           glVertex2i (710, 480);

     glEnd();

         glColor3f(0.75, 0.75, 0.75) ;   //4rth
         glBegin(GL_POLYGON);

           glVertex2i(620, 480);
           glVertex2i (660, 560);
           glVertex2i (700, 480);
           glEnd();

           glColor3f(0.70, 0.70, 0.70) ;   //3rd
           glBegin(GL_POLYGON);

           glVertex2i(630, 480);
           glVertex2i (660, 570);
           glVertex2i (690, 480);



     glColor3f(0.65, 0.65, 0.65) ;     //2nd
         glBegin(GL_POLYGON);

           glVertex2i(640, 480);
           glVertex2i (660, 580);
           glVertex2i (680, 480);

     glEnd();

         glColor3f(0.60, 0.60, 0.60) ;
         glBegin(GL_POLYGON);

           glVertex2i(645, 485);
           glVertex2i (660, 595);
           glVertex2i (670, 485);


     glEnd();
          glColor3f(0.55, 0.55, 0.55) ;  //middle
         glBegin(GL_POLYGON);

           glVertex2i(660, 485);
           glVertex2i (660, 600);
           glVertex2i (670, 485);

     glEnd();

     glColor3f(0.5, 0.3, 0.2) ;//stair 1st
glBegin(GL_QUADS);

           glVertex2i(599, 475);
           glVertex2i (599, 485);

           glVertex2i (725, 485);
           glVertex2i (725, 475);
glEnd();
        glColor3f(0.7, 0.3, 0.2) ;
    glBegin(GL_QUADS);
           glVertex2i(596, 475);
           glVertex2i (596, 465);

           glVertex2i (728, 465);
           glVertex2i (728, 475);

     glEnd();


}

void Flag()
{
///flag
    glPushMatrix();
    glTranslatef(0, 40, 0);

    glColor3ub(156, 143, 6);    ///STAIR
    glBegin(GL_QUADS);
    glVertex2i(475, 340);
    glVertex2i(475, 350);
	glVertex2i(490, 350);
	glVertex2i(490, 340);
	glEnd();

    glColor3ub(104, 138, 143);    ///STAND
    glBegin(GL_QUADS);
    glVertex2i(482, 350);
    glVertex2i(482, 425);
	glVertex2i(485, 425);
	glVertex2i(485, 350);
	glEnd();

	glColor3ub(9, 107, 4);    ///Body
    glBegin(GL_QUADS);
    glVertex2i(485, 390);
    glVertex2i(485, 425);
	glVertex2i(535, 425);
	glVertex2i(535, 390);
	glEnd();

    ///Circle
    glPushMatrix();
    glTranslatef(510, 407, 0);

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=10;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();
   glPopMatrix();

   glPopMatrix();

}


void land()
{

//glColor3ub(224, 181, 79);
//glColor3ub(128, 131, 79);
glColor3ub(189 ,183 ,107);
glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(1000, 0);
    glVertex2i(1000, 550);
    glVertex2i(0, 550);
    glEnd();
}

void R_land()
{
    glColor3ub(184, 134 ,11);
     //glColor3ub(210, 105, 30);
glBegin(GL_QUADS);
    glVertex2i(0, 120);
    glVertex2i(1000, 120);
glVertex2i(1000, 550);
glVertex2i(0, 550);
glEnd();
}
void River()
{
    glColor3ub(122 ,197 ,205);
    glBegin(GL_QUADS);
    glVertex2i(0, 120);
    glVertex2i(1000, 120);
	glVertex2i(1000, 0);
	glVertex2i(0, 0);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2i(200, 120);
	glVertex2i(400, 120);
	glVertex2i(300, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(600-150, 120);
	glVertex2i(800-150, 120);
	glVertex2i(700-150, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(750, 120);
	glVertex2i(800, 120);
	glVertex2i(850, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(850, 120);
	glVertex2i(900, 120);
	glVertex2i(950, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(900, 120);
	glVertex2i(970, 120);
	glVertex2i(1000, 140);
	glEnd();
}

void R_river()
{
     glColor3ub(21,133,216);
    glBegin(GL_QUADS);
    glVertex2i(0, 120);
    glVertex2i(1000, 120);
	glVertex2i(1000, 0);
	glVertex2i(0, 0);
	glEnd();

    glBegin(GL_POLYGON);
	glVertex2i(200, 120);
	glVertex2i(400, 120);
	glVertex2i(300, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(600-150, 120);
	glVertex2i(800-150, 120);
	glVertex2i(700-150, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(750, 120);
	glVertex2i(800, 120);
	glVertex2i(850, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(850, 120);
	glVertex2i(900, 120);
	glVertex2i(950, 140);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(900, 120);
	glVertex2i(970, 120);
	glVertex2i(1000, 140);
	glEnd();


}

void road()
{
    glColor3ub(66, 66, 49);
glBegin(GL_QUADS);
glVertex2i(0,330);
glVertex2i(1000,330);
glVertex2i(1000,280);
glVertex2i(0,280);
glEnd();


glColor3ub(66, 66, 49);
glBegin(GL_QUADS);
glVertex2i(300,330);
glVertex2i(320,330);
glVertex2i(290,550);
glVertex2i(270,550);
glEnd();

glColor3ub(66, 66, 49);
glBegin(GL_QUADS);
glVertex2i(300,390);
glVertex2i(600,390);
glVertex2i(600,450);
glVertex2i(300,450);
glEnd();

     ///White line
glColor3ub(255, 255, 255);
glBegin(GL_LINES);
glVertex2i(0,304);
glVertex2i(1000,304);
glVertex2i(0,307);
glVertex2i(1000,307);
glEnd();
}


void car1()
{
    glPushMatrix();
    glTranslatef(car1_speed, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(88,320, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
   glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(70,320, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
   glEnd();
   glPopMatrix();


    glColor3f(255,0,255);
    glBegin(GL_QUADS);
    glVertex2i(60, 317);
    glVertex2i(100, 317);
    glVertex2i(100, 325);
    glVertex2i(60, 325);
    glVertex2i(65, 325);
    glVertex2i(90, 325);
    glVertex2i(85, 337);
    glVertex2i(68, 337);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_LINES);
    glVertex2i(60, 321);
    glVertex2i(100, 321);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_QUADS);
    glVertex2i(68, 325);
    glVertex2i(76, 325);
    glVertex2i(76, 333);
    glVertex2i(70, 333);
    glVertex2i(78, 325);
    glVertex2i(87, 325);
    glVertex2i(84, 333);
    glVertex2i(78, 333);
    glEnd();
    glPopMatrix();
///




glPushMatrix();
    glTranslatef(car2_speed, 0.0, 0.0);


    glPushMatrix();
    glTranslatef(20,320, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
   glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(38,320, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
   glEnd();
   glPopMatrix();


    glColor3f(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(10, 317);
    glVertex2i(50, 317);
    glVertex2i(50, 325);
    glVertex2i(10, 325);
    glVertex2i(15, 325);
    glVertex2i(40, 325);
    glVertex2i(35, 337);
    glVertex2i(18, 337);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_LINES);
    glVertex2i(10, 321);
    glVertex2i(50, 321);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_QUADS);
    glVertex2i(18, 325);
    glVertex2i(26, 325);
    glVertex2i(26, 333);
    glVertex2i(20, 333);
    glVertex2i(28, 325);
    glVertex2i(37, 325);
    glVertex2i(34, 333);
    glVertex2i(28, 333);
    glEnd();
    glPopMatrix();



}

void car2()
{
    glPushMatrix();
    glTranslatef(-car1_speed, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(923,295, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
   glEnd();
   glPopMatrix();
   glPushMatrix();
    glTranslatef(941,295, 0);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y );
}
   glEnd();
   glPopMatrix();

    glColor3f(255,0,0);
    glBegin(GL_QUADS);
    glVertex2i(910, 292);
    glVertex2i(950, 292);
    glVertex2i(950, 300);
    glVertex2i(910, 300);
    glVertex2i(920, 300);
    glVertex2i(945, 300);
    glVertex2i(942, 312);
    glVertex2i(925, 312);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_LINES);
    glVertex2i(910, 296);
    glVertex2i(950, 296);
    glEnd();
    glColor3f(0,255,0);
    glBegin(GL_QUADS);
    glVertex2i(923, 300);
    glVertex2i(933, 300);
    glVertex2i(933, 308);
    glVertex2i(926, 308);
    glVertex2i(935, 300);
    glVertex2i(943, 300);
    glVertex2i(941, 308);
    glVertex2i(935, 308);
    glEnd();
    glPopMatrix();
///




    glPushMatrix();
    glTranslatef(-car2_speed, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(1003,295, 0);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y);
}
   glEnd();
   glPopMatrix();
 glPushMatrix();
    glTranslatef(1003+18,295, 0);
    glBegin(GL_POLYGON);
    glColor3ub(0,0,255);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=5;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y);
}
   glEnd();
   glPopMatrix();


    glColor3f(0,0,255);
    glBegin(GL_QUADS);
    glVertex2i(10+900+80, 292);
    glVertex2i(1030, 292);
    glVertex2i(1030, 300);
    glVertex2i(990, 300);
    glVertex2i(1000, 300);
    glVertex2i(1025, 300);
    glVertex2i(1022, 312);
    glVertex2i(1005, 312);
    glEnd();

    glColor3f(0,255,0);
    glBegin(GL_LINES);
    glVertex2i(990, 296);
    glVertex2i(1030, 296);
    glEnd();

    glColor3f(0,255,0);
    glBegin(GL_QUADS);
    glVertex2i(1003, 300);
    glVertex2i(1013, 300);
    glVertex2i(1013, 308);
    glVertex2i(1005, 308);
    glVertex2i(1015, 300);
    glVertex2i(1023, 300);
    glVertex2i(1021, 308);
    glVertex2i(1015, 308);
    glEnd();
    glPopMatrix();
}


void house1()
{
    glColor3ub(165, 42 ,42);
glBegin(GL_QUADS);
    glVertex2i(100, 520);
    glVertex2i(180, 520);
    glVertex2i(165, 545);
    glVertex2i(115, 545);
    glEnd();
glColor3ub(205 ,183 ,18);
glBegin(GL_QUADS);
    glVertex2i(115, 520);
    glVertex2i(165, 520);
    glVertex2i(165, 480);
    glVertex2i(115, 480);
    glEnd();
glColor3ub(66, 66, 49);
glBegin(GL_QUADS);
    glVertex2i(105, 480);
    glVertex2i(175, 480);
    glVertex2i(175, 475);
    glVertex2i(105, 475);
    glEnd();
///Door
glColor3ub(1, 51, 102);
glBegin(GL_QUADS);
    glVertex2i(135, 480);
    glVertex2i(145, 480);
    glVertex2i(145, 510);
    glVertex2i(135, 510);
    glEnd();
///window
    glColor3ub(1, 51, 102);
glBegin(GL_QUADS);
    glVertex2i(120, 495);
    glVertex2i(128, 495);
    glVertex2i(128, 513);
    glVertex2i(120, 513);
    glEnd();
glBegin(GL_QUADS);
    glVertex2i(120, 495);
    glVertex2i(128, 495);
    glVertex2i(128, 513);
    glVertex2i(120, 513);
    glEnd();
glBegin(GL_QUADS);
    glVertex2i(150, 495);
    glVertex2i(158, 495);
    glVertex2i(158, 513);
    glVertex2i(150, 513);
   glEnd();

}

void house3()
{
glColor3ub(102, 0, 0);
glBegin(GL_TRIANGLES);
    glVertex2i(190, 520);
    glVertex2i(230, 520);
    glVertex2i(210, 540);
    glEnd();
glColor3ub(255, 127, 80);
glBegin(GL_QUADS);
    glVertex2i(198, 520);
    glVertex2i(222, 520);
    glVertex2i(222, 490);
    glVertex2i(198, 490);
    glEnd();
glColor3ub(102, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(194, 490);
    glVertex2i(226, 490);
    glVertex2i(226, 485);
    glVertex2i(194, 485);
    glEnd();
///Door
glColor3ub(1, 51, 102);
glBegin(GL_QUADS);
    glVertex2i(206, 490);
    glVertex2i(214, 490);
    glVertex2i(214, 510);
    glVertex2i(206, 510);
    glEnd();
}

void house6()
{
    glColor3ub(102, 0, 0);
glBegin(GL_TRIANGLES);
    glVertex2i(45, 545);
    glVertex2i(65, 545);
    glVertex2i(55, 560);
    glEnd();
glColor3ub(255, 127, 80);
glBegin(GL_QUADS);
    glVertex2i(50, 545);
    glVertex2i(60, 545);
    glVertex2i(60, 530);
    glVertex2i(50, 530);
    glEnd();
glColor3ub(102, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(47, 530);
    glVertex2i(63, 530);
    glVertex2i(63, 525);
    glVertex2i(47, 525);
    glEnd();
///Door
glColor3ub(1, 51, 102);
glBegin(GL_QUADS);
    glVertex2i(53, 540);
    glVertex2i(57, 540);
    glVertex2i(57, 530);
    glVertex2i(53, 530);
    glEnd();
}
void house7()
{
glColor3ub(102, 0, 0);
glBegin(GL_TRIANGLES);
    glVertex2i(0, 505);
    glVertex2i(20, 505);
    glVertex2i(10, 520);
    glEnd();
glColor3ub(255, 127, 80);
glBegin(GL_QUADS);
    glVertex2i(5, 505);
    glVertex2i(15, 505);
    glVertex2i(15, 490);
    glVertex2i(5, 490);
    glEnd();
glColor3ub(102, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(2, 490);
    glVertex2i(18, 490);
    glVertex2i(18, 485);
    glVertex2i(2, 485);
    glEnd();
///Door
glColor3ub(1, 51, 102);
glBegin(GL_QUADS);
    glVertex2i(8, 500);
    glVertex2i(12, 500);
    glVertex2i(12, 490);
    glVertex2i(8, 490);
    glEnd();
}
void house8()
{
glColor3ub(102, 0, 0);
glBegin(GL_TRIANGLES);
    glVertex2i(60, 515);
    glVertex2i(100,515);
    glVertex2i(80, 530);
    glEnd();
glColor3ub(255, 127 ,80);
glBegin(GL_QUADS);
    glVertex2i(70, 515);
    glVertex2i(90, 515);
    glVertex2i(90, 500);
    glVertex2i(70, 500);
    glEnd();
glColor3ub(102, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(64, 500);
    glVertex2i(96, 500);
    glVertex2i(96, 495);
    glVertex2i(64, 495);
    glEnd();
///Door
glColor3ub(1, 51, 102);
glBegin(GL_QUADS);
    glVertex2i(76, 510);
    glVertex2i(84, 510);
    glVertex2i(84, 500);
    glVertex2i(76, 500);
    glEnd();
}
void house9()
{
glColor3ub(102, 0, 0);
glBegin(GL_TRIANGLES);
    glVertex2i(180, 450);
    glVertex2i(220, 450);
    glVertex2i(200, 470);
    glEnd();
glColor3ub(255, 127 ,80);
glBegin(GL_QUADS);
    glVertex2i(188, 450);
    glVertex2i(212, 450);
    glVertex2i(212, 420);
    glVertex2i(188, 420);
    glEnd();
glColor3ub(102, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(184, 420);
    glVertex2i(216,420);
    glVertex2i(216,415);
    glVertex2i(184, 415);
glEnd();
///Door
glColor3ub(1, 51, 102);
glBegin(GL_QUADS);
    glVertex2i(196, 440);
    glVertex2i(204, 440);
    glVertex2i(204, 420);
    glVertex2i(196, 420);
    glEnd();
}
void house2()
{
    glColor3ub(102, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(50, 450);
    glVertex2i(80, 445);
    glVertex2i(65, 470);
    glEnd();
glColor3ub(255, 255, 255);
glBegin(GL_LINES);
    glVertex2i(80, 445);
    glVertex2i(65, 470);
    glVertex2i(80, 446);
    glVertex2i(65, 471);
    glEnd();
glColor3ub(102, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(80, 445);
    glVertex2i(100,460);
    glVertex2i(90, 480);
    glVertex2i(65, 470);
    glEnd();

glColor3ub(255, 127, 80);
glBegin(GL_QUADS);
    glVertex2i(50, 450);
    glVertex2i(80, 445);
    glVertex2i(80, 420);
    glVertex2i(50, 430);
    glEnd();
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(48, 430);
    glVertex2i(80, 420);
    glVertex2i(80, 415);
    glVertex2i(48, 425);
    glEnd();

glColor3ub(255, 127, 80);
glBegin(GL_QUADS);
    glVertex2i(80, 445);
    glVertex2i(100, 460);
    glVertex2i(100, 435);
    glVertex2i(80, 420);
    glEnd();
glColor3ub(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(80, 420);
    glVertex2i(102,437);
    glVertex2i(102,432);
    glVertex2i(80, 415);
    glEnd();

glColor3ub(102, 0, 0);
glBegin(GL_LINES);
    glVertex2i(80, 445);
    glVertex2i(80, 420);
    glVertex2i(81, 420);
    glVertex2i(81, 420);
glEnd();
///Door
    glColor3ub(1, 51, 102);
glBegin(GL_QUADS);
    glVertex2i(60, 425);
    glVertex2i(70, 420);
    glVertex2i(70, 437);
    glVertex2i(60, 440);
    glEnd();

glColor3ub(1, 51, 102);
    glBegin(GL_QUADS);
    glVertex2i(87, 441);
    glVertex2i(93, 447);
    glVertex2i(93, 430);
    glVertex2i(87, 425);
    glEnd();
}

void HillTree()
{
    float a;
    for(a=0;a<1000;a+=100)
    {
        float b=a+2;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a, 545);
        glVertex2i(b, 545);
        glVertex2i(b, 560);
        glVertex2i(a, 560);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-5, 560);
        glVertex2i(b+5, 560);
        glVertex2i(a+1,570);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-5, 560+4);
        glVertex2i(b+5, 560+4);
        glVertex2i(a+1,570+4);
        glEnd();
    }
}
void HillTree2()
{
    float a;
    for(a=10;a<1000;a+=120)
    {
        float b=a+2;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a, 545);
        glVertex2i(b, 545);
        glVertex2i(b, 580);
        glVertex2i(a, 580);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-8, 580);
        glVertex2i(b+8, 580);
        glVertex2i(a+1,590);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-8, 580+5);
        glVertex2i(b+8, 580+5);
        glVertex2i(a+1,590+10);
        glEnd();

    }
}
void HillTree3()
{
    float a;
    for(a=10;a<1000;a+=160)
    {
        float b=a+2;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a, 545);
        glVertex2i(b, 545);
        glVertex2i(b, 580);
        glVertex2i(a, 580);
        glEnd();
        glColor3ub(102, 204, 0);
        glBegin(GL_POLYGON);
        glVertex2i(a-4, 560-2);
        glVertex2i(b+4, 560-2);
        glVertex2i(a+1,590+4);
        glEnd();
    }
}
void R_hilltree()
{
    float a;
    for(a=0;a<1000;a+=100)
    {
        float b=a+2;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a, 545);
        glVertex2i(b, 545);
        glVertex2i(b, 560);
        glVertex2i(a, 560);
        glEnd();
        glColor3ub(0, 153, 51);
        glBegin(GL_POLYGON);
        glVertex2i(a-5, 560);
        glVertex2i(b+5, 560);
        glVertex2i(a+1,570);
        glEnd();
        glColor3ub(0, 153, 51);
        glBegin(GL_POLYGON);
        glVertex2i(a-5, 560+4);
        glVertex2i(b+5, 560+4);
        glVertex2i(a+1,570+4);
        glEnd();
    }
}
void R_hilltree2()
{

    float a;
    for(a=10;a<1000;a+=120)
    {
        float b=a+2;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a, 545);
        glVertex2i(b, 545);
        glVertex2i(b, 580);
        glVertex2i(a, 580);
        glEnd();
        glColor3ub(0, 153, 51);
        glBegin(GL_POLYGON);
        glVertex2i(a-8, 580);
        glVertex2i(b+8, 580);
        glVertex2i(a+1,590);
        glEnd();
        glColor3ub(0, 153, 51);
        glBegin(GL_POLYGON);
        glVertex2i(a-8, 580+5);
        glVertex2i(b+8, 580+5);
        glVertex2i(a+1,590+10);
        glEnd();

    }
}
void R_hilltree3()
{
 float a;
    for(a=10;a<1000;a+=160)
    {
        float b=a+2;
        glColor3ub(0, 0, 0);
        glBegin(GL_QUADS);
        glVertex2i(a, 545);
        glVertex2i(b, 545);
        glVertex2i(b, 580);
        glVertex2i(a, 580);
        glEnd();
        glColor3ub(0, 153, 51);
        glBegin(GL_POLYGON);
        glVertex2i(a-4, 560-2);
        glVertex2i(b+4, 560-2);
        glVertex2i(a+1,590+4);
        glEnd();
    }
}
void tree1()
{
    glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(20, 380);
    glVertex2i(25, 380);
    glVertex2i(25, 420);
    glVertex2i(20, 420);
    glEnd();
glColor3ub(102, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(20, 420);
    glVertex2i(5, 410);
    glVertex2i(20, 450);
glEnd();

glBegin(GL_QUADS);
    glVertex2i(20, 420);
    glVertex2i(25, 420);
    glVertex2i(25, 450);
    glVertex2i(20, 450);
glEnd();

glColor3ub(102, 204, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(25, 420);
    glVertex2i(40, 410);
    glVertex2i(25, 450);
    glEnd();
}

void tree2()
{

}

void R_tree1()
{
}

void R_tree2()
{
}
void moon()
{
    glPushMatrix();
    glTranslatef(500,850, 0);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
for(int i=0;i<200;i++)
{
float pi=3.1416;
float A=(i*2*pi)/200;
float r=50;
float x = r * cos(A);
float y = r * sin(A);
glVertex2f(x,y);
}
   glEnd();
   glPopMatrix();
   glPopMatrix();


}

void star1()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (70,880);
glVertex2i (70,885);

glVertex2i(70,885);
glVertex2i(75,885);

glVertex2i(75,885);
glVertex2i(75,880);

glVertex2i(75,880);
glVertex2i(70,880);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(70,880);
glVertex2i(72,875);

glVertex2i(75,880);
glVertex2i(72,875);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(75,880);
glVertex2i(80,883);

glVertex2i(75,885);
glVertex2i(80,883);
glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(75,885);
glVertex2i(72,890);

glVertex2i(70,885);
glVertex2i(72,890);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(70,885);
glVertex2i(65,883);


glVertex2i(70,880);
glVertex2i(65,883);
glEnd();
}

void star2()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (170,880);
glVertex2i (170,885);

glVertex2i(170,885);
glVertex2i(175,885);

glVertex2i(175,885);
glVertex2i(175,880);

glVertex2i(175,880);
glVertex2i(170,880);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(170,880);
glVertex2i(172,875);

glVertex2i(175,880);
glVertex2i(172,875);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(175,880);
glVertex2i(180,883);

glVertex2i(175,885);
glVertex2i(180,883);
glEnd();

glColor3f(11.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(175,885);
glVertex2i(172,890);

glVertex2i(170,885);
glVertex2i(172,890);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(170,885);
glVertex2i(165,883);


glVertex2i(170,880);
glVertex2i(165,883);
glEnd();
}

void star3()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (70,980);
glVertex2i (70,985);

glVertex2i(70,985);
glVertex2i(75,985);

glVertex2i(75,985);
glVertex2i(75,980);

glVertex2i(75,980);
glVertex2i(70,980);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(70,980);
glVertex2i(72,975);

glVertex2i(75,980);
glVertex2i(72,975);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(75,980);
glVertex2i(80,983);

glVertex2i(75,985);
glVertex2i(80,983);
glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(75,985);
glVertex2i(72,990);

glVertex2i(70,985);
glVertex2i(72,990);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(70,985);
glVertex2i(65,983);


glVertex2i(70,980);
glVertex2i(65,983);
glEnd();
}

void star4()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (570,880);
glVertex2i (570,885);

glVertex2i(570,885);
glVertex2i(575,885);

glVertex2i(575,885);
glVertex2i(575,880);

glVertex2i(575,880);
glVertex2i(570,880);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(570,880);
glVertex2i(572,875);

glVertex2i(575,880);
glVertex2i(572,875);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(575,880);
glVertex2i(580,883);

glVertex2i(575,885);
glVertex2i(580,883);
glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(575,885);
glVertex2i(572,890);

glVertex2i(570,885);
glVertex2i(572,890);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(570,885);
glVertex2i(565,883);


glVertex2i(570,880);
glVertex2i(565,883);
glEnd();
}

void star5()
{
    glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

glVertex2i (970,880);
glVertex2i (970,885);

glVertex2i(970,885);
glVertex2i(975,885);

glVertex2i(975,885);
glVertex2i(975,880);

glVertex2i(975,880);
glVertex2i(970,880);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(970,880);
glVertex2i(972,875);

glVertex2i(975,880);
glVertex2i(972,875);

glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(975,880);
glVertex2i(980,883);

glVertex2i(975,885);
glVertex2i(980,883);
glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

glVertex2i(975,885);
glVertex2i(972,890);

glVertex2i(970,885);
glVertex2i(972,890);
glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
glVertex2i(970,885);
glVertex2i(965,883);


glVertex2i(970,880);
glVertex2i(965,883);
glEnd();
}
void star6()
{
glColor3f(1.0f,1.0f,1.0f) ;
glBegin(GL_POLYGON);

    glVertex2i (470,680);
    glVertex2i (470,685);

    glVertex2i(470,685);
    glVertex2i(475,685);

    glVertex2i(475,685);
    glVertex2i(475,680);

    glVertex2i(475,680);
    glVertex2i(470,680);
    glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
    glVertex2i(470,680);
    glVertex2i(472,675);

    glVertex2i(475,680);
    glVertex2i(472,675);

    glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

    glVertex2i(475,680);
    glVertex2i(480,683);

    glVertex2i(475,685);
    glVertex2i(480,683);
    glEnd();

glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);

    glVertex2i(475,685);
    glVertex2i(472,690);

    glVertex2i(470,685);
    glVertex2i(472,690);
    glEnd();


glColor3f(1.0f,1.0f,1.0f);
glBegin(GL_POLYGON);
    glVertex2i(470,685);
    glVertex2i(465,683);


    glVertex2i(470,680);
    glVertex2i(465,683);
    glEnd();
}

void LeftRoadTree()
{
    ///1st
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(282, 345);
    glVertex2i(285, 345);
    glVertex2i(285, 370);
    glVertex2i(282, 370);
    glEnd();
glColor3ub(102, 204, 0);
glBegin(GL_POLYGON);
    glVertex2i(273, 370);
    glVertex2i(294, 370);
    glVertex2i(284, 390);
    glEnd();
glColor3ub(0, 204, 0);
glBegin(GL_POLYGON);
    glVertex2i(273, 376);
    glVertex2i(294, 376);
    glVertex2i(284, 396);
    glEnd();

///2nd
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(275, 395);
    glVertex2i(278, 395);
    glVertex2i(278, 420);
    glVertex2i(275, 420);
    glEnd();
glColor3ub(102, 204, 0);
glBegin(GL_POLYGON);
    glVertex2i(266, 420);
    glVertex2i(287, 420);
    glVertex2i(277, 440);
    glEnd();
glColor3ub(0, 204, 0);
glBegin(GL_POLYGON);
    glVertex2i(266, 426);
    glVertex2i(287, 426);
    glVertex2i(277, 446);
    glEnd();
///3rd
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(268, 445);
    glVertex2i(271, 445);
    glVertex2i(271, 470);
    glVertex2i(268, 470);
    glEnd();
glColor3ub(102, 204, 0);
glBegin(GL_POLYGON);
    glVertex2i(259, 470);
    glVertex2i(280, 470);
    glVertex2i(270, 490);
    glEnd();
    glColor3ub(0, 204, 0);
glBegin(GL_POLYGON);
    glVertex2i(259, 476);
    glVertex2i(280, 476);
    glVertex2i(270, 496);
    glEnd();

///4th
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(261, 495);
    glVertex2i(264, 495);
    glVertex2i(264, 520);
    glVertex2i(261, 520);
    glEnd();
glColor3ub(102, 204, 0);
glBegin(GL_POLYGON);
    glVertex2i(252, 520);
    glVertex2i(273, 520);
    glVertex2i(263, 540);
    glEnd();
glColor3ub(0, 204, 0);
glBegin(GL_POLYGON);
    glVertex2i(252, 526);
    glVertex2i(273, 526);
    glVertex2i(263, 546);
    glEnd();
}

void R_leftroadtree()
{
     ///1st
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(282, 345);
    glVertex2i(285, 345);
    glVertex2i(285, 370);
    glVertex2i(282, 370);
    glEnd();
glColor3ub(0, 153, 51);
glBegin(GL_POLYGON);
    glVertex2i(273, 370);
    glVertex2i(294, 370);
    glVertex2i(284, 390);
    glEnd();
glColor3ub(41, 163, 41);
glBegin(GL_POLYGON);
    glVertex2i(273, 376);
    glVertex2i(294, 376);
    glVertex2i(284, 396);
    glEnd();

///2nd
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(275, 395);
    glVertex2i(278, 395);
    glVertex2i(278, 420);
    glVertex2i(275, 420);
    glEnd();
glColor3ub(0, 153, 51);
glBegin(GL_POLYGON);
    glVertex2i(266, 420);
    glVertex2i(287, 420);
    glVertex2i(277, 440);
    glEnd();
glColor3ub(41, 163, 41);
glBegin(GL_POLYGON);
    glVertex2i(266, 426);
    glVertex2i(287, 426);
    glVertex2i(277, 446);
    glEnd();

///3rd
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(268, 445);
    glVertex2i(271, 445);
    glVertex2i(271, 470);
    glVertex2i(268, 470);
    glEnd();
glColor3ub(0, 153, 51);
glBegin(GL_POLYGON);
    glVertex2i(259, 470);
    glVertex2i(280, 470);
    glVertex2i(270, 490);
    glEnd();
    glColor3ub(41, 163, 41);
glBegin(GL_POLYGON);
    glVertex2i(259, 476);
    glVertex2i(280, 476);
    glVertex2i(270, 496);
    glEnd();

///4th
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
    glVertex2i(261, 495);
    glVertex2i(264, 495);
    glVertex2i(264, 520);
    glVertex2i(261, 520);
    glEnd();
glColor3ub(0, 153, 51);
glBegin(GL_POLYGON);
    glVertex2i(252, 520);
    glVertex2i(273, 520);
    glVertex2i(263, 540);
    glEnd();
glColor3ub(41, 163, 41);
glBegin(GL_POLYGON);
    glVertex2i(252, 526);
    glVertex2i(273, 526);
    glVertex2i(263, 546);
    glEnd();
}

void RoadLeftLamp()
{


float a;
for(a=0; a<=1000; a+=70)
    {
        float b=a+3;
        glColor3ub(66, 66, 49);
        glBegin(GL_QUADS);
        glVertex2i(a,332);
        glVertex2i(b,332);
        glVertex2i(b,350);
        glVertex2i(a,350);
        glEnd();
        glColor3ub(255, 255, 255);
        glBegin(GL_QUADS);
        glVertex2i(a,350);
        glVertex2i(b,350);
        glVertex2i(b,355);
        glVertex2i(a,355);
        glEnd();
    }
}

void RoadRightLamp()
{
    float a;
for(a=0; a<=1000; a+=70)
    {
        float b=a+3;
        glColor3ub(66, 66, 49);
        glBegin(GL_QUADS);
        glVertex2i(a,278);
        glVertex2i(b,278);
        glVertex2i(b,296);
        glVertex2i(a,296);
        glEnd();
        glColor3ub(255, 255, 255);
        glBegin(GL_QUADS);
        glVertex2i(a,296);
        glVertex2i(b,296);
        glVertex2i(b,301);
        glVertex2i(a,301);
        glEnd();
    }
}

void night_color()
{
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glColor4ub(0, 0, 0, 950);
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(1000, 0);
    glVertex2i(1000, 1000);
    glVertex2i(0, 1000);
    glEnd();
}


void boat()
{
glPushMatrix();
glTranslatef(boat_speed,0.0f, 0.0f);
     glColor3ub(139, 105, 20);
     glBegin(GL_POLYGON);
     glVertex2i(35,0);
     glVertex2i(95,0);
     glVertex2i(130,20);
     glVertex2i(0,20);
     glEnd();

     glBegin(GL_POLYGON);
     glVertex2i(25,20);
     glVertex2i(88,20);
     glVertex2i(88,40);
     glVertex2i(25,40);
     glEnd();

     glBegin(GL_POLYGON);
     glVertex2i(35,40);
     glVertex2i(80,40);
     glVertex2i(80,60);
     glVertex2i(35,60);
glEnd();
      glBegin(GL_POLYGON);
     glVertex2i(35,60);
     glVertex2i(70,60);
     glVertex2i(70,85);
     glVertex2i(35,85);
     glEnd();


     //window11
     glColor3ub(204, 255, 255);
     glBegin(GL_POLYGON);
     glVertex2i(31.25,25);
     glVertex2i(46.25,25);
     glVertex2i(46.25,35);
     glVertex2i(31.25,35);
     glEnd();

     //window12
     glBegin(GL_POLYGON);
     glVertex2f(48.75,25);
     glVertex2f(63.75,25);
     glVertex2f(63.75,35);
     glVertex2f(48.75,35);
     glEnd();

     //window13
     glBegin(GL_POLYGON);
     glVertex2f(66.25,25);
     glVertex2f(81.25,25);
     glVertex2f(81.25,35);
     glVertex2f(66.25,35);
     glEnd();

     //w14

//w21
  glBegin(GL_POLYGON);
     glVertex2f(40,45);
     glVertex2f(55,45);
     glVertex2f(55,55);
     glVertex2f(40,55);
     glEnd();
//w22
     glBegin(GL_POLYGON);
     glVertex2f(57.5,45);
     glVertex2f(72,45);
     glVertex2f(72.5,55);
     glVertex2f(57,55);
     glEnd();
//w23


     //w31
     glBegin(GL_POLYGON);
     glVertex2f(42,65);
     glVertex2f(56.5,65);
     glVertex2f(56.5,75);
     glVertex2f(42,75);
     glEnd();

     //w32

glPopMatrix();

glFlush();


}


void boat2()
{
    glPushMatrix();
    glTranslatef(boat2_speed,0.0f, 0.0f);
    glColor3ub(139,0, 0);
     glBegin(GL_POLYGON);
     glVertex2i(20,30);
     glVertex2i(80,30);
     glVertex2i(97,50);
     glVertex2i(10,50);
     glEnd();

      glBegin(GL_POLYGON);
     glVertex2i(10,50);
     glVertex2i(75,50);
     glVertex2i(75,70);
     glVertex2i(10,70);
     glEnd();

       glBegin(GL_POLYGON);
     glVertex2i(25,70);
     glVertex2i(60,70);
     glVertex2i(60,90);
     glVertex2i(25,90);
     glEnd();
      glBegin(GL_TRIANGLES);
     glVertex2i(50,104);
     glVertex2i(60,90);
     glVertex2i(40,90);
     glEnd();



    glBegin(GL_POLYGON);
     glVertex2i(50,104);
     glVertex2i(51,104);
     glVertex2i(51,124);
     glVertex2i(50,124);
     glEnd();

      glColor3ub(255, 0, 0);
      glBegin(GL_TRIANGLES);
     glVertex2f(57,113);
     glVertex2f(51,118);
     glVertex2f(51,109);
     glEnd();



        //w11
         glColor3ub(204, 255, 255);
        glBegin(GL_POLYGON);
     glVertex2i(17,55);
     glVertex2i(40,55);
     glVertex2i(40,65);
     glVertex2i(17,65);
     glEnd();

     //w12
      glBegin(GL_POLYGON);
     glVertex2f(42.5,55);
     glVertex2f(57.5,55);
     glVertex2f(57.5,65);
     glVertex2f(42.5,65);
     glEnd();

  //w13

     //w21

  glBegin(GL_POLYGON);
     glVertex2f(31,75);
     glVertex2f(48.5,75);
     glVertex2f(48.5,85);
     glVertex2f(31,85);
     glEnd();

     //w22




  glBegin(GL_TRIANGLES);
     glVertex2f(50,100);
     glVertex2f(45,95);
     glVertex2f(55,95);
     glEnd();


glPopMatrix();


}

void boat3()
{
    glPushMatrix();
    glTranslatef(boat3_speed,0.0f, 0.0f);
    glColor3ub(0, 1, 1);
///main body

        glBegin(GL_POLYGON);
     glVertex2i(1120,40);
     glVertex2i(1180,40);
     glVertex2i(1200,70);
     glVertex2i(1100,70);
     glEnd();
///2nd main body
         glBegin(GL_POLYGON);
     glVertex2i(1140,70);
     glVertex2i(1185,70);
     glVertex2i(1185,100);
     glVertex2i(1140,100);
     glEnd();
///3rd main body
         glBegin(GL_POLYGON);
     glVertex2i(1155,100);
     glVertex2i(1185,100);
     glVertex2i(1185,120);
     glVertex2i(1155,120);
     glEnd();

         glBegin(GL_POLYGON);
     glVertex2i(1148,100);
     glVertex2i(1152,100);
     glVertex2i(1152,133);
     glVertex2i(1148,124);
     glEnd();

     glColor3ub(255, 255, 153);

     glBegin(GL_LINES);
     glVertex2i(1155,100);
     glVertex2i(1185,100);
      glVertex2i(1155,100);
      glVertex2i(1155,80);
      glVertex2i(1184,100);
       glVertex2i(1184,80);
       glVertex2i(1155,80);
       glVertex2i(1184,80);
      glEnd();

    //w1
    glColor3ub(255, 255, 0);

         glBegin(GL_POLYGON);
     glVertex2i(1180,85);
     glVertex2i(1165,85);
     glVertex2i(1165,95);
     glVertex2i(1180,95);
     glEnd();


     glPopMatrix();

}
void Rain(int value){

if(rainday){

    _rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1000; y%=1000;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();

}
}
void drawCircle4(GLfloat xx, GLfloat yy, GLfloat r,int rr,int g,int b)
{
      int i;
     glScalef(0.72,1,1);

	GLfloat x=xx; GLfloat y=yy; GLfloat radius =r;
	int triangleAmount = 40; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(rr,g,b);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void drawCircle5(GLfloat xx, GLfloat yy, GLfloat r,int rr,int g,int b){

    int i;

    //glScalef(0.72,1,1);

	GLfloat x=-xx; GLfloat y=yy; GLfloat radius =r;
	int triangleAmount = 40; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(rr,g,b);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}



void display()
{
glClear(GL_COLOR_BUFFER_BIT);
    glColor3b(1,0,0);
    sky();
    Hill();
    sun();
    land();
    River();
    road();

    car1();
    car2();



 //cloud_model_one();
    LeftRoadTree();
    house1();

    house3();

    house2();
    house6();
    house7();
    house8();
    house9();

    HillTree();
    HillTree2();
    HillTree3();
    Sriti_shoudh();
    tree1();
    tree2();
    RoadLeftLamp();
    RoadRightLamp();

    Flag();
   // cloud_model_one();
    //cloud_model_two();
    //cloud_model_Three();
    cloud4();
    cloud5();
    cloud6();
    cloud7();
    cloud8();
    boat3();
    boat2();
    boat();

     Birds();



    glFlush();
}

void Night_Display()
{
glClear(GL_COLOR_BUFFER_BIT);
    glColor3b(1,0,0);
    sky();
    Hill();

    cloud4();
    cloud5();
    cloud6();
    cloud7();
    cloud8();
    land();
    LeftRoadTree();
    house1();

    house3();

    house2();
    house6();
    house7();
    house8();
    house9();

    HillTree();
    HillTree2();
    HillTree3();
    tree1();
    tree2();
    road();

    RoadLeftLamp();
    RoadRightLamp();
    moon();
    star1();
    star2();
    star3();
    star4();
    star5();
    star6();
    Sriti_shoudh();
 River();
     boat3();
    boat2();
    boat();
    night_color();
    car1();
    car2();


    glFlush();
}

void rNight_Display()
{
glClear(GL_COLOR_BUFFER_BIT);
    glColor3b(1,0,0);
   R_sky();
    Rainycloudone();
    Rainycloudtwo();
    Rainycloudthree();

    R_hill();

    R_land();

    R_river();
    LeftRoadTree();
    house1();

    house3();

    house2();
    house6();
    house7();
    house8();
    house9();

    HillTree();
    HillTree2();
    HillTree3();
    tree1();
    tree2();
    road();

    RoadLeftLamp();
    RoadRightLamp();

    Sriti_shoudh();

    night_color();
    car1();
    car2();
    boat3();
    boat2();
    boat();


    glFlush();
}
void Rainy_View()
{
glClear(GL_COLOR_BUFFER_BIT);
    glColor3b(1,0,0);
    R_sky();
    Rainycloudone();
    Rainycloudtwo();
    Rainycloudthree();
    R_hill();

    R_land();

    R_river();

    R_leftroadtree();
    house1();

    house3();

    house2();
    house6();
    house7();
    house8();
    house9();

    R_hilltree();
    R_hilltree2();
    HillTree3();
    tree1();
    tree2();
    rSriti_shoudh();
    RoadLeftLamp();
    RoadRightLamp();
     road();
     car1();
    car2();
     car1();
    car2();
    boat3();
    boat2();
    boat();



    glFlush();

}

void update(int value)
{
     car1_speed += 3.3f;
if (car1_speed > 1000)
    {
        car1_speed -= 1100;
    }

    car2_speed += 2.5f;
if (car2_speed > 1000)
    {
        car2_speed -= 1100;
    }
    //car1_speed += 1.5f;

    boat3_speed -= 1.1f;
	if (boat3_speed <-1500)
    {
        boat3_speed += 2000;
    }


     boat2_speed += 2.75f;
	if (boat2_speed > 1100)
    {
        boat2_speed -= 1500;
    }

    boat_speed += 1.7f;
	if (boat_speed > 1100)
    {
        boat_speed -= 1300;
    }

    ax = ax + 1;
    bx = bx + .5;
    cx = cx + .2;
    dx = dx + .3;

    if(cx>1000){
        cx = -200;
    }
    if(ax>1000)
    {
    ax=-200;
    }
    if(bx>1000){
            bx= -10;

    }
    if(cx>1000){
            cx= -50;

    }
    if(dx>1000){
            dx= -50;

    }

     rcl1 += 0.6f;
	if (rcl1 > 1000)
    {
        rcl1 -= 1100;
    }

      rcl2 += 0.37f;
	if (rcl2 > 1000)
    {
        rcl2 -= 1200;
    }
       rcl3 -= 0.5f;
	if (rcl3 <-1500)
    {
        rcl3 += 2000;
    }

      rcl4 += 0.4f;
	if (rcl4 > 1000)
    {
        rcl4 -= 1100;
    }

      rcl5 += 0.45f;
	if (rcl5 > 1000)
    {
        rcl5 -= 1100;
    }

    rcl6 -= 0.35f;
	if (rcl6 <-1500)
    {
        rcl6 += 2000;
    }


 birdS += 6.5f;
if (birdS > 200)
    {
        birdS -= 1100;
    }

    birdS2 += 7.4f;
if (birdS2 > 200)
    {
        birdS2 -= 1100;
    }
    birdS3 += 7.0f;
if (birdS3 > 200)
    {
        birdS3 -= 1100;
    }


        ///cloud4
     cld4 += 1.5f;
if (cld4 > 700)
    {
        cld4 -= 1200;
    }
    ///cloud5
     cld5 += 3.0f;
if (cld5 >900)
    {
        cld5 -= 1150;
    }
    ///cloud6
     cld6 += 0.5f;
if (cld6 >900)
    {
        cld6 -= 1150;
    }
    ///cloud7
     cld7 += 1.0f;
if (cld7 >500)
    {
        cld7 -= 1300;
    }

     ///cloud8
     cld8 += 2.5f;
if (cld8 >1000)
    {
        cld8 -= 1100;
    }
     ///cloud9
     cld9 += 2.5f;
if (cld9 >1000)
    {
        cld9 -= 1100;
    }

    ///cloud10
     cld10 += 2.5f;
if (cld10 >400)
    {
        cld10 -= 1000;
    }

    ///cloud11
     cld11 += 2.5f;
if (cld11 >650)
    {
        cld11 -= 1100;
    }

    glutPostRedisplay();
   glutTimerFunc(25, update, 0);

}



void myKeyboard(unsigned char key, int x, int y)
{
    switch (key)
{
   case 'n':
         ///Night
        glutDisplayFunc(Night_Display);
         PlaySound(NULL, 0, 0);
        rainday = false;
        break;

     case 'd':
               ///Day
       glutDisplayFunc(display);
       rainday = false;
       break;

     case 'q':
            ///rainy night
       glutDisplayFunc(rNight_Display);
       rainday = true;
       Rain(_rain);
      sndPlaySound("rain01.wav",SND_ASYNC|SND_LOOP);

        break;
///rainy day
         case 'r':
        glutDisplayFunc(Rainy_View);
        rainday = true;
        Rain(_rain);

       sndPlaySound("rain01.wav",SND_ASYNC|SND_LOOP);


        break;

        case 's':     /// stop key

        PlaySound(NULL, 0, 0);
        break;

        case 'm':
        sndPlaySound("national_anthem.wav",SND_ASYNC|SND_LOOP);
        break;


        case 27:     /// Exit key
        exit(0);
        break;


    default:
break;
}

}

int main(int argc,char **argv)

{
       cout<<endl << "*********** Sriti Shoudho and village Side View  ********************" << endl << endl;

       cout<< "Press n : For Night"<<endl<<endl;
       cout<<"Press d : For Day" <<endl<<endl;
       cout<<"Press r : rainy Mood" <<endl<<endl;
       cout<<"Press q : rainy Mood night" <<endl<<endl;
       cout<<"Press m : National Song" <<endl<<endl;
       cout<<"Press s : stop all sound" <<endl<<endl;
       cout<<"Press Esc : For Exit Windows" <<endl<<endl;


glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(1300, 700);
glutCreateWindow("Sriti Shoudho and village Side View ");

glutDisplayFunc(display);
glutTimerFunc(25, update, 0);
glutKeyboardFunc(myKeyboard);


init();

glutMainLoop();
return 0;
}
