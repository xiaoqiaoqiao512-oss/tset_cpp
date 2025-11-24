#include<iostream>
using namespace std;
int main(){
    int K=0;
    cin>>K;
    float Sn=0;
    for(int i=1;;i++){
        float n=i;
        Sn+=1/n;
        if(Sn>K){
            cout<<i<<endl;
            break;

        }
    }
    return 0;
}