#include <iostream>

using namespace std;

int main()
{
    void change(char a[],int b);
    char s1[101];
    int i=0;
    cin.getline(s1,101);
    while(s1[i]!='\0')
    {
        i++;
    }
    change(s1,i);
    cout<<s1;
    return 0;
}
void change(char a[],int b)
{
    int n=b/2;
    char s;
    for(int j=0; j<n; j++)
    {
        s=a[j];
        a[j]=a[b-j-1];
        a[b-j-1]=s;
    }
}

