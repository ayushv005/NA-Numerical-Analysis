//Runge-Kutta Method
#include<bits/stdc++.h>
using namespace std;

#define F(x,y) (1/(x+y))

int main()
{
	int i=0;
	double x0 = 0, y0 = 1,h = 0.1, y1, k1, k2, k3, k4;

	y1=y0;

	while(i!=3)
	{
		y0=y1;

		k1 = h*F(x0,y0);
		k2 = h*F(x0 + h/2, y0 + k1/2);
		k3 = h*F(x0 + h/2, y0 + k2/2);
		k4 = h*F(x0 + h, y0 + k3);

		y1 = y0 + (1/6.0)*(k1 + 2*k2 + 2*k3 + k4);

		x0+=0.1;
		i++;
	}

	cout<<"The answer is :-	"<<y1;

	return 0;
}
