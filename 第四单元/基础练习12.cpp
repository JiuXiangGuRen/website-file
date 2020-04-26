#include<iostream>

using namespace std;

int main()
{
    char s[201];
    int i=0,j=0;
    cin.getline(s,201);
    while(s[i]!='\0')
    {
        if(s[i]>='A'&&s[i]<='Z')
        j++;
        i++;
    }
    cout<<j;
    return 0;
}
