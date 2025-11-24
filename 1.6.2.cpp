#include<iostream>
using namespace std;
int main(){
    int high[10];
    int touch;
    for(int i=0;i<10;i++){
        cin>>high[i];
    }
    cin>>touch;
    int sum=0;
    for(int i=0;i<10;i++){
        if(high[i]<=touch+30){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}