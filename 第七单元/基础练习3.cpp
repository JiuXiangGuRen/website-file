#include<iostream>
#include<cmath>
using namespace std;

void statistics(double a[],int n,double *max,double *min,double *avg,double *stdev)
{
    *max=*min=a[0];
    for(int i=0;i<n;i++)
    {
        *max<a[i]?*max=a[i]:*max=*max;
        *min>a[i]?*min=a[i]:*min=*min;
        *avg+=a[i];
    }
    *avg=*avg/n;
    for(int i=0;i<n;i++)
    {
        *stdev+=(*avg-a[i])*(*avg-a[i]);
    }
    *stdev=pow(*stdev/n,0.5);
}
int main()
{
    double a[100],mmin=0,mmax=0,aavg=0,stdd=0;
    int i=0;
    while(1)
    {
        cin>>a[i];
        if(a[i]==-9999)
            break;
        else
            i++;
    }
    statistics(a,i,&mmax,&mmin,&aavg,&stdd);
    cout<<mmax<<" "<<mmin<<" "<<aavg<<" "<<stdd;
    return 0;
}
