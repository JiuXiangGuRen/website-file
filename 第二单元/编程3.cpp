#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,d,e;
    double x;
    cin>>a>>b>>c;
    d=a+b+c;
    x=d/3.0;
    e=int(x+0.5);
    cout<<d<<endl<<x<<endl<<e;
    return 0;
}
