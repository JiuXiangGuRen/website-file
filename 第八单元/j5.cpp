#include<iostream>

using namespace std;
struct person
{
    char name[40];
    char gender[10];
    int age;
};
int main()
{
    person one;
    person *p;
    p=&one;
    cin>>p->name;
    cin>>p->gender;
    cin>>p->age;
    cout<<p->name;
    cout<<" "<<p->gender;
    cout<<" "<<p->age<<endl;
    return 0;
}
