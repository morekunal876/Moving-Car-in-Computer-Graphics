

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.75

void Rain(int x);
void main()
{
	int gm,i;
       int x=0;
	int gd=DETECT;
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	for(i=0;i<500;i++)
	{

		Rain(x);

		line(50+i,370,90+i,370);
		arc(110+i,370,0,180,20);
		line(130+i,370,220+i,370);
		arc(240+i,370,0,180,20);
		line(260+i,370,300+i,370);
		ellipse(300+i,350,270,90,10,20);
		ellipse(270+i,330,0,180,30,4);
		line(240+i,330,200+i,300);
		ellipse(155+i,300,0,180,45,10);
		arc(155+i,290,0,180,10);
		line(110+i,300,80+i,330);
	       ellipse(65+i,330,0,180,16,4);
		ellipse(50+i,349,90,270,8,20);
 //		arc(50+i,365,90,270,5);


		line(165+i,305,165+i,330);
		line(165+i,330,230+i,330);
		line(230+i,330,195+i,305);
		line(195+i,305,165+i,305);
		circle(190+i,317,7);
		line(190+i,324,200+i,330);
		line(190+i,324,180+i,330);
	  //	floodfill(170+i,300,WHITE);

		line(160+i,305,160+i,330);
		line(160+i,330,95+i,330);
		line(95+i,330,120+i,305);
		line(120+i,305,160+i,305);


		circle(110+i,370,17);
		circle(110+i,370,5);
		circle(240+i,370,17);
		circle(240+i,370,5);




		line(0,390,639,390);
       //	floodfill(38-i,28,BLUE);
     ellipse(40-i,30,60,240,10,15);
     ellipse(65-i,20,345,165,20,15);
     ellipse(105-i,27,340,160,20,15);
     ellipse(109-i,42,230,50,20,10);
     ellipse(66-i,46,163,340,31,17);
    // floodfill(448-i,28,BLUE);
     ellipse(450-i,30,60,240,10,15);
     ellipse(475-i,20,345,165,20,15);
     ellipse(512-i,27,340,160,20,15);
     ellipse(518-i,42,230,50,20,10);
     ellipse(476-i,46,163,340,31,15);
     delay(10);

     if(i==470)
     {
	i=0;
     }


		clearviewport();
		cleardevice();
	}
	getch();
	closegraph();
}
void Rain(int x)
{
	int i,rx,ry;
	for(i=0;i<400;i++)
	{
		rx=rand() % ScreenWidth;
		ry=rand() % ScreenHeight;
		if(ry<GroundY-4)
		{
			if(ry<GroundY-120 || (ry>GroundY-120 && (rx<x-20 || rx>x+60)))
			line(rx,ry,rx+0.5,ry+4);
		}
	}
}