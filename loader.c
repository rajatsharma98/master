#inlude<iosteeam.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 void main()
 {
 	int x=170,i,gdriver=DETECT,gmode;
 	initgrapg(&gdriver,&gmode,"c:\tc\bgi");
 	settextstyle(DEFAUT_FONT,HORIZ_DIR,2);
 	outtextxy(170,180,"LOADING,PLEASE WAIT");
 	for(i=0;i<300;++i)
 	{
 		delay(30);
 		line(x,200,x,220);
 		x++;
 		
 	}
 	
 	getch();
 	
 	closegraph();
 	
 	
 }
