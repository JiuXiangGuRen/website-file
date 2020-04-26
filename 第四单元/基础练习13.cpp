#include<iostream>

using namespace std;

int main()
{
    char s1[100],s2[100];
    cin>>s1;
    for(int i=0;i<100;i++)
    {
        s2[i]=s1[i];
    }
    cout<<s2;
    return 0;
}
