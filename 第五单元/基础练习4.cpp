#include <iostream>

using namespace std;

int main()
{
   int s(int k);
    int k;
    cin>>k;
    cout<<s(k);
    return 0;
}
int s(int k)
{
    int ss=1;
    for(int i=1;i<=k;i++)
    {
        ss=ss*i;
    }
    return ss;
}
