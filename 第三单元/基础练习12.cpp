#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j=1,s;
    cin>>n;
    if(n==0)
        cout<<"1";
    else
    {
        while(1)
        {
            s=n/i;
            if(s>=1&&s<=9)
            {
                cout<<j;
                break;
            }
            i=i*10;
            j++;
        }
    }
    return 0;
}
