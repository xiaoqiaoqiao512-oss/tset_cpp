#include<iostream>
using namespace std;

int main(){
    int n;
    float x;
    cin>>x>>n;
    float res=1;
    float temp=x;
    for(int i=0;i<n;i++){
        res+=temp;
        temp*=x;
    }
    cout<<res<<endl;
    return 0;
}