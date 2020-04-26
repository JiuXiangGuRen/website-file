#include <iostream>

using namespace std;

int main()
{
    int men,women,children;
    int n;
    int M=0;
    cin>>n;
    for(men=0;men<=n/4;men++)
    {
        for(women=0;women<=n/3;women++)
        {
            children=2*(n-4*men-3*women);
            if(children>0&&children==n-men-women)
            {
                cout<<"men"<<men <<endl;
                cout<<"women"<<women<<endl;
                cout<<"children"<<children<<endl;
                M++;
            }
        }
    }
    if(M==0)
        cout<<"no result!"<<endl;
    return 0;
}
