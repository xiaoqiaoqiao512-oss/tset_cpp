#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        temp*=i;
        sum+=temp;
    }
    cout<<sum<<endl;
    return 0;
}