#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,y;
    double x;
    cin>>a>>b>>c>>d>>e>>f>>g;
    x=(a+b+c+d+e+f+g)/7.;
    y=int(x+0.5);
    cout<<y;
    return 0;
}
