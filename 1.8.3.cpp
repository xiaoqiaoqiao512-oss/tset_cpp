#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> list(n,vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>list[j][i];
        }
    }
    int sum;
    for(int i=0;i<n;i++){
        sum+=list[i][0]+list[i][m-1];
    }
    for(int i=0;i<n;i++){
        sum+=list[0][i]+list[n-1][i];
    }
    sum-=list[0][0]+list[0][n-1]+list[m-1][0]+list[m-1][n-1];
    cout<<sum<<endl;
    return 0;
}