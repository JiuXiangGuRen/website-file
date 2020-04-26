#include<iostream>

using namespace std;

inline int Area(int a, int b)
{
    return a*b;
}

inline int Perimeter(int a, int b)
{
    return a + a + b + b;
}

int main()
{
    int l, w;
    cin >> l >> w;
    cout << Area(l, w) << ' ';
    cout << Perimeter(l, w) << endl;
    return 0;
}
