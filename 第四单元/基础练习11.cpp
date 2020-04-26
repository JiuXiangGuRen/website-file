#include<iostream>

using namespace std;

int main()
{
    char s[101];
    int i=0;
    cin.getline(s,101);
    while(s[i]!='\0')
    {
        i++;
    }
    cout<<i;
    return 0;
}
