#include <iostream>
using namespace std;

int main()
{
    int n,s,s1=1,i=1;
    cin>>n;
    {
        if(n==1)
            cout<<"1";
        else
        {
            while(i<n)
            {
                s=2*(s1+1);
                s1=s;
                i++;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
