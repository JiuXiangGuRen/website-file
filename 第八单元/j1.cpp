#include<iostream>

using namespace std;

int main()
{
    int a[20],i=0;
    int *p=a;
    while(1)
    {
        cin>>p[i];
        if(p[i]!=9999&&i<19)
            i++;
        else
            break;
    }
    if(p[i]==9999)
        i--;
    for(int j=0;j<=i;j++)
    {
        cout<<p[j];
        if(j<=i-1)
            cout<<" ";
    }
    return 0;
}
