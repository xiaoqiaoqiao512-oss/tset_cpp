#include<iostream>
using namespace std;

int main(){
    string l1,l2;
    float num;
    cin>>num;
    cin>>l1>>l2;
    float len=l1.size();
    float temp=0;
    for(int i=0;i<len;i++){
        if(l1[i]==l2[i]){
            temp++;
        }
    }
    if(temp/len>=num){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}