#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int isPrime(int a);
    int a[100]= {};
    int k=0;
    for(int i=0,j; ; i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            break;
        }
        else
        {
            j=isPrime(a[i]);
            if(j==1)
            {
                a[k]=a[i];
                k++;
            }
        }
    }
    for(int i=0; i<k; i++)
    {
        cout<<a[i];
        if(i<k-1)
            cout<<" ";
    }
    return 0;
}
int isPrime(int a)
{
    if(a==1)
        return 0;
    else
    {
        int tmp=sqrt(a);
        for(int s=2; s<=tmp; s++)
            if(a%s==0)
                return 0;
        return 1;
    }
}
