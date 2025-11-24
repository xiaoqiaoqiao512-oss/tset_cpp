#include<iostream>
#include<vector>
using namespace std;

int main(){
    int L, M;
    cin>>L>>M;
    vector<int> tree(L+1);
    for(int i=0;i<M;i++){
        int a, b;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            tree[j]=1;
        }
    }
    int count=0;
    for(int i=0;i<=L;i++){
        if(tree[i]==0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}