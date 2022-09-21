#include<graphics.h>
#include<dos.h>
#include<conio.h>

void bounceUp(int a, int n)
{
   int i;
   for (i=0;i<n;i++)
   {
   cleardevice();
   circle(300,200+a-i,50);
   circle(300,200+a-i,100);
   setfillstyle(SOLID_FILL,RED);
   floodfill(300,200+a-i,WHITE);
   line(230,130+a-i,265,165+a-i);
   line(335,235+a-i,370,270+a-i);
   line(365,125+a-i,330,160+a-i);
   line(230,270+a-i,265,235+a-i);
   delay(5);
   }
}

void bounceDown(int a,int n)
{
   int i;
   for (i=0;i<n;i++)
   {
     cleardevice();
     circle(300,200+a+i,50);
     circle(300,200+a+i,100);
     setfillstyle(SOLID_FILL,RED);
     floodfill(300,200+a+i,WHITE);
     line(230,130+a+i,265,165+a+i);
     line(335,235+a+i,370,270+a+i);
     line(365,125+a+i,330,160+a+i);
     line(230,270+a+i,265,235+a+i);
     delay(5);
   }
}

int main()
{

   int gd = DETECT, gm;
   initgraph(&gd,&gm,"C:/TC/BGI");

   bounceDown(0,150);
   bounceUp(150,120);
   bounceDown(30,120);
   bounceUp(150,80);
   bounceDown(70,80);

   getch();
   closegraph();

}
