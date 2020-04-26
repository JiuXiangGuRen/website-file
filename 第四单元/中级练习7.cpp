#include<iostream>
using namespace std;

int main()
{
    int n;
    int s;
    cin>>n;
    int str1[n];
    for(int i=0; i<n; i++)
        cin>>str1[i];
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(str1[i]<str1[j])
            {
                s=str1[j];
                str1[j]=str1[i];
                str1[i]=s;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<str1[i];
        if(i<n-1)
            cout<<" ";
    }
    return 0;
}
