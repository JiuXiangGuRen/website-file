#include <iostream>

using namespace std;

int *new_array(int n)
{
    int *s;
    s=new int [n];
    return s;
}

void init_array(int *p, int n,int c)
{
    for(int i=0; i<n; i++)
    {
        *p=c;
        p++;
    }
}

int main()
{
    int* a;
    int n,c;
    cin>>n>>c;
    a=new_array(n);
    init_array(a,n,c);
    cout<<*a;
    a++;
    for(int i=0; i<n-1; i++)
    {
        cout<<" "<<*a;
        a++;
    }
    return 0;
}
