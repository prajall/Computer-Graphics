#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:/TC/BGI");

 circle(200,200,99);
 circle(200,200,200);
 line(270,130,340,60);
 line(56,336,124,266);
 line(130,130,60,60);
 line(270,270,335,335);

 line(300,200,400,200);
 line(200,100,200,0);
 line(0,200,100,200);
 line(200,300,200,400);


 getch();
 closegraph();

}