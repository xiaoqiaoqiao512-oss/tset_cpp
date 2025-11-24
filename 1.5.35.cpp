#include<iostream>
using namespace std;

int main(){
    double e=1;
    int n;
    cin>>n;
    double temp=1;
    for(int i=1;i<=n;i++){
        e+=1.0/(temp*(i));
        temp*=(i);
    }
    printf("%.10f\n",e);
    return 0;
}