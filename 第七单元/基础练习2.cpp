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
void sort(int* x,int* y,int* z)
{
    sort(x,y);
    sort(x,z);
    sort(y,z);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    sort(&a,&b,&c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
