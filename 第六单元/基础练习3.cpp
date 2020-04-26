#include<iostream>

using namespace std;

int max(int array[],int n)
{
    if (n<=1)
        return(array[0]);
    int t=max(array,n-1);
    if (t>array[n-1])
        return(t);
    else
        return(array[n-1]);
}
int main()
{
    int a[10],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<max(a,n)<<endl;
    return 0;
}
