#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        string l1,l2;
        cin>>l1>>l2;
        if(l1==l2){
            cout<<"Tie"<<endl;
        }
        else if(l1=="Rock"&&l2=="Scissors"){
            cout<<"Player1"<<endl;
        }
        else if(l1=="Rock"&&l2=="Paper"){
            cout<<"Player2"<<endl;
        }
        else if(l1=="Scissors"&&l2=="Paper"){
            cout<<"Player1"<<endl;
        }
        else if(l1=="Scissors"&&l2=="Rock"){
            cout<<"Player2"<<endl;
        }
        else if(l1=="Paper"&&l2=="Rock"){
            cout<<"Player1"<<endl;
        }
        else if(l1=="Paper"&&l2=="Scissors"){
            cout<<"Player2"<<endl;
        }
    }
    return 0;
}