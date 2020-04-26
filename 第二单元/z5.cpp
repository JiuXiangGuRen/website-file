#include<iostream>

using namespace std;

int main()
{
    int a[4];
    int n,m;
    cin>>n>>m;
    a[0]=n+m-1;
    a[1]=n+2*m-1;
    a[2]=n+3*m-1;
    a[3]=n+4*m-1;
    for(int i=0;i<4;i++)
    {
        if(a[i]>10)
            a[i]=a[i]%10;
        cout<<a[i];
        if(i<3)
            cout<<" ";
    }
    return 0;
}
