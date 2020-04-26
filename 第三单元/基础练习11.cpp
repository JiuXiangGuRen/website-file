#include<iostream>
using namespace std;

int main()
{
    int n,s=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        i%2==1?cout<<"1":cout<<"-1";
        if(i<=n-1)
            cout<<" ";
    }

    return 0;
}
