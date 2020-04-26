#include<iostream>

using namespace std;
char* digitName(int n)
{
    char*s[13]= {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
    return s[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<digitName(n);
    return 0;
}
