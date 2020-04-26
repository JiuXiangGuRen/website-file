#include<iostream>
using namespace std;
int main()
{
    char ch[33];
    char s[100],*p;
    int a[4],n,l=0,i;
    cin.getline(s,99);
    p=s;
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
    if(i==4)
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
