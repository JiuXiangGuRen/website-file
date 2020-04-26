#include<iostream>

using namespace std;

int main()
{
    int n,t;
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
        for(j=i; j<n; j++)
        {
            t=s[i][j];
            s[i][j]=s[j][i];
            s[j][i]=t;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<s[i][j];
            if(j<n-1)
                cout<<" ";
        }
        if(i<n-1)
            cout<<endl;
    }
    return 0;
}
