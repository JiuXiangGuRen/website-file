#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    char a;
    cin>>a;
    int b=a;
    a=(b>=97&&b<=122)?a-32:a;
    cout<<a;
    return 0;
}
