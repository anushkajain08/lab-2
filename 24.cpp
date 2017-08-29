#include <iostream>
#include <math.h>
using namespace std;
main()
{  
int a,b,c,d,e;
cout << " enter number of days---";
cin>>a;
b=a/365;
c=a%365;
d=c/7;
e=c%7;
cout<<a<<"Number of days can be written as"<<endl<<b<<"years"<<" "<<d<<"weeks"<<" "<<e<<"days    ";
}
