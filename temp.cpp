#include <graphics.h>
#include <iostream>
#include <math.h>
using namespace std;

int main( )
{
    float x,y,x1,y1,r,dx,dy;
    int i,gd=DETECT,gm;

    initgraph(&gd,&gm,NULL);

    cout<<"Enter the Center of circle -- x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"Enter the Redius : ";
    cin>>r;

    x = 0;
    y = r;

    int p = 1 - r;

    while(y>=x){

        x += 1;
        if(p>=0){
            y -= 1;
            p = p + 2*x - 2*y + 1;
        }
        else{
            p = p + 2*x +1;
        }

        putpixel(x1+x,y1+y,5);
        putpixel(x1-x,y1+y,5);
        putpixel(x1+x,y1-y,5);
        putpixel(x1-x,y1-y,5);
        putpixel(x1+y,y1+x,5);
        putpixel(x1-y,y1+x,5);
        putpixel(x1+y,y1-x,5);
        putpixel(x1-y,y1-x,5);
        delay(50);
    }


    delay(5000);
    closegraph();
    return 0;
}

