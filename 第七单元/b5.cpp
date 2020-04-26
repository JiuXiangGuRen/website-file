#include<iostream>
#include<cmath>
using namespace std;
int a,b,c,m,i,j;
int  func1(int x)
{
    int y,ss=0;
    for(int s=i;s<=j;s++)
    {
        y=a*s*s+b*s+c;
        ss+=y;
    }
    ss=ss/(j-i+1);
    return ss;
}

int func2(int x)
{
    int y,ss=0;
    for(int s=i;s<=j;s++)
    {
        y=pow(s,m);
        ss+=y;
    }
    ss=ss/(j-i+1);
    return ss;
}

int main()
{
    cin>>a>>b>>c;
    cin>>m;
    cin>>i>>j;
    cout<<func1(i);
    cout<<endl;
    cout<<func2(i);
    return 0;
}
