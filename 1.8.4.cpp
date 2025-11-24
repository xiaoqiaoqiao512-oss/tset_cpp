#include<iostream>
#include<vector>
using namespace std;

int main(){
    int list[5][5];
    int Max[5]={0},x[5],y[5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>list[j][i];
            if(Max[i]<list[j][i])
            {
                Max[i]=list[j][i];
                x[i]=j;
            }
        }
    }
    bool judge=0;
    int Min[5]={1000};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(list[i][j]<Min[i]){
                Min[i]=list[i][j];
                y[i]=j;
            }
        }
        if(i==x[y[i]]){
            cout<<y[i]+1<<i+1<<Min[i]<<endl;
            judge=1;
        }
    }
    if(judge==0){
        cout<<"no"<<endl;
    }
    return 0;
}