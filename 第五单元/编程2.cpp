#include <iostream>

using namespace std;

int main()
{
    int imax(int a[], int count);
    int imin(int a[], int count);
    int n;
    cin>>n;
    int a[n];
    int i=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<imax(a,n)<<endl;
    cout<<imin(a,n)<<endl;
    return 0;
}
int imax(int a[], int count) // ��������������Ԫ��
{
    int j=0,k;
    for(; j<count; j++)
    {
        if(a[0]<a[j])
        {
            k=a[0];
            a[0]=a[j];
            a[j]=k;
        }
    }
    return a[0];
}
int imin(int a[], int count)// �������������СԪ��
{
    int j=0,k;
    for(; j<count; j++)
    {
        if(a[0]>a[j])
        {
            k=a[0];
            a[0]=a[j];
            a[j]=k;
        }
    }
    return a[0];
}
