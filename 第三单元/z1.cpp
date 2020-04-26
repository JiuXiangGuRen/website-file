#include<iostream>

using namespace std;

int main()
{
    int n,s=0,j=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        j=i*j;
        s+=j;
    }
    cout<<s;
    return 0;
}
