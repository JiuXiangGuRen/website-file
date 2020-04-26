#include<iostream>

using namespace std;

int main()

{
    int s[100];
    int i=0;
    while(cin>>s[i])
    {
        if(s[i]==-9999)
        {
            break;
        }
        i++;
    }
    for(int j=0; j<i; j++)
    {
        if(s[0]<s[j])
        {
            s[0]=s[j];
        }
    }
    cout<<s[0];
    return 0;
}
