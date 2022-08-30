#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <MMSystem.h>

int mode,i,p,r,xc,yc,x,y,j,k,c,d;
float rmv=10000,hm=1920, pm=0,m=0,mp=0,sp=0,slp=0,bbm=0,cm=0,cp=0,ppm=0,rx,ry,cx,cy,angle,h;

void oval( rx , ry,  cx, cy){

glBegin(GL_TRIANGLE_FAN);

glVertex2d(cx, cy);

 for ( i=0; i<=100; i++){

  angle = 2.0f* 3.1416f*i/100;

    x = rx * cosf(angle);
    y = ry * sinf(angle);

     glVertex2d(x+cx,y+cy);

 }
 glEnd();
}

void circle(int xc,int yc,int r)
{
    p=1-r;
    x=0;
    y=r;


    while(x<=y)
    {
    if(p<0)
    {
        x=x+1;
        p=p+2*x+1;
    }
    else
    {
        x=x+1;
        y=y-1;
        p=p+2*(x+1)-2*(y+1);

    }
        glBegin(GL_POLYGON);
        glVertex2i(x+xc,y+yc);
        glVertex2i(x+xc,-y+yc);
        glVertex2i(-x+xc,-y+yc);
        glVertex2i(-x+xc,y+yc);
        glVertex2i(y+xc,x+yc);
        glVertex2i(y+xc,-x+yc);
        glVertex2i(-y+xc,-x+yc);
        glVertex2i(-y+xc,x+yc);
        glEnd();
    }
}


void people(float sx, float sy,int i,int j)
{

    if(ppm<=2800)
     {
         ppm=ppm+0.009;
     }
     else
     {
     ppm=-1700;
     }


glBegin(GL_POLYGON);
glVertex2d (ppm+205*sx+i,338*sy+j);     //chest
glVertex2d (ppm+214*sx+i,338*sy+j);
glVertex2d (ppm+213*sx+i,369*sy+j);
glVertex2d (ppm+204*sx+i,369*sy+j);
glEnd();


glBegin(GL_POLYGON);
glVertex2d (ppm+200*sx+i,350*sy+j);       //hand
glVertex2d (ppm+200*sx+i,250*sy+j);
glVertex2d (ppm+239*sx+i,250*sy+j);
glVertex2d (ppm+230.83*sx+i,311.044*sy+j);
glVertex2d (ppm+229.19*sx+i,311.50*sy+j);
glVertex2d (ppm+219.374*sx+i,340.509*sy+j);
glEnd();

        glColor3ub(244,164,96);               //head
        circle(ppm+208*sx+i,370*sy+j,16);

        glColor3ub (0,0,0);                  //hair
        circle(ppm+200*sx+i,380*sy+j,4);
        circle(ppm+205*sx+i,384*sy+j,4);
        circle(ppm+210*sx+i,386*sy+j,4);
        circle(ppm+215*sx+i,388*sy+j,4);
        circle(ppm+220*sx+i,390*sy+j,4);
        circle(ppm+205*sx+i,400*sy+j,4);
        circle(ppm+190*sx+i,384*sy+j,4);
        circle(ppm+180*sx+i,386*sy+j,4);
        circle(ppm+185*sx+i,388*sy+j,4);
        circle(ppm+203*sx+i,390*sy+j,4);
        circle(ppm+190*sx+i,360*sy+j,8);
        circle(ppm+185*sx+i,365*sy+j,8);




glColor3ub(50,205,50);                    //pent
glBegin(GL_POLYGON);
glVertex2d (ppm+204*sx+i,331*sy+j);
glVertex2d (ppm+212*sx+i,311*sy+j);
glVertex2d (ppm+228*sx+i,311*sy+j);
glVertex2d (ppm+217*sx+i,330*sy+j);
glEnd();

glColor3ub(244,164,96);
glBegin(GL_POLYGON);
glVertex2d (ppm+212*sx+i,311*sy+j);
glVertex2d (ppm+228*sx+i,311*sy+j);
glVertex2d (ppm+266*sx+i,293*sy+j);
glVertex2d (ppm+267*sx+i,287*sy+j);
glEnd();

glColor3ub(244,164,96);
glBegin(GL_POLYGON);
glVertex2d (ppm+266*sx+i,293*sy+j);
glVertex2d (ppm+267*sx+i,287*sy+j);
glVertex2d (ppm+287*sx+i,290*sy+j);
glVertex2d (ppm+284*sx+i,311*sy+j);
glEnd();


glColor3ub(0,0,0);                     //leg
glBegin(GL_POLYGON);
glVertex2d (ppm+200*sx+i,250*sy+j);
glVertex2d (ppm+215*sx+i,251*sy+j);
glVertex2d (ppm+216*sx+i,173*sy+j);
glVertex2d (ppm+203*sx+i,173*sy+j);
glEnd();


glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2d (ppm+239*sx+i,250*sy+j);
glVertex2d (ppm+225*sx+i,251*sy+j);
glVertex2d (ppm+234*sx+i,174*sy+j);
glVertex2d (ppm+249*sx+i,172*sy+j);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2d (ppm+234*sx+i,174*sy+j);
glVertex2d (ppm+249*sx+i,172*sy+j);
glVertex2d (ppm+275*sx+i,165*sy+j);
glVertex2d (ppm+274*sx+i,158*sy+j);
glVertex2d (ppm+243*sx+i,158*sy+j);
glEnd();

glColor3ub(0,0,0);
glBegin(GL_POLYGON);
glVertex2d (ppm+216*sx+i,173*sy+j);
glVertex2d (ppm+203*sx+i,173*sy+j);
glVertex2d (ppm+203*sx+i,157*sy+j);
glVertex2d (ppm+230*sx+i,157*sy+j);
glVertex2d (ppm+230*sx+i,163*sy+j);
glEnd();
}


void car(int c)
{
 if(m<=2800)
     {
         m=m+0.7;
     }
     else
     {
     m=-1700;
     }


    glBegin(GL_POLYGON);
    glVertex2f(m+c+30,50);
    glVertex2f(m+c+60,100);
    glVertex2f(m+c+110,100);
    glVertex2f(m+c+140,50);
    glVertex2f(m+c+170,50);
    glVertex2f(m+c+170,20);
    glVertex2f(m+c,20);
    glVertex2f(m+c,50);
    glEnd();


    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(m+c+40,50);
    glVertex2f(m+c+70,90);
    glVertex2f(m+c+80,90);
    glVertex2f(m+c+80,50);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(m+c+90,90);
    glVertex2f(m+c+100,90);
    glVertex2f(m+c+130,50);
    glVertex2f(m+c+90,50);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    circle(30+c+m,20,15);
    circle(140+c+m,20,15);
    glColor3ub(211, 211, 211);
    circle(30+c+m,20,7);
    circle(140+c+m,20,7);
    glutPostRedisplay();

}



void car3(int i,int j)
{

     if(cm<=3650)
     {
         cm=cm+1.75;
     }
     else
     {
     cm=-850;
     }



    glBegin(GL_POLYGON);               //body
    glVertex2f(cm+0+i,150+j);
    glVertex2f(cm+300+i,150+j);
    glVertex2f(cm+300+i,190+j);
    glVertex2f(cm+220+i,210+j);
    glVertex2f(cm+170+i,250+j);
    glVertex2f(cm+70+i,250+j);
    glVertex2f(cm+50+i,210+j);
    glVertex2f(cm+0+i,190+j);
    glEnd();

    glBegin(GL_POLYGON);       //left glass
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(cm+58+i,209+j);
    glVertex2f(cm+77+i,246+j);
    glVertex2f(cm+118+i,246+j);
    glVertex2f(cm+118+i,209+j);
    glEnd();

    glBegin(GL_POLYGON);          //right glass
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(cm+124+i,246+j);
    glVertex2f(cm+124+i,210+j);
    glVertex2f(cm+208+i,210+j);
    glVertex2f(cm+159+i,246+j);
    glEnd();

    glColor3ub(0,0,0);            //wheel
    circle(cm+60+i,150+j,30);
    circle(cm+240+i,150+j,30);
    glColor3ub(255,255,255);
    circle(cm+60+i,150+j,15);
    circle(cm+240+i,150+j,15);

    glutPostRedisplay();

}


void busb(int i,int j)
{
 if(bbm<=2800)
     {
         bbm=bbm+3.5;
     }
     else
     {
     bbm=-1700;
     }


        glBegin(GL_POLYGON); //body

        glColor3ub (176,196,222);
        glVertex3f(bbm+10+i,0+j,0);
        glVertex3f(bbm+100+i,170+j,0);
        glVertex3f(bbm+600+i,170+j,0);
        glVertex3f(bbm+625+i,75+j,0);
        glVertex3f(bbm+625+i,0+j,0);
        glEnd();

        glBegin(GL_POLYGON); //
        glColor3ub (255,0,0);
        glVertex3f(bbm+20+i,10+j,0);
        glVertex3f(bbm+20+i,160+j,0);
        glVertex3f(bbm+590+i,160+j,0);
        glVertex3f(bbm+615+i,65+j,0);
        glVertex3f(bbm+615+i,10+j,0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub (0,0,205);
        glVertex3f(bbm+60+i,95+j,0);
        glVertex3f(bbm+60+i,145+j,0);
        glVertex3f(bbm+120+i,145+j,0);
        glVertex3f(bbm+120+i,95+j,0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub (0,0,205);
        glVertex3f(bbm+140+i,95+j,0);
        glVertex3f(bbm+140+i,145+j,0);
        glVertex3f(bbm+200+i,145+j,0);
        glVertex3f(bbm+200+i,95+j,0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub (0,0,205);
        glVertex3f(bbm+220+i,95+j,0);
        glVertex3f(bbm+220+i,145+j,0);
        glVertex3f(bbm+280+i,145+j,0);
        glVertex3f(bbm+280+i,95+j,0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub (0,0,205);
        glVertex3f(bbm+300+i,95+j,0);
        glVertex3f(bbm+300+i,145+j,0);
        glVertex3f(bbm+360+i,145+j,0);
        glVertex3f(bbm+360+i,95+j,0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub (0,0,205);
        glVertex3f(bbm+380+i,10+j,0);
        glVertex3f(bbm+380+i,145+j,0);
        glVertex3f(bbm+440+i,145+j,0);
        glVertex3f(bbm+440+i,10+j,0);
        glEnd();

        glLineWidth(15);

        glBegin(GL_LINES);//door window 1
        glColor3ub (173,216,230);
        glVertex3f(bbm+395+i,45+j,0);
        glVertex3f(bbm+395+i,135+j,0);
        glEnd();

        glBegin(GL_LINES);//door window 2
        glColor3ub (173,216,230);
        glVertex3f(bbm+425+i,45+j,0);
        glVertex3f(bbm+425+i,135+j,0);
        glEnd();

        glLineWidth(7);

        glBegin(GL_LINES); //top1
        glColor3ub (11,101,31);
        glVertex3f(bbm+90+i,173+j,0);
        glVertex3f(bbm+170+i,173+j,0);
        glEnd();

        glBegin(GL_LINES);//top2
        glColor3ub (31,251,2);
        glVertex3f(bbm+410+i,173+j,0);
        glVertex3f(bbm+490+i,173+j,0);
        glEnd();

        glBegin(GL_POLYGON); //window 5
        glColor3ub (0,0,205);
        glVertex3f(bbm+460+i,95+j,0);
        glVertex3f(bbm+460+i,145+j,0);
        glVertex3f(bbm+520+i,145+j,0);
        glVertex3f(bbm+520+i,95+j,0);
        glEnd();

        glBegin(GL_POLYGON); //window 6
        glColor3ub (0,0,205);
        glVertex3f(bbm+540+i,95+j,0);
        glVertex3f(bbm+540+i,145+j,0);
        glVertex3f(bbm+590+i,145+j,0);
        glVertex3f(bbm+600+i,95+j,0);
        glEnd();


        glBegin(GL_POLYGON);               //headlight, tailLight, mirror, bumper
        glColor3ub (139,69,19);
        glVertex3f(bbm+i,0+j,0);
        glVertex3f(bbm+i,25+j,0);
        glVertex3f(bbm+80+i,25+j,0);
        glVertex3f(bbm+80+i,0+j,0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub (61,21,2);
        glVertex3f(bbm+565+i,0+j,0);
        glVertex3f(bbm+565+i,25+j,0);
        glVertex3f(bbm+635+i,25+j,0);
        glVertex3f(bbm+635+i,0+j,0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub (255,255,224);
        glVertex3f(bbm+595+i,25+j,0);
        glVertex3f(bbm+595+i,50+j,0);
        glVertex3f(bbm+625+i,50+j,0);
        glVertex3f(bbm+625+i,25+j,0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub (255,255,224);
        glVertex3f(bbm+10+i,25+j,0);
        glVertex3f(bbm+10+i,50+j,0);
        glVertex3f(bbm+35+i,50+j,0);
        glVertex3f(bbm+35+i,25+j,0);
        glEnd();

        glLineWidth(3);

        glBegin(GL_LINES);
        glColor3ub (211,71,41);
        glVertex3f(bbm+605+i,145+j,0);
        glVertex3f(bbm+640+i,143+j,0);
        glEnd();

        glLineWidth(7);

        glBegin(GL_LINES);
        glColor3ub (244,164,96);
        glVertex3f(bbm+640+i,143+j,0);
        glVertex3f(bbm+640+i,115+j,0);
        glEnd();


        glColor3ub (0,0,0);
        circle(bbm+i+150,30,25);
        circle(bbm+i+500,30,25);
        glColor3ub (255,255,255);
        circle(bbm+i+150,30,10);
        circle(bbm+i+500,30,10);

        glutPostRedisplay();

}



void bus(int d)       //bus
{
 if(mp>=-3500)
     {
         mp=mp-1;
     }
     else
     {
     mp=1920;
     }


    glBegin(GL_POLYGON);               //body
    glVertex2f(mp+d+1100,140);
    glVertex2f(mp+d+1360,140);
    glVertex2f(mp+d+1360,260);
    glVertex2f(mp+d+1100,260);
    glEnd();

    glColor3ub (255,255,255);   //all  glass
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1160,140);
    glVertex2f(mp+d+1200,140);
    glVertex2f(mp+d+1200,260);
    glVertex2f(mp+d+1160,260);
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1200,200);
    glVertex2f(mp+d+1240,200);
    glVertex2f(mp+d+1240,260);
    glVertex2f(mp+d+1200,260);
    glEnd();

    glColor3ub (211,211,211);
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1240,200);
    glVertex2f(mp+d+1280,200);
    glVertex2f(mp+d+1280,260);
    glVertex2f(mp+d+1240,260);
    glEnd();

    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1280,200);
    glVertex2f(mp+d+1320,200);
    glVertex2f(mp+d+1320,260);
    glVertex2f(mp+d+1280,260);
    glEnd();

    glColor3ub (211,211,211);
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1320,200);
    glVertex2f(mp+d+1360,200);
    glVertex2f(mp+d+1360,260);
    glVertex2f(mp+d+1320,260);
    glEnd();

    glColor3ub (0,0,0);        //glass
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1160,140);
    glVertex2f(mp+d+1200,140);
    glVertex2f(mp+d+1200,145);
    glVertex2f(mp+d+1160,145);
    glEnd();

     glColor3ub (0,0,0);        //door
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1190,140);
    glVertex2f(mp+d+1200,140);
    glVertex2f(mp+d+1200,260);
    glVertex2f(mp+d+1190,260);
    glEnd();


    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1160,140);
    glVertex2f(mp+d+1170,140);
    glVertex2f(mp+d+1170,260);
    glVertex2f(mp+d+1160,260);
    glEnd();


    glColor3ub (0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1160,260);
    glVertex2f(mp+d+1200,260);
    glVertex2f(mp+d+1200,250);
    glVertex2f(mp+d+1160,250);
    glEnd();

    glColor3ub (211,211,211);
    glBegin(GL_POLYGON);
    glVertex2f(mp+d+1100,200);
    glVertex2f(mp+d+1160,200);
    glVertex2f(mp+d+1160,260);
    glVertex2f(mp+d+1100,260);
    glEnd();

    glColor3ub (0,0,0);             //wheel
    circle(mp+d+1140,140,20);
    circle(mp+d+1320,140,20);
    glColor3ub (255,255,255);
    circle(mp+d+1140,140,10);
    circle(mp+d+1320,140,10);
    glutPostRedisplay();

}

void display(void)
{
glClear (GL_COLOR_BUFFER_BIT);



if(mode==1)
{
glColor3ub (175, 238, 238);   //sky day
}
if(mode==2)
{
glColor3ub (0, 0, 139);  //sky night
}
if(mode==3||mode==4)
{
glColor3ub (105,105,105);  //sky mid-night
}

glBegin(GL_POLYGON);
glVertex2d (0,240);
glVertex2d (1920,240);
glVertex2d (1920,1080);
glVertex2d (0,1080);
glEnd();


if(mode==1)
{
    if(sp<=1080)
     {
         sp=sp+0.3;
     }
     else
     {
     sp=-700;
     }
glColor3ub (255,215,0);     //sun
circle(1800-(2*sp),sp+700,50);


}
if(mode==2)
{
    if(cp<=1080)
     {
         cp=cp+0.3;
     }
     else
     {
     cp=-400;
     }
glColor3ub (255,255,255);   //moon
circle(1800-(2*cp),cp+700,50);
glColor3ub (0,0,139);
circle(1760-(2*cp),cp+740,50);
}

if(mode==3)
{
glColor3ub (255,255,255);   //moon
circle(400,960,50);
glColor3ub (105,105,105);
circle(360,1000,50);
}

if(mode==2||mode==3)                //stars
{
glColor3ub (255, 255, 255);
for(i=1900;i>=0;i-=100)
{
for(j=250;j<=1050;j+=50)
{
circle(i,j,2);
}
}
for(i=1850;i>=0;i-=100)
{
for(j=275;j<=1050;j+=50)
{
circle(i,j,2);
}
}
}


void cloud()
{
    for(i=-200;i>=-1900;i-=600)
     {
     circle(pm+i,1000,25);
     circle(pm+i-45,1000,40);
     circle(pm+i-100,1000,40);
     circle(pm+i-145,1000,25);
     }
}


 if(pm<=3500)                  //cloud
     {
         pm=pm+0.4;
     }
     else
     {
     pm=0;
     }

     if(mode==1)
        {
        glColor3ub (255,255, 255);
        cloud();
        }
        if(mode==2||mode==3||mode==4)
        {
        glColor3ub (160,169,169);
        cloud();
        }

     glutPostRedisplay();

if(mode==1)
{
glColor3ub (0, 191, 255);   //building background day
}
if(mode==2||mode==3||mode==4)
{
glColor3ub (0,0,0);   //building background night
}
glBegin(GL_POLYGON);
glVertex2d (40,700);
glVertex2d (40,820);
glVertex2d (100,820);
glVertex2d (100,240);
glVertex2d (0,240);
glVertex2d (0,700);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (120,240);
glVertex2d (120,860);
glVertex2d (260,860);
glVertex2d (260,240);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (300,240);
glVertex2d (300,700);
glVertex2d (340,700);
glVertex2d (340,740);
glVertex2d (380,740);
glVertex2d (380,880);
glVertex2d (440,880);
glVertex2d (460,860);
glVertex2d (460,240);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (480,240);
glVertex2d (480,820);
glVertex2d (600,820);
glVertex2d (600,240);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (600,240);
glVertex2d (600,660);
glVertex2d (640,660);
glVertex2d (640,700);
glVertex2d (840,700);
glVertex2d (840,660);
glVertex2d (1000,660);
glVertex2d (1000,240);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (1120,240);
glVertex2d (1120,760);
glVertex2d (1260,760);
glVertex2d (1260,740);
glVertex2d (1300,740);
glVertex2d (1300,720);
glVertex2d (1340,720);
glVertex2d (1340,700);
glVertex2d (1380,700);
glVertex2d (1380,680);
glVertex2d (1540,680);
glVertex2d (1540,240);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (1580,240);
glVertex2d (1580,830);
glVertex2d (1760,830);
glVertex2d (1760,240);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (1760,240);
glVertex2d (1760,600);
glVertex2d (1800,600);
glVertex2d (1800,680);
glVertex2d (1880,680);
glVertex2d (1880,600);
glVertex2d (1900,600);
glVertex2d (1900,500);
glVertex2d (1920,500);
glVertex2d (1920,240);
glEnd();

glColor3ub (211,211,211);  //building 1
glBegin(GL_POLYGON);
glVertex2d (140,720);
glVertex2d (180,720);
glVertex2d (180,780);
glEnd();

glColor3ub (245,245,245);
glBegin(GL_POLYGON);
glVertex2d (260,720);
glVertex2d (180,720);
glVertex2d (180,780);
glEnd();

glColor3ub (255,255,255);
glBegin(GL_POLYGON);
glVertex2d (140,720);
glVertex2d (140,700);
glVertex2d (260,700);
glVertex2d (260,720);
glEnd();

glColor3ub (211,211,211);
glBegin(GL_POLYGON);
glVertex2d (140,700);
glVertex2d (260,700);
glVertex2d (260,240);
glVertex2d (140,240);
glEnd();

glColor3ub (245,245,245);
for(i=0;i>=-400;i-=40)
{
glBegin(GL_POLYGON);
glVertex2d (140,680+i);
glVertex2d (260,680+i);
glVertex2d (260,660+i);
glVertex2d (140,660+i);
glEnd();
}

glColor3ub (255,140,0);   //left-2nd building
glBegin(GL_POLYGON);
glVertex2d (1190,240);
glVertex2d (1190,700);
glVertex2d (1290,820);
glVertex2d (1390,700);
glVertex2d (1390,240);
glEnd();

glColor3ub (160,82,45);
circle(1290,740,35);

glColor3ub (255,255,255);
circle(1290,740,30);

glLineWidth(2);
glColor3ub (0,0,0);
glBegin(GL_LINES);   //clock minutes
glVertex2d (1290,740);
glVertex2d (1290,765);
glEnd();

glLineWidth(4);
glColor3ub (0,0,0);
glBegin(GL_LINES);   //clock hours
glVertex2d (1290,740);
if(mode==1||mode==3||mode==4)
{
glVertex2d (1310,740);
}
if(mode==2)
{
glVertex2d (1270,740);
}
glEnd();

if(mode==1||mode==3||mode==4)
{
glColor3ub (0,0,0);
}
if(mode==2)
{
glColor3ub (255,250,205);
}

k=1230;   //window
j=685;
for(i=0;i<=5;i++)
{
glBegin(GL_POLYGON);
glVertex2d (k,j);
glVertex2d (k,j-40);
glVertex2d (k+40,j-40);
glVertex2d (k+40,j);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (k+80,j);
glVertex2d (k+80,j-40);
glVertex2d (k+120,j-40);
glVertex2d (k+120,j);
glEnd();

j=j-80;
}

glColor3ub (255,160,122);   //2nd building
glBegin(GL_POLYGON);
glVertex2d (1400,240);
glVertex2d (1400,700);
glVertex2d (1500,820);
glVertex2d (1600,700);
glVertex2d (1600,240);
glEnd();

glColor3ub (160,82,45);
circle(1500,740,35);

glColor3ub (255,255,255);
circle(1500,740,30);

glLineWidth(2);
glColor3ub (0,0,0);
glBegin(GL_LINES);   //clock minutes
glVertex2d (1500,740);
glVertex2d (1500,765);
glEnd();

glLineWidth(4);
glColor3ub (0,0,0);
glBegin(GL_LINES);   //clock hours
glVertex2d (1500,740);
if(mode==1||mode==3||mode==4)
{
glVertex2d (1520,740);
}
if(mode==2)
{
glVertex2d (1480,740);
}
glEnd();

if(mode==1||mode==3||mode==4)
{
glColor3ub (0,0,0);
}
if(mode==2)
{
glColor3ub (255,250,205);
}

k=1440;   //window
j=685;
for(i=0;i<=5;i++)
{
glBegin(GL_POLYGON);
glVertex2d (k,j);
glVertex2d (k,j-40);
glVertex2d (k+40,j-40);
glVertex2d (k+40,j);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (k+80,j);
glVertex2d (k+80,j-40);
glVertex2d (k+120,j-40);
glVertex2d (k+120,j);
glEnd();

j=j-80;
}

glColor3ub (144,238,144);   //right-2nd building
glBegin(GL_POLYGON);
glVertex2d (1610,240);
glVertex2d (1610,700);
glVertex2d (1710,820);
glVertex2d (1810,700);
glVertex2d (1810,240);
glEnd();

glColor3ub (160,82,45);
circle(1710,740,35);

glColor3ub (255,255,255);
circle(1710,740,30);

glLineWidth(2);
glColor3ub (0,0,0);
glBegin(GL_LINES);   //clock minutes
glVertex2d (1710,740);
glVertex2d (1710,765);
glEnd();

glLineWidth(4);
glColor3ub (0,0,0);
glBegin(GL_LINES);   //clock hours
glVertex2d (1710,740);
if(mode==1||mode==3||mode==4)
{
glVertex2d (1730,740);
}
if(mode==2)
{
glVertex2d (1690,740);
}
glEnd();

if(mode==1||mode==3||mode==4)
{
glColor3ub (0,0,0);
}
if(mode==2)
{
glColor3ub (255,250,205);
}

k=1650;   //window
j=685;
for(i=0;i<=5;i++)
{
glBegin(GL_POLYGON);
glVertex2d (k,j);
glVertex2d (k,j-40);
glVertex2d (k+40,j-40);
glVertex2d (k+40,j);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (k+80,j);
glVertex2d (k+80,j-40);
glVertex2d (k+120,j-40);
glVertex2d (k+120,j);
glEnd();

j=j-80;
}

glColor3ub (255,106,106);   //building 3
circle(300,480,50);
glBegin(GL_POLYGON);
glVertex2d (200,480);
glVertex2d (400,480);
glVertex2d (400,240);
glVertex2d (200,240);
glEnd();

for(i=200;i<=400;i+=180)
{
glBegin(GL_POLYGON);
glVertex2d (i,480);
glVertex2d (i+20,480);
glVertex2d (i+20,500);
glVertex2d (i,500);
glEnd();
}

glColor3ub (255,0,102);
for(i=210;i<=390;i+=110)
{
glBegin(GL_POLYGON);
glVertex2d (i,460);
glVertex2d (i+70,460);
glVertex2d (i+70,240);
glVertex2d (i,240);
glEnd();
}

for(i=510;i>=240;i-=60)
{
glBegin(GL_POLYGON);
glVertex2d (290,i);
glVertex2d (290,i-40);
glVertex2d (310,i-40);
glVertex2d (310,i);
glEnd();
}

glBegin(GL_POLYGON);
glVertex2d (280,500);
glVertex2d (280,480);
glVertex2d (320,480);
glVertex2d (320,500);
glEnd();

if(mode==2)
{
glColor3ub (255,250,205);
}
if(mode==1||mode==3||mode==4)
{
glColor3ub (0,0,0);
}
for(i=450;i>=250;i-=30)
{
for(j=220;j<=270;j+=30)
{
glBegin(GL_POLYGON);
glVertex2d (j,i);
glVertex2d (j,i-20);
glVertex2d (j+20,i-20);
glVertex2d (j+20,i);
glEnd();
}
}

if(mode==2)
{
glColor3ub (255,250,205);
}
if(mode==1||mode==3||mode==4)
{
glColor3ub (0,0,0);
}
for(i=450;i>=250;i-=30)
{
for(j=330;j<=380;j+=30)
{
glBegin(GL_POLYGON);
glVertex2d (j,i);
glVertex2d (j,i-20);
glVertex2d (j+20,i-20);
glVertex2d (j+20,i);
glEnd();
}
}

glColor3ub (255,255,255);  // Building 4
glBegin(GL_POLYGON);
glVertex2d (430,620);
glVertex2d (430,640);
glVertex2d (630,640);
glVertex2d (630,620);
glEnd();

glColor3ub (211,211,211);
glBegin(GL_POLYGON);
glVertex2d (440,240);
glVertex2d (440,620);
glVertex2d (620,620);
glVertex2d (620,240);
glEnd();

for(i=580;i>=240;i-=40)
{
if(mode==1||mode==3||mode==4)
{
glColor3ub (119,136,153);
}
if(mode==2)
{
glColor3ub (255,250,205);
}
glBegin(GL_POLYGON);
glVertex2d (450,i);
glVertex2d (450,i+10);
glVertex2d (610,i+10);
glVertex2d (610,i);
glEnd();
}

glColor3ub (192,21,133);  // Building 5
glBegin(GL_POLYGON);
glVertex2d (740,800);
glVertex2d (690,740);
glVertex2d (790,740);
glEnd();

glColor3ub (255,182,193);
glBegin(GL_POLYGON);
glVertex2d (700,610);
glVertex2d (700,740);
glVertex2d (780,740);
glVertex2d (780,610);
glEnd();

glColor3ub (255,182,193);
glBegin(GL_POLYGON);
glVertex2d (680,460);
glVertex2d (680,610);
glVertex2d (800,610);
glVertex2d (800,460);
glVertex2d (820,460);
glVertex2d (820,240);
glVertex2d (660,240);
glVertex2d (660,460);
glEnd();

for(i=710;i<=770;i+=40)
{
glColor3ub (255,105,180);
glBegin(GL_POLYGON);
glVertex2d (i,720);
glVertex2d (i,610);
glVertex2d (i+20,610);
glVertex2d (i+20,720);
glEnd();
}

for(i=690;i<=790;i+=40)
{
glColor3ub (255,105,180);
glBegin(GL_POLYGON);
glVertex2d (i,600);
glVertex2d (i,460);
glVertex2d (i+20,460);
glVertex2d (i+20,600);
glEnd();
}

for(i=670;i<=810;i+=40)
{
glColor3ub (255,105,180);
glBegin(GL_POLYGON);
glVertex2d (i,250);
glVertex2d (i,450);
glVertex2d (i+20,450);
glVertex2d (i+20,250);
glEnd();
}

glColor3ub (72,209,204);  // Building 6
glBegin(GL_POLYGON);
glVertex2d (880,740);
glVertex2d (1080,740);
glVertex2d (1160,660);
glVertex2d (960,660);
glEnd();

glColor3ub (0,139,139);
glBegin(GL_POLYGON);
glVertex2d (880,740);
glVertex2d (960,660);
glVertex2d (960,240);
glVertex2d (880,240);
glEnd();

glColor3ub (72,209,204);
glBegin(GL_POLYGON);
glVertex2d (960,660);
glVertex2d (1160,660);
glVertex2d (1160,240);
glVertex2d (960,240);
glEnd();
for(i=280;i<=660;i+=60)
{
glColor3ub (32,178,170);
glBegin(GL_POLYGON);
glVertex2d (960,i);
glVertex2d (1160,i);
glVertex2d (1160,i+20);
glVertex2d (960,i+20);
glEnd();
}

glColor3ub (255,255,255);  // Building 7
glBegin(GL_POLYGON);
glVertex2d (1190,550);
glVertex2d (1190,560);
glVertex2d (1510,560);
glVertex2d (1510,550);
glEnd();

glColor3ub (102,205,170);
glBegin(GL_POLYGON);
glVertex2d (1200,240);
glVertex2d (1200,550);
glVertex2d (1500,550);
glVertex2d (1500,240);
glEnd();

for(i=530;i>=240;i-=40)
{
if(mode==1||mode==3||mode==4)
{
glColor3ub (0,139,139);
}
if(mode==2)
{
glColor3ub (255,250,205);
}
glBegin(GL_POLYGON);
glVertex2d (1210,i);
glVertex2d (1210,i-30);
glVertex2d (1490,i-30);
glVertex2d (1490,i);
glEnd();
}

glColor3ub (210,105,30);  // Building 8
glBegin(GL_POLYGON);
glVertex2d (100,460);
glVertex2d (40,420);
glVertex2d (160,420);
glEnd();

glColor3ub (244,164,96);
glBegin(GL_POLYGON);
glVertex2d (50,360);
glVertex2d (50,420);
glVertex2d (150,420);
glVertex2d (150,360);
glVertex2d (170,360);
glVertex2d (170,240);
glVertex2d (30,240);
glVertex2d (30,360);
glEnd();

glColor3ub (210,105,30);
glBegin(GL_POLYGON);
glVertex2d (20,360);
glVertex2d (180,360);
glVertex2d (180,370);
glVertex2d (20,370);
glEnd();

glColor3ub (210,105,30);
glBegin(GL_POLYGON);
glVertex2d (70,240);
glVertex2d (130,240);
glVertex2d (130,320);
glVertex2d (70,320);
glEnd();

glColor3ub (178,34,34);  // Building 9
glBegin(GL_POLYGON);
glVertex2d (1560,400);
glVertex2d (1560,410);
glVertex2d (1840,410);
glVertex2d (1840,400);
glEnd();

glColor3ub (255,215,0);
glBegin(GL_POLYGON);
glVertex2d (1580,400);
glVertex2d (1620,240);
glVertex2d (1780,240);
glVertex2d (1820,400);
glEnd();


glBegin(GL_POLYGON);
glVertex2d (1620,400);
glVertex2d (1620,240);
glVertex2d (1780,240);
glVertex2d (1780,400);
glEnd();

if(mode==1||mode==3||mode==4)
{
glColor3ub (0,0,0);
}
if(mode==2)
{
glColor3ub (255,250,205);
}
for(i=385;i>=300;i-=80)
{
for(j=1630;j<=1730;j+=50)
{
glBegin(GL_POLYGON);
glVertex2d (j,i);
glVertex2d (j,i-60);
glVertex2d (j+40,i-60);
glVertex2d (j+40,i);
glEnd();
}
}

for(i=50;i<=1920;i+=200)   //tree
{
glColor3ub (50,205,50);
glBegin(GL_POLYGON);
glVertex2d (i,340);
glVertex2d (i-30,280);
glVertex2d (i+30,280);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (i,340);
glVertex2d (i-20,320);
glVertex2d (i+20,320);
glEnd();

glColor3ub (178,34,34);
glBegin (GL_LINES);
glVertex2d (i,240);
glVertex2d (i,280);
glEnd();
}

glColor3ub (105,105,105);  //1st border
glBegin(GL_POLYGON);
glVertex2d (0,200);
glVertex2d (1920,200);
glVertex2d (1920,220);
glVertex2d (0,220);
glEnd();


glColor3ub (154,205,50);  //2nd border
glBegin(GL_POLYGON);
glVertex2d (0,220);
glVertex2d (1920,220);
glVertex2d (1920,240);
glVertex2d (0,240);
glEnd();

if(mode==1||mode==2)
{
glColor3ub(255,255,255);
people(0.5,0.5,5,142);
glColor3ub (255,0,255);
people(0.5,0.5,400,142);
glColor3ub (154,205,50);
people(0.5,0.5,800,142);
glColor3ub (143,188,143);
people(0.5,0.5,1500,142);
glColor3ub (123,104,238);
people(0.5,0.5,1750,142);

}


glLineWidth(1);
glColor3ub (0,0,0);   //wire
glBegin(GL_LINES);
glVertex2d (0,360);
glVertex2d (1920,360);
glEnd();
glLineWidth(1);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (0,340);
glVertex2d (1920,340);
glEnd();
glLineWidth(1);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (0,300);
glVertex2d (1920,300);
glEnd();
glLineWidth(1);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (0,320);
glVertex2d (1920,320);
glEnd();
for(i=75;i<=1920;i+=200)
{
glColor3ub (119,136,153);
glBegin(GL_POLYGON);
glVertex2d (i-3,360);
glVertex2d (i-3,200);
glVertex2d (i+3,200);
glVertex2d (i+3,360);
glEnd();
}

for(i=150;i<=1920;i+=200)   //lamp
{
glColor3ub (0,0,0);
glBegin(GL_POLYGON);
glVertex2d (i-2,320);
glVertex2d (i-2,200);
glVertex2d (i+2,200);
glVertex2d (i+2,320);
glEnd();
if(mode==1||mode==4)
{
glColor3ub (255,12,92);
glColor3ub (0,19,255);
glColor3ub (192,192,192);
}
if(mode==2||mode==3)
{
glColor3ub (255,255,0);
}
circle(i,326,10);
}


glColor3ub (169,169,169);  //road
glBegin(GL_POLYGON);
glVertex2d (0,0);
glVertex2d (1920,0);
glVertex2d (1920,200);
glVertex2d (0,200);
glEnd();


for(i=0;i<=1920;i+=60)
{
glColor3ub (255,255,255);   //road lines
glLineWidth(4);
glBegin(GL_LINES);
glVertex2d (i,100);
glVertex2d (40+i,100);
glEnd();
}
if(mode!=3)
{
glColor3ub (222,255,55);
car(0);
glColor3ub (66,255,0);
car(400);

glColor3ub (0,0,255);
car(800);

glColor3ub (211,211,211);
car(1200);

glColor3ub (255,255,255);
car(1600);

glColor3ub (219,112,147);
bus(1600);

glColor3ub (211,215,0);
bus(800);

glColor3ub (255,215,0);
bus(100);

glColor3ub(173,216,230);
car3(-1400,-120);

glColor3ub(255,215,0);
car3(-1800,-120);

busb(-900,27);

}
if(mode==3)
{

    glColor3ub (211,215,0);
    bus(100);
    busb(-900,27);
}
if(mode==3||mode==4)
{
glColor3ub (255,250,205);
glBegin(GL_POLYGON);
glVertex2d (1520,685);
glVertex2d (1520,645);
glVertex2d (1560,645);
glVertex2d (1560,685);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (1650,485);
glVertex2d (1650,525);
glVertex2d (1690,525);
glVertex2d (1690,485);
glEnd();
}

if(mode==1||mode==2)
{
    if(hm>=0)
     {
         hm=hm-0.3;
     }
     else
     {
     hm=1920;
     }

glColor3ub (0,0,0);   //helicopter

circle(hm-220,930,10);

glLineWidth(2);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-240,880);
glVertex2d (hm-230,860);
glEnd();


glLineWidth(2);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-190,880);
glVertex2d (hm-200,860);
glEnd();

glLineWidth(2);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-190,860);
glVertex2d (hm-260,860);
glEnd();

glLineWidth(2);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-260,860);
glVertex2d (hm-270,870);
glEnd();

glColor3ub (255,0,0);
oval(50,30,hm-220,900);
circle(hm-220,900,30);
circle(hm-210,900,30);
circle(hm-200,900,30);

glBegin(GL_POLYGON);
glVertex2d (hm-180,910);
glVertex2d (hm-180,890);
glVertex2d (hm-100,895);
glVertex2d (hm-90,900);
glVertex2d (hm-100,905);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (hm-120,900);
glVertex2d (hm-110,900);
glVertex2d (hm-100,930);
glVertex2d (hm-110,930);
glEnd();

glBegin(GL_POLYGON);
glVertex2d (hm-120,900);
glVertex2d (hm-110,900);
glVertex2d (hm-100,870);
glVertex2d (hm-110,870);
glEnd();

glLineWidth(2);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-220,940);
glVertex2d (hm-220,950);
glEnd();

glLineWidth(4);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-220,950);
glVertex2d (hm-180,950);
glEnd();

glLineWidth(4);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-220,950);
glVertex2d (hm-260,950);
glEnd();

glLineWidth(5);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-245,900);
glVertex2d (hm-245,910);
glEnd();

glLineWidth(5);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-230,900);
glVertex2d (hm-230,910);
glEnd();

glLineWidth(5);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-215,900);
glVertex2d (hm-215,910);
glEnd();

glLineWidth(5);
glColor3ub (0,0,0);
glBegin(GL_LINES);
glVertex2d (hm-200,900);
glVertex2d (hm-200,910);
glEnd();
}



if(mode==4)
{

     if(rmv>=0)
     {
         rmv=rmv-0.07;
     }
     else
     {
     rmv=1080;
     }


for(i=rmv;i>=0;i-=80)
{
    for(j=0;j<=1920;j+=80)
    {
        glLineWidth(1);
        glColor3ub (255,255,255);
        glBegin(GL_LINES);
        glVertex2d (j,i);
        glVertex2d (j,i+40);
        glEnd();
    }
}

for(i=30;i<=1950;i+=100)
{
    glColor3ub (160,169,169);
    circle(i,1020,60);
}

glBegin(GL_POLYGON);
glVertex2d (0,1080);
glVertex2d (0,1020);
glVertex2d (1920,1020);
glVertex2d (1920,1080);
glEnd();

}

glutSwapBuffers();

glFlush ();
}


void init (void)
{
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,1920.0,0.0,1080.0);
}


int main(int argc, char** argv)
{

printf("\t\t\t\tWhat Mode You Want To See :\n\t\t\t\t\t1.Day Mode\n\t\t\t\t\t2.Night Mode\n\t\t\t\t\t3.Mid-Night Mode\n\t\t\t\t\t4.Rain Mode\n");
printf("\n\t\t\tEnter Your Key Number(1/2/3/4) To continue: ");
scanf("%d",&mode);
if(mode==1)
{
sndPlaySound("day.wav", SND_ASYNC | SND_LOOP | SND_FILENAME);
}
if(mode==2)
{
sndPlaySound("night.wav", SND_ASYNC | SND_LOOP | SND_FILENAME);
}
if(mode==3)
{
sndPlaySound("mid-night.wav", SND_ASYNC | SND_LOOP | SND_FILENAME);
}
if(mode==4)
{
sndPlaySound("rain.wav", SND_ASYNC | SND_LOOP | SND_FILENAME);
}
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize (1920, 1080);
glutInitWindowPosition (0, 0);
glutCreateWindow ("City Scenario");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
