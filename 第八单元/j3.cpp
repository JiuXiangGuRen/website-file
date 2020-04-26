#include<iostream>

using namespace std;
char *mystrcpy(char *s1,char *s2)
{
    int i=0;
    while(1)
    {
        s1[i]=s2[i];
        if(s2[i]==0)
            break;
        else
            i++;
    }
    return s1;
}
int main()
{
    char a[100],b[100];
    cin>>b;
    cout<<mystrcpy(a,b)<<endl;
    return 0;
}
