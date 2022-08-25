#include<graphics.h>
#include<dos.h>
#include<conio.h>

void main()
{
 int gd=DETECT, gm;
 initgraph(&gd,&gm,"C:/TC/BGI");
 int i;

 for(i=0;i<500;i++)
 {
  cleardevice();
  rectangle(10+i,50,60+i,100);
  setfillstyle(SOLID_FILL,RED);
  floodfill(11+i,51,255);
  delay(5);
 }
 for(i=0;i<300;i++)
 {
  cleardevice();
  rectangle(510,50+i,560,100+i);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(511,51+i,255);
  delay(5);
 }
  for(i=0;i<=500;i++)
 {
  cleardevice();
  rectangle(510-i,350,560-i,400);
  setfillstyle(SOLID_FILL,YELLOW);
  floodfill(511-i,351,255);
  delay(5);
 }
 for(i=0;i<=300;i++)
 {
  cleardevice();
  rectangle(10,350-i,60,400-i);
  setfillstyle(SOLID_FILL,BLUE);
  floodfill(11,351-i,255);
  delay(5);
 }





 getch();
 closegraph();


}