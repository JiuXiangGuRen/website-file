#include <iostream>

using namespace std;
int ss(int n);
int main()
{
    int n;
    cin>>n;
    int s=ss(n);
    cout<<s;
    return 0;
}

int ss(int n)
{
    if(n==0)
        return 1;
    else
        return n*ss(n-1);
}
