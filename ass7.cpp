#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class merge{
	public:
	int x11,y11,x22,y22,x33,y33,tx,ty,x1,x2,x3,y1,y2,y3,sx,sy,a;

	void translation(){
		cout<<"\nEnter 1st Co-ordinates of triangle : ";
		cin>>x1>>y1;
		cout<<"\nEnter 2nd Co-ordinates of triangle : ";
		cin>>x2>>y2;
		cout<<"\nEnter 3rd Co-ordinates of triangle : ";
		cin>>x3>>y3;
		cout<<"\nEnter Value of tx and ty : ";
		cin>>tx>>ty;
		line(x1,y1,x2,y2);
		line(x2,y2,x3,y3);
		line(x3,y3,x1,y1);

		x11 = x1 + tx;
		y11 = y1 + ty;
		x22 = x2 + tx;
		y22 = y2 + ty;
		x33 = x3 + tx;
		y33 = y3 + ty;

		line(x11,y11,x22,y22);
                line(x22,y22,x33,y33);
                line(x33,y33,x11,y11);
	}

	void rotation(){
		cout<<"\nEnter 1st Co-ordinates of triangle : ";
            cin>>x1>>y1;
            cout<<"\nEnter 2nd Co-ordinates of triangle : ";
            cin>>x2>>y2;
            cout<<"\nEnter 3rd Co-ordinates of triangle : ";
            cin>>x3>>y3;
            cout<<"\nEnter Value of tx and ty : ";
            cin>>tx>>ty;
		cout<<"\nEnter value of angle theta : ";
		cin>>a;
		line(x1,y1,x2,y2);
        line(x2,y2,x3,y3);
        line(x3,y3,x1,y1);

		x11 = x1*cos(a) - y1*sin(a) - tx*cos(a) + ty*sin(a) + tx;
		y11 = x1*sin(a) + y1*cos(a) - tx*sin(a) - ty*sin(a) + ty;
		x22 = x2*cos(a) - y2*sin(a) - tx*cos(a) + ty*sin(a) + tx;
        y22 = x2*sin(a) + y2*cos(a) - tx*sin(a) - ty*sin(a) + ty;
		x33 = x3*cos(a) - y3*sin(a) - tx*cos(a) + ty*sin(a) + tx;
        y33 = x3*sin(a) + y3*cos(a) - tx*sin(a) - ty*sin(a) + ty;

		line(x11,y11,x22,y22);
        line(x22,y22,x33,y33);
        line(x33,y33,x11,y11);


	}

	void scaling(){
		cout<<"\nEnter the Co-ordinates of triangle : ";
		cin>>x1>>y1;
		cout<<"\nEnter 2nd Co-ordinates of triangle : ";
                cin>>x2>>y2;
                cout<<"\nEnter 3rd Co-ordinates of triangle : ";
                cin>>x3>>y3;
                cout<<"\nEnter Value of sx and sy : ";
                cin>>sx>>sy;
		line(x1,y1,x2,y2);
                line(x2,y2,x3,y3);
                line(x3,y3,x1,y1);

		x11 = sx*x1;
		y11 = sy*y1;
		x22 = sx*x2;
                y22 = sy*y2;
		x33 = sx*x3;
                y33 = sy*y3;

		line(x11,y11,x22,y22);
                line(x22,y22,x33,y33);
                line(x33,y33,x11,y11);

	}

};

int main(){
	merge m;
	int ch;
	cout<<"\n1. Translation\n2. Rotation\n3. Scaling";
	cin>>ch;
	int gd = DETECT, gm;
	initgraph(&gd,&gm, NULL);
	switch(ch){
	case 1: m.translation();
	break;
	case 2: m.rotation();
	break;
	case 3: m.scaling();
	break;
	default: cout<<"Invalid Choice";
	break;
	}
	getch();
	closegraph();

	return 0;
}
