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
    person aclass[50];
    int n=0;
    person *p;
    p=aclass;
    cin>>p->name;
    cin>>p->gender;
    cin>>p->age;
    while(strcmp(p->name,"0")!=0&&strcmp(p->gender,"0")!=0&&p->age!=0)
    {
        n++;
        p++;
        cin>>p->name;
        cin>>p->gender;
        cin>>p->age;
    }
    p=aclass+n-1;
    while(p>=aclass)
    {
        cout<<p->name;
        cout<<" "<<p->gender;
        cout<<" "<<p->age<<endl;
        p--;
    }
    return 0;
}
