#include<iostream>

using namespace std;

int main()
{
    char s[33];
    int a[4],n=0;
    cin>>s;
    char* p=s,*q=s;
    for(int i=0; i<4; i++)
    {
        q=p+8;
        for(; p<q; p++)
        {
            if(p<q-1)
                n=(n+(*p-48))*2;
            else
                n+=*p-48;
        }
        a[i]=n;
        n=0;
    }
    for(int i=0; i<4; i++)
    {
        cout<<a[i];
        if(i<3)
            cout<<'.';
    }
    return 0;
}
