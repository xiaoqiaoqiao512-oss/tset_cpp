#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum=2;
    for(int i=1;i<num;i++){
        sum*=2;
    }
    cout<<sum<<endl;
    return 0;
}