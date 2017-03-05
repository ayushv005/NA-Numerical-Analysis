//Power Method
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a[10][10],v[10],c[10],max=0,temp;
    int n,i,j;

    cout<<"Enter the order of matrix :-"<<endl;
    cin>>n;
    cout<<"Enter Coefficients of matrix :-"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }

    cout<<"Enter your starting vector of order "<<n<<"x1 :-"<<endl;
    for(i=0;i<n;i++)
    cin>>v[i];

    do
    {
        for(i=0;i<n;i++)						// to calc the full c[i]'s
        {
            c[i]=0;
            for(j=0;j<n;j++)         //to calc c[0] and so on
                c[i]+=a[i][j]*v[j];
        }
        for(i=0;i<n;i++)
            v[i]=c[i];
        temp=max;
				max=0;
        for(i=0;i<n;i++)
        {
            if(fabs(v[i])>fabs(max))
                max=v[i];
        }
        for(i=0;i<n;i++)
            v[i]/=max;

    }	while(fabs(max-temp)>0.0001);

    cout<<endl<<"Max Eigen value is : "<<max<<endl;
    cout<<"--------------------------------"<<endl;

    cout<<"Eigen Vector is :-"<<endl;
    for(i=0;i<n;i++)
        cout<<v[i]<<endl;

    return 0;
}
