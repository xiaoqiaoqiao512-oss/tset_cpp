#include<iostream>
using namespace std;
int main(){
    int cou=0;
    int n[100]={0};
    int num;
    cin>>cou;
    int p=0;
    for(int i=0;i<cou;i++){
        cin>>num;
        n[0]=num%10;
        n[1]=(num%100 - n[0])/10;
        n[2]=(num%1000-n[2]*10-n[0])/100;
        n[3]=num/1000;
        if(n[0]-n[1]-n[2]-n[3]>0){
            p++;
        }
    }
    cout<<p;
    return 0;
}