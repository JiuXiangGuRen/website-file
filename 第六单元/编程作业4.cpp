#include<iostream>

using namespace std;

void sort(int &a, int &b)
{
    if (b > a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
}

void sort(int &a, int &b, int &c)
{
    sort(a, b);
    sort(b, c);
    sort(a, b);
}

void sort(int &a, int &b, int &c, int &d)
{
    sort(a, b, c);
    sort(b, c, d);
    sort(a, b);
}

void sort(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sort(a[i], a[j]);
        }
    }
}

void print(int a[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        cout << a[i] << ' ';
    }
    cout << a[i];
}

int main()
{
    int a, b, c, d;
    int data[100];
    int k, n, i;
    cin >> k;
    switch (k)
    {
    case 1:
        cin >> a >> b;
        sort(a, b);
        cout << a << " " << b << endl;
        break;
    case 2:
        cin >> a >> b >> c;
        sort(a, b, c);
        cout << a << " " << b << " " << c << endl;
        break;
    case 3:
        cin >> a >> b >> c >> d;
        sort(a, b, c, d);
        cout << a << " " << b << " " << c << " " << d << endl;
        break;
    case 4:
        cin >> n;
        for (i = 0; i<n; i++)
        {
            cin >> data[i];
        }
        sort(data, n);
        print(data, n);
        break;
    }
    return 0;
}
