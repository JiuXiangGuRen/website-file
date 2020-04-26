#include<iostream>

using namespace std;

int s(int a[])
{
    int n=0;
    for(;;n++)
    {
        cin>>a[n];
        if(a[n]==-9999)
            break;
    }
    return n;
}
int s(double a[])
{
    int n=0;
    for(;;n++)
    {
        cin>>a[n];
        if(a[n]==-9999)
            break;
    }
    return n;
}
double mycout(double a[],int n)
{
    double ss=0;
    for(int i=n-1; i>=0; i--)
    {
        ss+=a[i];
    }
    return ss;
}
int  mycout(int a[],int n)
{
    int ss=0;
    for(int i=n-1; i>=0; i--)
    {
        ss+=a[i];
    }
    return ss;
}
int main()
{
    int a1[100];
    double a2[100];
    int n1=0,n2=0;
    n1=s(a1);
    n2=s(a2);
    cout<<mycout(a1,n1)<<" "<<mycout(a2,n2);
    return 0;
}

