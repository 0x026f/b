#include<graphics.h>
#include<iostream>
using namespace std;

void drawcircle1(int x0,int y0,int r)
{
	int x=r;
	int y=0;
	int p=1 - r;;

	while(x>=y)
	{
	putpixel(x0 + x,y0 + y, GREEN);
	putpixel(x0 + y,y0 + x, GREEN);
	putpixel(x0 - y,y0 + x, GREEN);
	putpixel(x0 - x,y0 + y, GREEN);
	putpixel(x0 - x,y0 - y, GREEN);
	putpixel(x0 - y,y0 - x, GREEN);
	putpixel(x0 + y,y0 - x, GREEN);
	putpixel(x0 + x,y0 - y, GREEN);
	if(p<=0)
	{
	y=y+1;
	p=p+2*y+1;
	}

	if(p>0)
	{
	x=x-1;
	p=p-2*x+1;
	}
	}
}

int main()
{
int gd = DETECT,gm,p,x,y,r;
initgraph(&gd,&gm,NULL);

cout<<"Enter the radius of circle:";
cin>>r;
cout<<"Enter the coordinates of the circle:";
cin>>x>>y;

drawcircle1(x,y,r);

getch();
return 0;
}
