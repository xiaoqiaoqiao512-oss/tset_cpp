#include<iostream>
using namespace std;

int main(){
    int num,count;
    cin>>num>>count;
    int judge[100]={0};
    for(int i=1;i<=count;i++){
        for(int j=1;j<=num;j++){
            if(j%i==0){
                judge[j-1]=(judge[j-1]==0)?1:0;
            }
        }
    }
    bool first=true;
    for(int i=1;i<=num;i++){
        if(judge[i-1]==1){
            if(!first) cout<<",";
            cout<<i;
            first=false;
        }
    }
    return 0;
}