//Newton's Divided Difference
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n;
	cout<<"Enter the total no. of data points :"<<endl;
	cin>>n;
	cout<<"Enter (x,y) co-ordinates of data points :"<<endl;
	double p,x[n],y[n],l[n],result=0;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	cout<<"Enter the value of x for which P(x) is to be calculated :"<<endl;
	cin>>p;

	for(i=0;i<n;i++)
	{
		l[i]=1;
		for(j=0;j<n;j++)
		{
			if(j!=i)
			l[i]*=(p-x[j])/(x[i]-x[j]);
		}
	}

	for(i=0;i<n;i++)
	result=result+l[i]*y[i];

	cout<<"The value of P(x) obtained : "<<result<<endl;

	return 0;
}
