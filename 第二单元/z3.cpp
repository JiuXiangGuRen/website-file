#include<iostream>

using namespace std;

int main()
{
    int s=0,a=0;
    for(int i=0; i<4; i++)
    {
        cin>>a;
        s+=a;
        if(i<3)
            s=s<<8;
    }
    cout<<s;
    return 0;
}
