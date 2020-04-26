#include <iostream>

using namespace std;

int main()
{
    int s(int b[]);
    int l[101];
    int k=s(l);
    for(int j=0; j<k; j++)
    {
        cout<<l[j];
        if(j<k-1)
            cout<<" ";
    }
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
