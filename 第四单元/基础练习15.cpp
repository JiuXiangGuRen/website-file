#include<iostream>
#include<cmath>
using namespace std;

struct point
{
    double x,y;
};
int main()
{
    point a,b;
    double s;
    cin>>a.x>>a.y;
    cin>>b.x>>b.y;
    s=(b.y-a.y)*(b.y-a.y)+(b.x-a.x)*(b.x-a.x);
    s=sqrt(s);
    cout<<s;
    return 0;
}
