#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x,a,s,s1;
    cin>>x>>a;
    s=x+sqrt(x*x+1);
    s1=log(s)/log(a);
    cout<<s1;
}
