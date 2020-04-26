#include<iostream>
using namespace std;

int main()
{
    int a,s=1;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        s=s*i;
    }
    if(a==0)
        s=1;
    cout<<s;
    return 0;
}
