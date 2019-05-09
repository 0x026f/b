#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{

	int i;
	float u;
	float px[4],py[4],cx,cy;

	for(i=0;i<=3;i++)
	{
		cout<<"enter the co-ordinate of px";
		cin>>px[i];
		cout<<"enter the co-ordinate of py";
		cin>>py[i];
	}
	initgraph(&gd,&gm,NULL);
	for(u=0.0;u<=1.0;u=u+0.005)
	{
		cx=(px[0]*pow(1-u,3))+(3*px[1]*u*pow(1-u,2))+(3*px[2]*pow(u,2)*(1-u))+(px[3]*pow(u,3));
		cy=(py[0]*pow(1-u,3))+(3*py[1]*u*pow(1-u,2))+(3*py[2]*pow(u,2)*(1-u))+(py[3]*pow(u,3));
		putpixel(cx,cy,15);
	}
	getch();
	closegraph();
	return 0;
}

