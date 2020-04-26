#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, result;
    string a, b;
    char A[5] = {'a', 'b', 'c', 'd', 'e'};
    int n;
    int len;
    int i, j;
    cin>>str;
    cin>>n;
    len = str.length();
    result = str;

    for(i=0,j=n; i<len/n; i++,j++)
    {
        a = A[i%5];
        result.insert(n*i+j, a);
    }
    if(len%n!=0)
    {
        b = A[i%5];
        result.insert(result.length(), b);
    }
    cout<<result;
    return 0;
}
