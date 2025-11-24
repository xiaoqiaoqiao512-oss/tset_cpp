#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count;
    cin>>count;
    vector<int> num(count);
    for(int i=0;i<count;i++){
        cin>>num[i];
    }
    int temp=count-1;
    for(int i=1;i<count;i++){
        if(abs(num[i]-num[i-1])!=temp){
            cout<<"not jelly"<<endl;
            return 0;
            }
        temp--;
    }
    cout<<"jelly"<<endl;
    return 0;
}