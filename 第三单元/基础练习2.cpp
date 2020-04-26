#include<iostream>

using namespace std;

int main()
{
    double n;
    cin>>n;
    if(int(n)!=n)
    {
    if(n>0)
        cout<<"positive real";
    if(n<0)
        cout<<"negative real";
    }
    else
    {
        if(n==0)
        cout<<"zero";
        if(n>0)
        cout<<"positive integer";
        if(n<0)
        cout<<"negative integer";
    }
    return 0;
}
