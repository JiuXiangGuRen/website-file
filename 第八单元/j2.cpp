#include<iostream>

using namespace std;

int input(int *p)
{
    int i=0;
    while(1)
    {
        cin>>p[i];
        if(p[i]!=9999&&i<99)
            i++;
        else
            break;
    }
    return i;
}
void print(int *p,int i)
{
    if(p[i]==9999)
        i--;
    for(int j=0; j<=i; j++)
    {
        cout<<p[j];
        if(j<=i-1)
            cout<<" ";
    }
}

int main()
{
    int a[100];
    int *p=a;
    int n=input(p);
    print(p,n);
    return 0;
}
