#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>

void bounceDown(int x, int y, int r, int limit){
	int i;
	for(i=0;i<limit;i++)
	{
		cleardevice();
	  	circle(x,y+i,r);
	  	setfillstyle(1,RED);
	  	floodfill(x+1,y+1+i,WHITE);
	  	delay(5);	  
	}
}
void bounceUp(int x, int y, int r, int limit){
	int i;
	for(i=0;i<limit;i++)
	{
		cleardevice();
	  	circle(x,y-i,r);
	  	setfillstyle(1,RED);
	  	floodfill(x+1,y+1-i,WHITE);
	  	delay(1);
	}
}

int main()
{
 	int gd=DETECT,gm,i,k;
 	initgraph(&gd,&gm,"C:/TC/BGI");
	
	bounceDown(300,100,50,300);
	bounceUp(300,400,50,225);	
	bounceDown(300,175,50,225);
	bounceUp(300,400,50,150);
	bounceDown(300,250,50,150);
	
 	getch();
 	closegraph();


}
