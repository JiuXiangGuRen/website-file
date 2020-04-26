#include <iostream>

using namespace std;
int c(char s1[],char s2[]);

int main()
{
    char s1[200],s2[200];
    cin>>s1>>s2;
    int s=c(s1,s2);
    cout<<s;
    return 0;
}
int c(char s1[],char s2[])
{
    int i=0;
    while(s1[i]||s2[i])
    {
        if(s1[i]<='z'&&s1[i]>='a')
            s1[i]=s1[i]-'a'+'A';
        if(s2[i]<='z'&&s2[i]>='a')
            s2[i]=s2[i]-'a'+'A';
            i++;
    }
    i=0;
    while(s1[i]==s2[i]&&s1[i]&&s2[i])
        i++;
    if(s1[i]-s2[i]>0)
        return 1;
    else if(s1[i]-s2[i]==0)
        return 0;
    else if(s1[i]-s2[i]<0)
        return -1;
}
