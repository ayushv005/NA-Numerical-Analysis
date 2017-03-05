//Gauss Multiplication
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k,n;
	cout<<"Enter order of matrix."<<endl;
	cin>>n;

	float a[n+1][n+2],x[n+1],sum;
	cout<<"Enter the matrix data"<<endl;

	for(i=1;i<n+1;i++)
	{

		for(j=1;j<n+2;j++)
		cin>>a[i][j];
	}
	// upper t matrix

	for(k=1;k<n+1;k++)
	{
		for(i=k+1;i<n+1;i++)
		{
			float yo = a[i][k]/a[k][k];
			for(j=k;j<n+2;j++)
			{
				a[i][j]=a[i][j]-a[k][j]*yo;
			}
		}
	}

	x[n]=a[n][n+1]/a[n][n];

	for(k=n-1;k>0;k--)
	{
		sum=0;
		for(j=k+1;j<n+1;j++)
		{
			sum=sum+a[k][j]*x[j];
			x[k]=(1/a[k][k])*(a[k][n+1]-sum);
		}
	}

	for(i=1;i<n+1;i++)
	{

		for(j=1;j<n+2;j++)
		cout<<a[i][j]<<"	";

		cout<<endl;
	} cout<<endl;

	for(i=1;i<n+1;i++)
		{
			cout<<"\t"<<x[i]<<endl;
		}
}
