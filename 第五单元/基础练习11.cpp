#include <iostream>

using namespace std;

int main()
{
    void s1(char a[],char b[]);
    char x[100],y[100];
    s1(x,y);
    cout<<y;
    return 0;
}
void s1(char a[],char b[])
{
    int i=0;
    cin.getline(a,100);
    while(a[i]!='\0')
    {
        b[i]=a[i];
        i++;
    }
    b[i]='\0';
}
