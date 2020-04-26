#include<iostream>

using namespace std;

void reset(int *a, int *b)
{
    if((*a+*b)%2==1)
        *a=*b=(*a+*b+1)/2;
    else
        *a=*b=(*a+*b)/2;
}
int main()
{
    int x,y;
    cin>>x>>y;
    reset(&x,&y);
    cout<<x<<" "<<y;
    return 0;
}
