#include<iostream>
using namespace std;

int main(){
    float p[30],q[30];
    p[0]=1,q[0]=2;
    int n;
    cin>>n;
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=q[i]/p[i];
        p[i+1]=q[i];
        q[i+1]=p[i]+q[i];
    }
    cout<<sum<<endl;
    return 0;
}