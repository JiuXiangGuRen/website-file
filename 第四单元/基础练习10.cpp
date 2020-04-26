#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    double a[2][n][m];
    for(int k=0; k<2; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[k][i][j];
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            a[1][i][j]+=a[0][i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<a[1][i][j];
            if(j<m-1)
                cout<<" ";
        }
        if(i<n-1)
            cout<<endl;
    }
    return 0;
}
