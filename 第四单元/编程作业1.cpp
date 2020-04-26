#include<iostream>

using namespace std;

int main()
{
    char s[21];
    int i=0;
    cin>>s;
    while(s[i]!='\0')
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-='a';
            if(s[i]>=23)
            {
                s[i]=s[i]-23+'A';
            }
            else
            {
                s[i]=s[i]+3+'A';
            }
        }
        else
        {
            s[i]-='A';
            if(s[i]>=23)
            {
                s[i]=s[i]-23+'a';
            }
            else
            {
                s[i]=s[i]+3+'a';
            }
        }
        i++;
    }
    cout<<s;
    return 0;
}
