#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    if(n<0||n>99)
    {
        cout<<"the money is invalid!";
    }
    else
    {
        for(int a=0; a<=n; a++)
        {
            for(int b=0; b<=n; b++)
            {
                for(int c=0; c<=n; c++)
                {
                    for(int d=0; d<=n; d++)
                    {
                        if(25*a+10*b+5*c+d==n)
                        {
                            sum++;
                        }
                    }
                }
            }
        }
        cout<<sum;
    }
    return 0;
}
