#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    float sum=1;
    for(int i=1;i<num;i++){
        sum-=1.0/(i+1);  
    }
    cout<<sum<<endl;
    return 0;
}