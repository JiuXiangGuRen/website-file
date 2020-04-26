#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=1&&n<=7)
    {
        if(n==1)
            cout<<"monday";
        if(n==2)
            cout<<"tuesday";
        if(n==3)
            cout<<"wednesday";
        if(n==4)
            cout<<"thursday";
        if(n==5)
            cout<<"friday";
        if(n==6)
            cout<<"saturday";
        if(n==7)
            cout<<"sunday";
    }
    else
        cout<<"invalid";
    return 0;
}
