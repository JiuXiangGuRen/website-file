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
    int n=0;
    cin>>n;
    person *p;
    p=new person[n];
    person *q=p;
    cin>>p->name;
    cin>>p->gender;
    cin>>p->age;
    while(strcmp(p->name,"0")!=0&&strcmp(p->gender,"0")!=0&&p->age!=0)
    {
        p++;
        cin>>p->name;
        cin>>p->gender;
        cin>>p->age;
    }
    p-=1;
    while(p>=q)
    {
        cout<<p->name;
        cout<<" "<<p->gender;
        cout<<" "<<p->age<<endl;
        p--;
    }
    return 0;
}
