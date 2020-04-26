#include <iostream>

using namespace std;

int main()
{
    int s(int l[]);
    int l[101];
    int k=s(l);
    for(int j=k-1; j>=0; j--)
    {
        cout<<l[j];
        if(j>0)
            cout<<" ";
    }
    return 0;
}
int s(int l[])
{
    int i=0;
    while(cin>>l[i]&&l[i]!=-9999)
    {
        i++;
    }
    return i;
}
