#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    string a(char x[],int n);
    char str1[201];
    int n=0;
    cin.getline(str1,201);
    while(str1[n]!='\0')
    {
            n++;
    }
    n=n+1;
    cout<<a(str1,n);
    return 0;
}
string a(char str1[],int n)
{
    int k=0;
    char str2[201];
    for(int j=0;j<n;j++)
    {
        if(str1[j]>='a'&&str1[j]<='z')
        {
            str2[k]=str1[j]-'a'+'A';
            k++;
        }
        if(str1[j]==32)
        {
            str2[k]=str1[j];
            k++;
        }
        if(str1[j]>='A'&&str1[j]<='Z')
        {
            str2[k]=str1[j];
            k++;
        }
    }
    str2[k]='\0';
    return str2;
}
