#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100];
    cin.getline(str1,100);
    cout<<'|'<<str1<<'|'<<endl;
    int n=strlen(str1);
    for(int i=n-1;i>=0;i--)
    {
        if(str1[i]==32)
            str1[i]='\0';
        else
            break;
    }
    cout<<'|'<<str1<<'|';
    return 0;
}
