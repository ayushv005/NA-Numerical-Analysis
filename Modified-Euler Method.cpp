//Modified-Euler Method
#include<bits/stdc++.h>
using namespace std;

#define F(x,y) (1/(x+y))

int main()
{
	int i=0;
	double x0 = 0, y0 = 1,h = 0.1, y1, temp;

	while(i<3)
	{
		y1 = y0 + h*F(x0, y0);
		y1 = y0 + (h/2.0)*( F(x0, y0)	+ F(x0+h, y1));

		temp=y0;
		y0=y1;
		x0+=h;
		i++;
	}
	cout<<"The answer is:	"<<y1<<endl;

	return 0;
}
