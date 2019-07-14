#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flodfill(int x,int y,int f,int o)
{
  if(getpixel(x,y)==o)
  {
     putpixel (x,y,f);
     delay(1.3);
     flodfill(x+1,y,f,o);
     flodfill(x,y+1,f,o);
     flodfill(x+1,y+1,f,o);
     flodfill(x-1,y-1,f,o);
     flodfill(x-1,y,f,o);
     flodfill(x,y-1,f,o);
     flodfill(x-1,y+1,f,o);
     flodfill(x+1,y-1,f,o);
  }
}
void main()
{
    int gd=DETECT,gm; int i;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    setbkcolor(WHITE);
    setcolor(RED);
    settextstyle(1,0,4);
    outtextxy(170,130,"FLOOD FILL ALGORITHM");
    setcolor(BLUE);

    for(i=0;i<=180;i=i+20)
    {
	  rectangle(200+i,200,240+i,220);
	   rectangle(200+i,220,240+i,240);
	   rectangle(200+i,240,240+i,260);
	   rectangle(200+i,260,240+i,280);
	   rectangle(200+i,280,240+i,300);
	   rectangle(200+i,300,240+i,320);
	   rectangle(200+i,320,240+i,340);
	   rectangle(200+i,340,240+i,360);
	   rectangle(200+i,360,240+i,380);
	   rectangle(200+i,380,240+i,400);
	   rectangle(200+i,400,240+i,420);
    }
    for(i=0;i<=200;i=i+40)
    {
	   flodfill(201+i,221,YELLOW,0);
	   flodfill(201+i,261,YELLOW,0);
	   flodfill(201+i,301,YELLOW,0);
	   flodfill(201+i,341,YELLOW,0);
	   flodfill(201+i,381,YELLOW,0);
    }
    for(i=20;i<=200;i=i+40)
    {
	   flodfill(201+i,201,LIGHTGREEN,0);
	   flodfill(201+i,241,LIGHTGREEN,0);
	   flodfill(201+i,281,LIGHTGREEN,0);
	   flodfill(201+i,321,LIGHTGREEN,0);
	   flodfill(201+i,361,LIGHTGREEN,0);
	   flodfill(201+i,401,LIGHTGREEN,0);
    }
  getch();
  closegraph();

}
