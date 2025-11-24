#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++){
        if(i%10==1){
            sum++;
        }
        if(i/10==1){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}