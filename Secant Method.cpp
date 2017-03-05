//Secant Method
#include<iostream>
#include<math.h>
using namespace std;
#define F(x) cos(x)-x*exp(x)
#define G(x) x*x-17
#define tol 0.0001
int main()
{
int i=0;
float x0,x1,x2;
double q0,q1;
cout<<"Enter the values of x0 and x1"<<endl;
cin>>x0;
cin>>x1;

while(fabs(x0-x1)>tol)
{
q0=F(x0);
q1=F(x1);

x2=x1-(q1*(x1-x0))/(q1-q0);

x0=x1;
x1=x2;
i++;
}
cout<<"The root is "<<x1<<endl;
cout<<"No. of iteration are "<<i<<endl;
return 0;
}
