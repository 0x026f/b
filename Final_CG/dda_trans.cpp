///Pentagon
#include<iostream>
#include<graphics.h>
using namespace std;

void drawline(int x1,int y1 , int x2,int y2 )
{
    cout<<"Enter translating Factor tx and ty  \n ";
    int tx,ty;
    cin>>tx>>ty;

    int p,q,r,z;
    cout<<"Enter Values x1,y1,x2,y2";
    cin>>p>>q>>r>>z;


    x1=p;
    y1=q;
    x2=r;
    y2=z;
    int dx , dy , m ,s;
    float xi , yi , x, y;
    dx = x2-x1;
    dy = y2-y1;

    if(abs(dx)> abs(dy)){
        s = abs(dx);
    }else{
    s = abs(dy);
    }

    xi = dx/(float) s;
    yi = dy/(float) s;

    x = x1;
    y = y1;

    putpixel(x1 , y1, WHITE);

    for(m = 0 ; m< s ; m++){
        x = x + xi;
        y = y + yi;
        putpixel(x,y,WHITE);


        ///translation
        //int tx,ty;
        putpixel(x+tx,y+ty,YELLOW);




    }
}
int main(){
    int n;
int gd = DETECT , gm  , x1,y1,x2,y2,xy;
initgraph(&gd , &gm , NULL);

cout<<"Enter the nuber of sides\n";
cin>>n;


for(int i = 0;i<n;i++)
{
drawline(x1,y1,x2,y2);
}



getch();
closegraph();
return 0;
}


