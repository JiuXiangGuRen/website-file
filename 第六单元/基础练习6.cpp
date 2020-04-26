#include<iostream>

using namespace std;

void s(int n,int a[])
{
    if(n>1)
        cout<<a[n-1]<<" ";
    if(n==1)
        cout<<a[n-1];
    if(n>=1)
        s(n-1,a);
}
int main()
{
    int n;
    int a[100];
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    s(n,a);
    return 0;
}

