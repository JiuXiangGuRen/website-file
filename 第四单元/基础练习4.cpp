#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,m;
    int a[10][10]= {0};
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
        sort(a[i],a[i]+m);
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i][m-1]<<endl;
    }
}
