#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

struct student{
    int id;
    string name;
    int age;
};

bool cmpname(const student &a,const student &b)
{
    if(b.name == a.name)return a.age<b.age;
    return a.name<b.name;
};

bool cmpage(const student &a,const student &b)
{
    if(b.age == a.age)return a.name<b.name;
    return a.age<b.age;
};


int main(){
    int n;
    cin>>n;
    vector<student> stu(n);
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].id>>stu[i].name>>stu[i].age;
    }

    sort(stu.begin(),stu.end(),cmpname);
    for(int i=0;i<n;i++){
            cout<<setw(3)<<stu[i].id<<setw(6)<<stu[i].name<<setw(3)<<stu[i].age;
            cout<<endl;
    }
    sort(stu.begin(),stu.end(),cmpage);
    for(int i=0;i<n;i++){
            cout<<setw(3)<<stu[i].id<<setw(6)<<stu[i].name<<setw(3)<<stu[i].age;
            cout<<endl;
    }
    return 0;
}