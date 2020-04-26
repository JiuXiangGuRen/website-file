#include <iostream>

using namespace std;

struct List
{
    char song[100];
    char singer[100];
    int score;
} list[5];

int main()
{
    int i,j;
    List temp;
    for(i=0; i<5; i++)
    {
        cin>>list[i].song>>list[i].singer>>list[i].score;
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<5-i; j++)
        {
            if(list[j].score<list[j+1].score)
            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    for(i=0; i<5; i++)
    {
        cout<<list[i].song<<' '<<list[i].singer<<' '<<list[i].score<<endl;
    }
    return 0;
}
