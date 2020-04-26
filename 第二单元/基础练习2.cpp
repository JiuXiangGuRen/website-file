#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double x1,y1,x2,y2,distance;
    cin>>x1>>y1>>x2>>y2;
    distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    distance=sqrt(distance);
    cout<<distance;
    return 0;
}
