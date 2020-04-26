#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100];
    int k=0;
    cin.getline(str1,100);
    cout<<'|'<<str1<<'|'<<endl;
    int n=strlen(str1);
    for(int i=0;;i++)
    {
        if(str1[i]==32)
            k++;
        else
            break;
    }
    cout<<'|';
    for(int i=k;i<n;i++)
        cout<<str1[i];
    cout<<'|';
    return 0;
}
