#include<iostream>
#include<cmath>
using namespace std;

double funavg(double (*f)(double), double a,double b,int n)
{
    double h=(b-a)/n;
    double avg=0.;
    for(int i=0;i*h<=b-a;i++)
        avg+=f(a+i*h);
    return avg/(n+1);
}
int main()
{
    double x,y;
    cin>>x>>y;
    cout<<funavg(exp,x,y,1000)<<" ";
    cout<<funavg(sin,x,y,1000)<<" ";
    cout<<funavg(cos,x,y,1000);
    return 0;
}
