#include<graphics.h>
#include<conio.h>
#include<dos.h>

void main()
{
 int x=0,y,r=100,p;
 y=r;
 p = 1-r;

 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:/TC/BGI");

 while(x<=y)
 {
  putpixel(200+x,250+y,RED);
  putpixel(200-x,250+y,RED);
  putpixel(200+x,250-y,RED);
  putpixel(200-x,250-y,RED);
  putpixel(200+y,250+x,RED);
  putpixel(200-y,250+x,RED);
  putpixel(200+y,250-x,RED);
  putpixel(200-y,250-x,RED);


  if (p<0)
   p = p+(2*x)+3;
  else
  {
   p = p + 2*(x-y) + 5;
   y = y - 1;
  }
  x++;
 }

 getch();
 closegraph();

}
