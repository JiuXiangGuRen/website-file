#include<iostream>

using namespace std;

int s(int a[],int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return a[0];
    else
        return s(a,n-1)+a[n-1];
}
int main()
{
    int a[10],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<s(a,n);
    return 0;
}
