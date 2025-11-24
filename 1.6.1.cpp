#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count;
    cin>>count;
    vector<int> num(count);
    for(int i=0;i<count;i++){
        cin>>num[i];
    }
    int N;
    cin>>N;
    int res = 0;
    for(int i=0;i<count;i++){
        if(num[i]==N){
            res++;
        }
    }
    cout<<res<<endl;
    return 0;
}