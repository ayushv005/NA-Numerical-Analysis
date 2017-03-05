//Fixed Point Method
#include <iostream>
#include <math.h>
using namespace std;

#define G1(x) (x-x*x*x-4*x*x+10)
#define G2(x) (x-(1/4*x)+(1/tan(x)))
#define G3(x) (acos(-x*x/10))
#define tol 0.0001

int main()
{
	int i=1;
	long double x0,x1;
	cout<<"Enter the initial guess x0 :-"<<endl;
	cin>>x0;

	x1=G3(x0);
	while(fabs(x1-x0)>tol)
	{
		x0=x1;
		x1=G3(x0);
		cout<<"x0: "<<x0<<" x1: "<<x1<<endl;
		++i;
	}

	cout<<"The root is "<<x1<<endl;
	cout<<"The no. of iterations is/are "<<i<<endl;
	return 0;
}
