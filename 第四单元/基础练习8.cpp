#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    double s=0.;
    cin>>n;
    double a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        a[i]=a[i]*a[i];
        s+=a[i];
    }
    s=sqrt(s);
    cout<<s;
    return 0;
}

