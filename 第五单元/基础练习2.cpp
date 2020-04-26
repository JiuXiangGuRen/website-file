#include <iostream>

using namespace std;

int main()
{
    double s(double a);
    double a;
    cin>>a;
    cout<<s(a);
    return 0;
}
double s(double a)
{
   double ss;
   a>0?ss=a:ss=-a;
    return ss;
}
