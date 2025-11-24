#include<iostream>
using namespace std;

int main(){
    int n,num;
    cin>>n>>num;
    int m=0,k=0;
    for(int d=n;d>0;d/=10)
    {
        m=d%10;
        if(m==num){
            k++;
        }
    }
    if(n%19==0&&k==num){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}