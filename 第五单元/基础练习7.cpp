#include <iostream>

using namespace std;

int main()
{
    int s(int b[]);
    void ss(int b[],int k);
    int l[101];
    int k=s(l);
    ss(l,k);
    return 0;
}

int s(int b[])
{
    int i=0;
    while(cin>>b[i]&&b[i]!=-9999)
    {
        i++;
    }
    return i;
}

void ss(int b[],int k)
{
    for(int j=k-1; j>=0; j--)
    {
        cout<<b[j];
        if(j>0)
            cout<<" ";
    }
}
