#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cin>>a;
    b=a/50;
    c=a%50/20;
    d=a%50%20/10;
    e=a%50%20%10/5;
    f=a%50%20%10%5;
    cout<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;
    return 0;
}
