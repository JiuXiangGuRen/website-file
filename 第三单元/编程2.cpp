#include <iostream>

using namespace std;

int main()
{

        int GG[10],s=0;
        double s1=0.;
        int MAX=0,MIN=0;
        for(int i=0; i<10; i++)
        {
            cin>>GG[i];
            if(GG[i]>GG[MAX])
            {
                MAX=i;
            }
            if(GG[i]<GG[MIN])
            {
                MIN=i;
            }
        }
        if(GG[MAX]>100||GG[MIN]<0)
        {
            cout<<"the score is invalid.";
        }
        else
        {
        GG[MAX]=GG[MIN]=0;
        for (int i=0; i<10; i++)
        {
            s=s+GG[i];
        }
        s1=double(s)/8;
        cout<<s1;
        }
    return 0;
}
