#include<iostream>

using namespace std;

int main()
{
    int n,m;
    int a[20][20]= {0};
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i][j]>a[i+1][j])
                a[i+1][j]=a[i][j];
        }
    }
    for(int j=0; j<m; j++)
    {
        cout<<a[n-1][j];
        if(j<m-1)
            cout<<" ";
    }
}

