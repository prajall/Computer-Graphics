#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<math.h>
#define pi 22/7

void main()
{
 int h = 80, k = 100, r = 60;
 int x=0,y,i;

 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:/TC/BGI");
 
 End = pi/4;
 angle = 0;
 
 while(angle<=End){
 
 	x = r*cos(angle);
 	y = r*sin(angle);
 	
 	putpixel(x+h,y+k,RED);
 	putpixel(y+h,x+k,RED);
 	putpixel(-y+h,x+k,RED);
 	putpixel(-x+h,yk,RED);
 	putpixel(-x+h,-y+k,RED);
 	putpixel(-y+h,-x+k,RED);
 	putpixel(y+h,-x+k,RED);
 	putpixel(x+h,-y+k,RED);
 	
 	angle+=i;
 	
 }
	getch();
	closegraph();
}
