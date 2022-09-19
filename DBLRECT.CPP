#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main()
{
 int gd = DETECT, gm;
 initgraph(&gd,&gm,"C:/TC/BGI");

 int i,j=0;

 for(i=0;i<400;i++)
 {
  cleardevice();
  rectangle(500-i,1,550-i,50);
  setfillstyle(SOLID_FILL,RED);
  floodfill(501-i,2,WHITE);
  rectangle(200+(j/2),300,250+(j/2),350);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(201+(j/2),301,WHITE);
  delay(5);
  j++;
 }
 
 j=0;
 for(i=0;i<400;i++)
 {
  cleardevice();
  rectangle(100,1+i,150,50+i);
  setfillstyle(SOLID_FILL,RED);
  floodfill(101,2+i,WHITE);
  rectangle(400,300-(j/2),450,350-(j/2));
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(401,301-(j/2),WHITE);
  delay(5);
  j++;
 }
 
 j=0;
 for(i=0;i<400;i++)
 {
  cleardevice();
  rectangle(100+i,400,150+i,450);
  setfillstyle(SOLID_FILL,RED);
  floodfill(101+i,401,WHITE);
  rectangle(400-(j/2),100,450-(j/2),150);
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(401-(j/2),101,WHITE);
  delay(5);
  j++;
 }
  j=0;
 for(i=0;i<400;i++)
 {
  cleardevice();
  rectangle(500,400-i,550,450-i);
  setfillstyle(SOLID_FILL,RED);
  floodfill(501,401-i,WHITE);
  rectangle(200,100+(j/2),250,150+(j/2));
  setfillstyle(SOLID_FILL,GREEN);
  floodfill(201,101+(j/2),WHITE);
  delay(5);
  j++;
 }
 
 getch();
 closegraph();

}
