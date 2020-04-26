#include<iostream>
using namespace std;

int main()
{
    int a;
    double s=0;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        s=s+1./i;
    }
    cout<<s;
    return 0;
}
