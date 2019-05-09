#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
class Transformation
{
public:
void trans();
void scal();
void rotate();

};
void axis()
{
    getch();
    cleardevice();
    int maxx,maxy,midx,midy;
    line(midx,0,midx,maxy);
    line(0,midy,maxx,midy);
}
void Transformation :: trans()
{
    int x1=50,x2=50,x3=200,x4=200,x5=80,x6=80,x7=230,x8=230;
    int y1=300,y2=100,y3=100,y4=300,y5=350,y6=150,y7=150,y8=350;
    int xt=80,yt=80;
    setcolor(WHITE);
    rectangle(x5,y5,x7,y7);
    rectangle(x1,y1,x3,y3);
    line(x1,y1,x5,y5);
    line(x2,y2,x6,y6);
    line(x3,y3,x7,y7);
    line(x4,y4,x8,y8);
    delay(1000);
    rectangle(x5+xt,y5+yt,x7+xt,y7+yt);
    rectangle(x1+xt,y1+yt,x3+xt,y3+yt);
    line(x1+xt,y1+yt,x5+xt,y5+yt);
    line(x2+xt,y2+yt,x6+xt,y6+yt);
    line(x3+xt,y3+yt,x7+xt,y7+yt);
    line(x4+xt,y4+yt,x8+xt,y8+yt);
    delay(1000);
}
void Transformation :: scal()
{

    int x1=50,x2=50,x3=200,x4=200,x5=80,x6=80,x7=230,x8=230;
    int y1=300,y2=100,y3=100,y4=300,y5=350,y6=150,y7=150,y8=350;
    float xt=1.2,yt=1.2;
    setcolor(WHITE);
    rectangle(x5,y5,x7,y7);
    rectangle(x1,y1,x3,y3);
    line(x1,y1,x5,y5);
    line(x2,y2,x6,y6);
    line(x3,y3,x7,y7);
    line(x4,y4,x8,y8);
    delay(1000);
    rectangle(x5*xt,y5*yt,x7*xt,y7*yt);
    rectangle(x1*xt,y1*yt,x3*xt,y3*yt);
    line(x1*xt,y1*yt,x5*xt,y5*yt);
    line(x2*xt,y2*yt,x6*xt,y6*yt);
    line(x3*xt,y3*yt,x7*xt,y7*yt);
    line(x4*xt,y4*yt,x8*xt,y8*yt);
    delay(1000);
}
void Transformation :: rotate()
{
    int x,y,z,o,x11,x22,y11,y22;
    int maxx,maxy,midx,midy;
    maxx=getmaxx();
    maxy=getmaxy();
    midx=maxx/2;
    midy=maxy/2;
    axis();
    bar3d(midx+50,midy-100,midx+60,midy-90,5,1);
    cout<<"Enter rotating angle";
    cin>>o;
    x11=50*cos(o*3.14/180)-100*sin(o*3.14/180);
    y11=50*sin(o*3.14/180)+100*cos(o*3.14/180);
    x22=60*cos(o*3.14/180)-90*sin(o*3.14/180);
    y22=60*sin(o*3.14/180)+90*cos(o*3.14/180);
    axis();
    cout<<"After rotation about z axis";

    bar3d(midx+x11,midy-y11,midx+x22,midy-y22,5,1);
    axis();
    cout<<"After rotation about x axis";
    bar3d(midx+50,midy-x11,midx+60,midy-x22,5,1);
    axis();
    cout<<"After rotation about yaxis";
    bar3d(midx+x11,midy-100,midx+x22,midy-90,5,1);
}
int main()
{
int ch;
Transformation t;
cout<<"\n 1.Translation \n 2.Scaling \n 3.Rotation \n 4.Exit";
cout<<"\nEnter your choice:";
cin>>ch;
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
do{
switch(ch)
{
case 1:
t.trans();
getch();
closegraph();
break;
case 2:
t.scal();
getch();
closegraph();
break;
case 3:
t.rotate();
getch();
closegraph();
break;
case 4:
cout<<"Exit";

}
}
while(ch>4);
return 0;
}
