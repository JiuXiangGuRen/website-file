#include <iostream>

using namespace std;

int main()
{
    int s1(int b[]);
    int s2(int b[],int k);
    int l[101];
    int k=s1(l);
    cout<<s2(l,k);
    return 0;
}
//输入模块
int s1(int b[])
{
    int i=0;
    while(cin>>b[i]&&b[i]!=-9999)
    {
        i++;
    }
    return i;
}
//求和模块
int s2(int b[],int k)
{
    int ss=0;
    for(int j=k-1; j>=0; j--)
    {
       ss+=b[j];
    }
    return ss;
}
