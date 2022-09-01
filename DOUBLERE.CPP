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
  rectangle(200+(j/2),300,250+(j/2),350);
  delay(5);
  j++;
 }
 
 j=0;
 for(i=0;i<400;i++)
 {
  cleardevice();
  rectangle(100,1+i,150,50+i);
  rectangle(400,300-(j/2),450,350-(j/2));
  delay(5);
  j++;
 }
 
 j=0;
 for(i=0;i<400;i++)
 {
  cleardevice();
  rectangle(100+i,400,150+i,450);
  rectangle(400-(j/2),100,450-(j/2),150);
  delay(5);
  j++;
 }
  j=0;
 for(i=0;i<400;i++)
 {
  cleardevice();
  rectangle(500,400-i,550,450-i);
  rectangle(200,100+(j/2),250,150+(j/2));
  delay(5);
  j++;
 }
 
 getch();
 closegraph();

}
