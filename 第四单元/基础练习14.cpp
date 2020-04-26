#include<iostream>

using namespace std;

int main()
{
    char s[100],ss;
    int i=0,k=0;
    cin>>s;
    while(s[i]!='\0')
    {
        i++;
    }
    k=i/2;
    for(int j=0; j<k; j++)
    {
        ss=s[j];
        s[j]=s[i-1-j];
        s[i-j-1]=ss;
    }
    cout<<s;
    return 0;
}
