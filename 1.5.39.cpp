#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int cum=0;
    for(int i=1;i<=num;i++){
        if(i%7==0 || i%10==7 || i/10==7){
            continue;
        }
        cum+=i*i;
    }
    cout<<cum<<endl;
    return 0;
}