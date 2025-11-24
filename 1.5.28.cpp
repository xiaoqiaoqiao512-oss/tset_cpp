#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    for(int i=num;i>0;i/=10)
    {
        cout<<i%10<<endl;
    }
    return 0;
}