#include<iostream>

using namespace std;

int main()
{
    char s;
    cin>>s;
    if(s>'a'&&s<'z')
        cout<<char(s-1)<<s<<char(s+1);
    if(s=='a')
        cout<<"z"<<s<<"b";
    if(s=='z')
        cout<<"y"<<s<<"a";
    if(s>'A'&&s<'Z')
        cout<<char(s-1)<<s<<char(s+1);
    if(s=='A')
        cout<<"Z"<<s<<"B";
    if(s=='Z')
        cout<<"Y"<<s<<"A";
    return 0;
}
