#include<iostream>

using namespace std;

int main()
{
    int s;
    char a[5];
    cin>>s;
    a[0]=s/1000000+'a';
    a[1]=s%1000000/10000+'a';
    a[2]=s%10000/100+'a';
    a[3]=s%100+'a';
    a[4]=0;
    cout<<a;
    return 0;
}
