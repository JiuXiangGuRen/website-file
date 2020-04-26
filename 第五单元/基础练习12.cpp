#include <iostream>
using namespace std;
int main()
{
    int strcmp(char s1[],char s2[]);//º¯ÊýÉùÃ÷
    char a[101], b[101]= {0};
    cin>>a>>b;
    cout<<strcmp(a,b);
    return 0;
}

int strcmp(char s1[],char s2[])
{
    int n=0;
    for( int i=0; i<101; i++)
    {
        if(s1[i]=='\0' && s2[i]!='\0')
            return -1;
        if(s1[i]!='\0' && s2[i]=='\0')
            return 1;
        if(s1[i]=='\0' && s2[i]=='\0')
            return 0;
        n=s1[i]-s2[i];
        if(n)
            break;
    }
    if(n>1)
        n=1;
    if(n<-1)
        n=-1;
    return n;
}
