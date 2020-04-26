#include<iostream>

using namespace std;

void reverse(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

void reverse(char a[], int n)
{
    if (n < 2)
        return;
    if (n == 2)
    {
        reverse(a[0], a[1]);
        return;
    }
    reverse(a, n - 1);
    char temp = a[n - 1];
    int i;
    for (i = n - 1; i >0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

int main()
{
    char a[101];
    int n = 0;
    cin.getline(a, 101);
    while (a[n] != '\0')
    {
        n++;
    }
    reverse(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}
