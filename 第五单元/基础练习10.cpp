#include <iostream>

using namespace std;

int main()
{
    int s1(char b[]);
    char l[101];
    int a=s1(l);
    cout<<l;
    return 0;
}
//
int s1(char b[])
{
    int i=0;
    cin>>b;
    while(b[i]!='\0')
    {
        if(b[i]>='a'&&b[i]<='z')
            b[i]=b[i]-'a'+'A';
        i++;
    }
    return i;
}
