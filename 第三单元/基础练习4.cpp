#include<iostream>

using namespace std;

int main()
{
    char s,N=0;
    cin>>s;
    if(s>='0'&&s<='9')
    {
        N=1;
        cout<<"0";
    }
    if(s>='A'&&s<='Z')
    {
        N=1;
        cout<<"1";
    }
    if(s>='a'&&s<='z')
    {
        N=1;
        cout<<"2";
    }
    if(N==0)
    {
        cout<<"-1";
    }
    return 0;
}
