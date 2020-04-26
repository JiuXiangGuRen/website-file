#include <iostream>

using namespace std;

int main()
{
    double s(double a,int b);
    double x;
    int k;
    cin>>x>>k;
    cout<<s(x,k);
    return 0;
}
double s(double a,int b)
{
    double ss=1.;
    if(a==0)
        ss=0;
    else
    if(b>=0)
    {
        for(int i=0; i<b; i++)
            ss=a*ss;
    }
    else
    {
        for(int i=0; i<-b; i++)
            ss=ss/a;
    }
    return ss;
}
