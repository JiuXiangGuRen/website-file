#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;
    cin>>a;
    a>=0?cout<<a<<" "<<hex<<a<<" "<<oct<<a:cout<<a<<" -"<<hex<<-a<<" -"<<oct<<-a;
    return 0;
}
