//Neville's Algorithm
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n=5;
	/*cout<<"Enter the no. of data points :"<<endl;
	cin>>n;
	cout<<"Enter (x,y) co-ordinates of data points :"<<endl;	*/
	double p,x[n],y[n],F[n][n],result=0;

	/*for(i=0;i<n;i++)
		cin>>x[i]>>F[i][0];
	cout<<"Enter the value of x for which P(x) is to be calculated :"<<endl;
	cin>>p;		*/


	x[0]=-2;	F[0][0]=-15;
	x[1]=-1;	F[1][0]=-4;
	x[2]=1;		F[2][0]=0;
	x[3]=3;		F[3][0]=20;
	x[4]=4;	F[4][0]=-39;
	p=1.5;

	for (i = 1; i < n; i++)
	{
    	for (j = 1; j <= i; j++)
		{
        	F[i][j] = ((p - x[i - j])*(F[i][j - 1])
                        - (p - x[i])*(F[i - 1][j - 1]))/(x[i] - x[i - j]);
    	}
	}

	cout<<"The value of P(x) obtained : "<<F[n-1][n-1]<<endl;

	return 0;
}
