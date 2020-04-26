#include<iostream>
using namespace std;

char ch[33];
char s[16],*p;
int a[4],n,l=0,i;
void s2()
{
    for(int k=0; k<4; k++)
    {
        int t=k*8;
        for(int j=7; j>=0; j--)
        {
            ch[t+j]=a[k]%2+48;
            a[k]=a[k]/2;
        }
        if(a[k]!=0)
        {
            cout<<"data error"<<endl;
            l=1;
            break;
        }
    }
}
void s1()
{
    for(i=0; i<4; i++)
    {
        if((*p>'9' || *p<'0') && *p!='.')
            break;
        n=0;
        while((*p)!='.'&&*p!=0)
        {
            n=n*10+*p-48;
            p++;
        }
        a[i]=n;
        if(*p=='.'&&*(p+1)=='.')
            break;
        if(i==3 && *p!=0)
            i++;
        p++;
    }
}
int main()
{
    cin.getline(s,15);
    p=s;
    s1();
    if(i==4)
    {
        s2();
        if(l==0)
        {
            ch[32]='\0';
            cout<<ch<<endl;
        }
    }
    else
        cout<<"data error"<<endl;
    return 0;
}
