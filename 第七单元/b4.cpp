#include<iostream>
#include<cmath>
using namespace std;

void caesar(char s[])
{
    int n=0;
    while(1)
    {
        if(s[n]==0)
            break;
        else
            n++;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(s[i]>='a'&&s[i]<='w')
                s[i]=s[i]-'a'+'A'+3;
            if(s[i]>'w'&&s[i]<='z')
                s[i]=s[i]-'a'+'A'-23;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            if(s[i]>='A'&&s[i]<='W')
                s[i]=s[i]-'A'+'a'+3;
            if(s[i]>'W'&&s[i]<='Z')
                s[i]=s[i]-'A'+'a'-23;
        }
    }
    cout<<s;
}

void oddeven(char s[])
{
    int n=0;
    while(1)
    {
        if(s[n]==0)
            break;
        else
            n++;
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
            cout<<s[i];
    }
    for(int i=0; i<n; i++)
    {
        if(i%2==1)
            cout<<s[i];
    }
}

void cipher(void (*f)(char s[]),char s[])
{
    f(s);
}
int main()
{
    char s[100];
    int n;
    cin>>s;
    cin>>n;
    if(n==1)
        cipher(caesar,s);
    if(n==2)
        cipher(oddeven,s);
    return 0;
}
