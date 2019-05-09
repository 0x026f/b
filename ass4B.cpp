#include<iostream>
#include<graphics.h>

using namespace std;
void floodFill(int x,int y,int o_color,int n_color)
{
	if(getpixel(x,y) == o_color)
	{
		putpixel(x,y,n_color);
		floodFill(x+1,y,o_color,n_color);
		floodFill(x,y+1,o_color,n_color);
		floodFill(x-1,y,o_color,n_color);
		floodFill(x,y-1,o_color,n_color);
		floodFill(x+1,y+1,o_color,n_color);
		floodFill(x-1,y+1,o_color,n_color);
		floodFill(x+1,y-1,o_color,n_color);
		floodFill(x-1,y-1,o_color,n_color);
		
	}
}
int main()
{
	int gm,gd=DETECT,radius;
	int x,y;
	initgraph(&gd,&gm,NULL);
	int top, left, bottom, right; 
  
	top = left = 100; 
	bottom = right = 300; 
	rectangle(left, top, right, bottom); 
	floodFill(110, 110, BLACK, BLUE);    
   getch(); 
	closegraph();
	return 0;
}
