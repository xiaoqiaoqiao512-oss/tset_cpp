#include<iostream>
using namespace std;

int main(){
    int M,N,X;
    cin>>M>>N>>X;
    while(X>0){
        X-=((M+N-1)/N)*N;
        if(X<0) break;
        else{
            M++;
        }
    }
    cout<<M<<endl;
    return 0;
}

// (a + b - 1) / b 计算向上取整的除法