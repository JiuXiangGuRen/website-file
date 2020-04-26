#include<iostream>
#include<cmath>
using namespace std;

void add_array(int a, int *sum)
{
    *sum+=a;
}

int main()
{
    int a[100];
    int i=0,sum=0;
    while(1)
    {
        cin>>a[i];
        if(a[i]!=-1)
            add_array(a[i],&sum);
        else
            break;
    }
    cout<<sum;
    return 0;
}
