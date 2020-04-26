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
void mycout(double a[],int n)
{
    for(int i=n-1; i>=0; i--)
    {
        cout<<a[i];
        if(i>0)
            cout<<" ";
    }
    cout<<endl;
}
void mycout(int a[],int n)
{
    for(int i=n-1; i>=0; i--)
    {
        cout<<a[i];
        if(i>0)
            cout<<" ";
    }
    cout<<endl;
}
int main()
{
    int a1[100];
    double a2[100];
    int n1=0,n2=0;
    n1=s(a1);
    n2=s(a2);
    mycout(a1,n1);
    mycout(a2,n2);
    return 0;
}

