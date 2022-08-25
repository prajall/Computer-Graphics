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
  rectangle(10+i,300,60+i,350);
  setfillstyle(SOLID_FILL,RED);
  floodfill(11+i,301,255);
  cleardevice();
  delay(5);
 }
 for(i=500;i>=10;i--)
 {
  rectangle(10+i,300,60+i,350);
  setfillstyle(SOLID_FILL,RED);
  floodfill(11+i,301,255);
  cleardevice();
  delay(5);
 }

 for(i=0;i<500;i++){
  rectangle(10+i,300,60+i,350);
  setfillstyle(SOLID_FILL,RED);
  floodfill(11+i,301,255);
  cleardevice();
  delay(5);
 }


 getch();
 closegraph();


}