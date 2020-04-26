#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str1[100],str2[100];
    int v=0,s=0;
    cin.getline(str1,100);
    cin.getline(str2,100);
    int n1=strlen(str1);
    int n2=strlen(str2);
    for(int i=0; i<n1; i++)
    {
        if(str1[i]==str2[0])
        {
            s=i+1;
            for(int j=0; j<n2; j++)
            {
                if(str1[i+j]==str2[j])
                    v++;
                else
                    break;
            }
            if(v==n2)
            {
                v=1;
                break;
            }
            else
                v=0;
        }
    }
    v==1?cout<<s:cout<<"没有该子串";
    return 0;
}
