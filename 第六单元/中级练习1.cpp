#include<iostream>

using namespace std;

void Insert(int a[], int n)
{
    int i=n-1;
    int key=a[n];
    while(i>=0&&key<a[i])
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=key;

}

void InsertionSort(int a[],int n)
{
    if(n>0)
    {
        InsertionSort(a,n-1);
        Insert(a,n);
    }
}

int main()
{
    int a[100];
    cin>>a[0];
    int n=0;
    while(a[n]!=-9999)
    {
        cin>>a[++n];
    }
    InsertionSort(a,n-1);
    cout<<a[0];
    for(int i=1; i<n; i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}
