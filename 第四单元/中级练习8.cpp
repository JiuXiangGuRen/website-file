#include <iostream>

using namespace std;
int binarySearch(int a[], int left, int right, int dest);

int main()
{
    int a[310];
    int i=0;
    int num;
    while(cin>>num&&num!=-99999)
        a[i++] = num;
    int dest;
    cin>>dest;
    int idx = binarySearch(a,0,i-1,dest);
    cout<<idx;
    return 0;
}
int binarySearch(int a[], int left, int right, int dest)
{
    while(left<=right)
    {
        int midIdx = (left+right)/2;
        int mid = a[midIdx];
        if(dest>mid)
            left = midIdx+1;
        if(dest<mid)
            right = midIdx-1;
        if(dest==mid)
            return midIdx;
    }
    return -1;
}
