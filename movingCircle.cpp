#include<graphics.h>
#include<dos.h>
#include<conio.h>

int main()
{
  int gd=DETECT, gm;
  initgraph(&gd,&gm,"C:/TC/BGI");

   for(int i=100; i<540; i++)
   {
      circle(i,200,100);
      delay(10);
      cleardevice();
   }

    getch();
    closegraph();
}
