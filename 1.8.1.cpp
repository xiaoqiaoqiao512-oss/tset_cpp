#include<iostream>
using namespace std;

int main(){
    int l1,l2;
    int list[5][5]={0};
    cin>>l1>>l2;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==l1-1){
                cin>>list[j][l2-1];
            }
            else if(i==l2-1){
                cin>>list[j][l1-1];
            }
            else{
                cin>>list[j][i];
            }
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<list[j][i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}