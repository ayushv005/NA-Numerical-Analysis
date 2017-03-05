//Bisection Method
#include<bits/stdc++.h>
using namespace std;

#define F(x) (x*x - 4)
#define e 0.001

int main()
{
  int i;
  float a,b,c;
  double p,q,r;
  cout<<"Enter values of a and b"<<endl;
  cin>>a>>b;

  do {
    c=(a+b)/2;
    p=F(a);
    q=F(b);
    r=F(c);

    if(r*r<0)
      b=c;
    else
      a=c;
    i++;
  } while(fabs(a-b)>=e);

  cout<<"The root is : "<<c<<endl;
  cout<<"No. of iterations are : "<<i<<endl;

}
