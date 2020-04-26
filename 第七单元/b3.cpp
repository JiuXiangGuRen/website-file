#include<iostream>
#include<cmath>
using namespace std;

void s(int a,int* p)
{
    for(int i=0;i<a;i++)
    {
        p[i]=0;
    }
}
int main()
{
    int i=0;
    int a[100];
    while(1)
    {
        cin>>a[i];
        if(a[i]==-1)
            break;
        else
            i++;
    }
    int n;
    cin>>n;
    s(n,a);
    for(int j=0;j<i;j++)
    {
        cout<<a[j];
        if(j<i-1)
            cout<<" ";
    }
    return 0;
}
