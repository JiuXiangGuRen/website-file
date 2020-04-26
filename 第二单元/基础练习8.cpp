#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c,d,x,y;
    cin>>a>>b>>c>>x>>y;
    d=(a*x+b*y+c)<0?-(a*x+b*y+c):(a*x+b*y+c);
    d=d/sqrt(a*a+b*b);
    d=int(d*100+0.5)/100.00;
    cout<<d;
    return 0;
}
