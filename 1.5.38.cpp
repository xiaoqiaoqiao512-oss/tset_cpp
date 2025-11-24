#include<iostream>
#include<vector>
using namespace std;

int main(){
    int count;
    cin>>count;
    int n=0;
    for(int i=0;i<count;i++){
        cin>>n;
        vector<int> c(n+1);
        int num=n;
        for(int j=0;j<=n;j++){
            cin>>c[j];
            c[j]*=num;
            num--;
            cout<<c[j];
            if(j!=n) cout<<" ";
        }
    }
    return 0;
}