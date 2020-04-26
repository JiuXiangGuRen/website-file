#include<iostream>

using namespace std;

int main()

{
    double v;
    int i,j,ss=0;
    int s[30]= {-1,15,-40,-180,99,-122,-124,27,192,128,-165,95,161,-138,-183,51,107,39,-184,113,-63,9,107,188,-11,-13,151,-52,7,6};
    cin>>i>>j;
    int MAX=s[i],MIN=s[i];
    if(i>=j)
    {
        cout<<0<<" "<<0<<" "<<0<<" "<<0;
    }
    else
    {
        for(int k=i; k<j; k++)
        {
            if(MAX<s[k])
                MAX=s[k];
            if(MIN>s[k])
                MIN=s[k];
            ss=ss+s[k];
        }
        v=double(ss)/(j-i);
        cout<<MAX<<" "<<MIN<<" "<<ss<<" "<<v;
    }
    return 0;
}
