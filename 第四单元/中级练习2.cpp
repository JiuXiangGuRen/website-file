#include<iostream>

using namespace std;

int main()
{
    int n,t=0;
    cin>>n;
    int s[n][n];;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>s[i][j];
        }
    }
    for(int i=0,j=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            s[i][j]==s[j][i]?t=t+1:t=t;
        }
    }
    t==(n*(n-1))/2?cout<<"Yes":cout<<"No";
    return 0;
}
