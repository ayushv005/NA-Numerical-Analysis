//Composite Trapezoidal and Simpson's 1/3 Method
#include<bits/stdc++.h>
using namespace std;

#define F(x) (sqrt(1+4*x*x/(pow((2+x*x*x*x+2*x*x),2))))
#define G(x) (cos(x)*cos(x))

int main()
{
	float a,b,h,ans,ans1;
	int i,n;

	cout<<"Enter 'a' and 'b' (interval) for the integral -"<<endl;
	cin>>a;
	cin>>b;
	cout<<"Enter no. of parts for interval to be divide into :-"<<endl;
	cin>>n;


	h=(b-a)/n;
	//trapezoidal method
	ans=h*(F(a)+F(b))/2;
	for(i=1;i<n;i++)
			ans+=h*F(a+i*h);
	cout<<"The answer (trapezoidal) is : ";
	cout<<ans<<endl;

//simpsons 1/3
ans1=h*(F(a)+F(b))/3;
for(i=1;i<n;i+=2)
			ans1+=4*h*F(a+i*h)/3;
for(i=2;i<n;i+=2)
			ans1+=2*h*F(a+i*h)/3;
cout<<"The answer (Simpson's 1/3) is : ";
	cout<<ans1;
}
