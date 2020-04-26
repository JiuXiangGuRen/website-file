#include <iostream>

using namespace std;

int main()
{
    int s1(char b[]);
    char l[101];
    cout<<s1(l);
    return 0;
}
//ÊäÈëÄ£¿é
int s1(char b[])
{
    int i=0;
    cin>>b;
    while(b[i]!='\0')
    {
        i++;
    }
    return i;
}
