#include<iostream>

using namespace std;

int m(int k, int n)
{
    if (n==1)
        return k;
    if (n==2)
        return (k+1)*2;
    return (m(k,n-1)+1)*2;

}

int main()
{
    int n;
    cin>>n;
    cout<<m(1,n);
    return 0;
}
