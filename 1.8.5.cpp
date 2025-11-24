#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> y(num);
    vector<int> x(num);
    vector<vector<int>> list(num,vector<int>(num));
    bool judge_y=1;
    bool judge_x=1;
    int temp_y,temp_x;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            cin>>list[j][i];
            if(list[j][i]==1){
                y[i]++;
                x[j]++;
            }
        }
        if(y[i]%2!=0){
            if(judge_y==0){
                cout<<"corrept"<<endl;
                return 0;
            }
            temp_y=i;
            judge_y=0;
        }
    }
    for(int i=0;i<num;i++){
        if(x[i]%2!=0){
            if(judge_x==0){
                cout<<"corrept"<<endl;
                return 0;
            }
            temp_x=i;
            judge_x=0;
        }
    }
    if(judge_y==0){
        cout<<temp_x<<temp_y<<endl;
    }
    else{
        cout<<"ok"<<endl;
    }

    return 0;
}