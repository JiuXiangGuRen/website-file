#include <iostream>

using namespace std;
int  sumDiagonal(int **a,int n)
{
    int ss=0;
    for(int i=0;i<n;i++)
    {
        ss+=*(*(a+i)+i);
    }
    return ss;
}
int main()
{
    int n;
    cin>>n;
    int**s;
    s=new int* [n];
    for(int i=0;i<n;i++)
        s[i]=new int [n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>*(*(s+i)+j);
    cout<<sumDiagonal(s,n);
    return 0;
}
