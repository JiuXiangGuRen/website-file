#include<iostream>

using namespace std;

int main()
{
    double* p;
    double* q;
    int n;
    int k;
    cin>>n;
    p=new double[n];
    k=0;
    q=p;
    cin>>*q;
    while(*q!=9999)
    {
        k++;
        q++;
        cin>>*q;
    }
    q=p+k-1;
    cout<<*q;
    q--;
    while(q>=p)
    {
        cout<<" "<<*q;
        q--;
    }
    cout<<endl;
    delete []p;
    return 0;
}
