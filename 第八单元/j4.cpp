#include<iostream>

using namespace std;
int mystrcmp(char *s1,char *s2)
{
    int i=0;
    while(1)
    {
        if(s1[i]>='A'&&s1[i]<='Z')
            s1[i]=s1[i]-'A'+'a';
        if(s2[i]>='A'&&s2[i]<='Z')
            s2[i]=s2[i]-'A'+'a';
        if(s1[i]==s2[i])
        {
            if(s1[i]==0&&s2[i]==0)
                return 0;
            else
                i++;
        }
        else if(s1[i]>s2[i])
            return 1;
        else if(s1[i]<s2[i])
            return -1;
    }
}
int main()
{
    char a[100],b[100];
    cin>>a>>b;
    cout<<mystrcmp(a,b);
    return 0;
}
