#include<iostream>
#include<cstring>
using namespace std;

char* a(char* s)
{
    int i=0;
    while(1)
    {
        if(*s!=' ')
            break;
        else
            s++;
    }
    return s;
}
int main()
{
    char s[101];
    cin.getline(s,100);
    char* ss=a(s);
    int l=strlen(ss);
    int j;
    for(j=l-2;; j--)
    {
        if(ss[j]!=' ')
            break;
    }
    for(int i=0; i<j+1; i++)
        cout<<ss[i];
    cout<<'#';
    return 0;
}
