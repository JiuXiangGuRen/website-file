#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[2][n];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int j=0; j<n; j++)
    {
        a[1][j]+=a[0][j];
    }
    for(int j=0; j<n; j++)
    {
       cout<<a[1][j];
       if(j<n-1)
        cout<<" ";
    }
    return 0;
}

