#include<iostream>
#include<cstring>
using namespace std;
struct person
{
    char name[40];
    char gender[10];
    int age;
};
int main()
{
    int n=0,k=0;
    person *p1,*p2;
    person *q1,*q2;
    cin>>n;
    p1=new person[n];
    q1=p1;
    cin>>q1->name;
    cin>>q1->gender;
    cin>>q1->age;
    while(strcmp(q1->name,"0")!=0&&strcmp(q1->gender,"0")!=0&&q1->age!=0)
    {
        k++;
        q1++;
        cin>>q1->name;
        cin>>q1->gender;
        cin>>q1->age;
    }
    p2=new person[k];
    q2=p2;
    q1=p1+k-1;
    while(q1>=p1)
    {
        *q2=*q1;
        q1--;
        q2++;
    }
    q2=p2;
    while(q2<p2+k)
    {
        cout<<q2->name;
        cout<<" "<<q2->gender;
        cout<<" "<<q2->age<<endl;
        q2++;
    }
    delete []p1;
    delete []p2;
    return 0;
}
