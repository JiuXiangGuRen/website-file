#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char c;
    cin>>a>>b>>c;
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            cout<<c;
        }
        if(i<a-1)
            cout<<endl;
    }

    return 0;
}
