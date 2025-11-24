#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int n;
    cin>> n;
    int num[10]={0};
    char first=' ';
    if(n<0){
        first = '-';
    }
    n=abs(n);
    int m=0;
    for(;n>0;n/=10){
        num[m]=n%10;
        m++;
    }
    cout<<first;
    for(int i=0;i<m;i++)
    {
        cout<<num[i];
    }
    return 0;
}