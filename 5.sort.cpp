#include<iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    for(int i=2;m!=1;)
    {
        if(m%i!=0){
            i++;
            continue;
        }
        m/=i;
        cout<<i<<' ';
    }
    return 0;
}