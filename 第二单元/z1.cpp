#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    char s[4];
    cin>>s;
    for(int i=0;i<4;i++)
        s[i]-'a'>=0&&s[i]-'a'<=9?cout<<'0'<<int(s[i]-'a'):cout<<int(s[i]-'a');
    return 0;
}
