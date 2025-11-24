#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count;
    cin>>count;
    float classnum[4]={0};
    vector<int> num(count);
    for(int i=0;i<count;i++){
        cin>>num[i];
        if(num[i]<=18){
            classnum[0]++;
        }
        else if(num[i]<=35){
            classnum[1]++;
        }
        else if(num[i]<=60){
            classnum[2]++;
        }
        else{
            classnum[3]++;
        }
    }
    for(int i=0;i<4;i++){
        printf("%.2f%%\n",classnum[i]/count*100);
    }
    return 0;
}