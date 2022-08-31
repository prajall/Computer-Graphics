#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void main()
{
 int gd = DETECT, gm;
 initgraph(&gd,&gm,"C:/TC/BGI");

 int i,j=0;

 for(i=0;i<500;i++)
 {
  cleardevice();
  rectangle(550-i,50,600-i,100);
  rectangle(150+(j/1.8),300,200+(j/1.8),350);
  delay(5);
  j++;
 }
 j=0;

 for(i=0;i<350;i++)
 {
  cleardevice();
  rectangle(50,50+i,100,100+i);
  rectangle(450,300-(j/1.8),500,350-(j/1.8));
  delay(5);
  j++;
 }
     //	line(1,1,600,450);


 getch();
 closegraph();

}