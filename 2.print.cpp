#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int n[5]={0};
    int m=0;
    for(int i=num;i>0;i/=10)
    {
        n[m]=i%10;
        m++;
    }
    cout<<m<<endl;
    for(int i=m-1;i>=0;i--){
        cout<<n[i];
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<n[i];
    }
    cout<<endl;
    return 0;
}