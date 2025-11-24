#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> l1(m,vector<int>(n));
    vector<vector<int>> l2(m,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>l1[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>l2[j][i];
        }
    }
    float temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(l1[j][i]!=l2[j][i]){
                temp++;
            }
        }
    }
    float sum=m*n;
    cout<<1-temp/sum<<endl;
    return 0;
}