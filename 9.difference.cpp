#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct date{
    int year;
    int month;
    int day;
};

bool cmp(const date &a,const date &b){   
    if(a.year==b.year){
        if(a.month==b.month){
            return a.day<b.day;
        }
        return a.month<b.month;
    }
    return a.year<b.year;
}

int main(){
    vector<date> d(2);
    for(int i=0;i<2;i++){
        cin>>d[i].year>>d[i].month>>d[i].day;
    }
    sort(d.begin(),d.end(),cmp);
    int res=(d[1].year-d[0].year)*366+(d[1].month-d[0].month)*31+d[1].day-d[0].day;
    cout<<res<<endl;
    return 0;
}