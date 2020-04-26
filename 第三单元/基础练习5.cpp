#include<iostream>

using namespace std;

int main()
{
    float a;
    cin>>a;
    if(a>=90&&a<=100)
    {
        cout<<"5";
    }
    if(a>=80&&a<=89)
    {
        cout<<"4";
    }
    if(a>=70&&a<=79)
    {
        cout<<"3";
    }
    if(a>=60&&a<=69)
    {
        cout<<"2";
    }
    if(a>=10&&a<=59)
    {
        cout<<"1";
    }
    if(a>=0&&a<=9)
    {
        cout<<"0";
    }
    return 0;
}
