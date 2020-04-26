#include<iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a==1)
        cout<<"石头";
    else if(a==2)
        cout<<"剪刀";
    else if(a==3)
        cout<<"布";
    else
        cout<<"不认识";
    return 0;
}
