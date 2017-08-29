#include <iostream>
#include <math.h>
using namespace std;
main()
{
float p,r,t,n,a,b,c,CI;
cout<<"enter principal--";
cin>>p;
cout<<"enter rate";
cin>>r;
cout<<"enter time";
cin>>t;
cout<< "enter number of compounding periods--";
cin>>n;
a=(1+(r/n));
c=n*t;
b=pow(a,c);
CI=p*b;
cout<<"compound interest equals   "<<CI<<"  ";
}
