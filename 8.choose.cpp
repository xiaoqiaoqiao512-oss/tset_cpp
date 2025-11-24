#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<int> num(n+1);
    for(int i=1;i<=n;i++){
        num[i]=i;
    }
    int fre=1;
    int n_temp=n;
    for(int i=q-1+m;fre<=n_temp-1;i+=m-1)
    {
        while(i>n)i-=n;
        num.erase(num.begin()+i);
        n-=1;
        fre++;
    }
    cout<<num[1]<<endl;
}