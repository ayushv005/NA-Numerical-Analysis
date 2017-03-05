//Newton's Method
#include <iostream>
#include <math.h>
using namespace std;

#define F(x) (x*x*x-x*x-x+1)
#define G(x) (3*x*x-2*x-1)
#define H(x) (8*sin(x)+4*x*cos(x)-4*cos(2*x)+4)
#define Y(x) (2*x-1.732*x*x)
#define tol 0.001

int main()
{
	int i=1;
	long double p0=1.0,p;
	cout<<"Enter the value of p0"<<endl;
	cin>>p0;

	p=p0-F(p0)/G(p0);

	while(fabs(p-p0)>tol)
	{
		p0=p;
		p=p0-F(p0)/G(p0);
		cout<<p0<<"	"<<p<<endl;
		i++;
	}

	cout<<"The root is "<<p<<endl;
	cout<<"The no. of iterations is/are "<<i<<endl;
	return 0;
}
