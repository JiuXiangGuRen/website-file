#include<iostream>

using namespace std;

void sort(int* x,int* y)
{
    if(*x>*y)
    {
        int a=*x;
        *x=*y;
        *y=a;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    sort(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
