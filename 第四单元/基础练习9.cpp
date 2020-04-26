#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    double s=0.;
    cin>>n;
    double a[2][n];
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int j=0; j<n; j++)
    {
        a[1][j]=(a[1][j]-a[0][j])*(a[1][j]-a[0][j]);
    }
    for(int j=0; j<n; j++)
    {
       s+=a[1][j];
    }
    s=sqrt(s);
       cout<<s;
    return 0;
}
