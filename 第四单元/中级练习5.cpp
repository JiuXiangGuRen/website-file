#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100];
    int k=0,j=0;
    cin.getline(str1,100);
    cout<<'|'<<str1<<'|'<<endl;
    int n=strlen(str1);
    for(int i=0;; i++)
    {
        if(str1[i]==32)
            k++;
        else
            break;
    }
    for(int i=n-1; i>=0; i--)
    {
        if(str1[i]==32)
            j++;
        else
            break;
    }
    cout<<'|';
    for(int i=0; i<k; i++)
        cout<<" ";
    for(int i=0; i<n; i++)
    {
        if(str1[i]!=32)
            cout<<str1[i];
    }
    for(int i=0; i<j; i++)
        cout<<" ";
    cout<<'|';
    return 0;
}
