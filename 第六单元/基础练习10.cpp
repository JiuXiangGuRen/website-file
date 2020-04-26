#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap(double &a,double &b)
{
    double temp;
    temp=a;
    a=b;
    b=temp;
}

void swap(int *a,int &n,int *b,int &m)
{
    int N = n>m? n:m;
    for(int i=0; i<N; i++)
    {
        swap(a[i],b[i]);
    }
    int temp;
    temp=n;
    n=m;
    m=temp;
}

void swap(char *p1, char *p2)
{
    int len1=0,len2=0,i=0;
    while(p1[i++]!='\0')
        len1++;
    i=0;
    while(p2[i++]!='\0')
        len2++;

    for( i=0; p1[i]!='\0'||p2[i]!='\0'; i++)
    {
        swap(p1[i],p2[i]);
    }
    p1[len2]='\0';
    p2[len1]='\0';
}
void print(int *p, int n)
{
    if(n!=0)
        cout<<p[0];
    for(int i=1; i<n; i++)
    {
        cout<<' '<<p[i];
    }
    cout<<endl;
}
void print(double *p, int n)
{
    if(n!=0)
        cout<<p[0];
    for(int i=1; i<n; i++)
    {
        cout<<' '<<p[i];
    }
    cout<<endl;
}
int main()
{
    int a,b;
    double da,db;
    int aa[100],ab[100];
    char s1[100],s2[100];
    int n,m;
    int i;
    cin>>a>>b;
    cin>>da>>db;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>aa[i];
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        cin>>ab[i];
    }
    cin>>s1>>s2;
    swap(a,b);
    swap(da,db);
    swap(aa,n,ab,m);
    swap(s1,s2);
    cout<<a<<' '<<b<<endl;
    cout<<da<<' '<<db<<endl;
    print(aa,n);
    print(ab,m);
    cout<<s1<<' '<<s2<<endl;
    return 0;
}
