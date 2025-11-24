#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    cin>>line;
    char num=line[0];
    if(line.empty()){
        cout<<""<<endl;
        return 0;
    }
    int temp=1;
    for(size_t i=1;i<line.size();i++){
        if(line[i]!=num){
            cout<<temp<<num;
            num=line[i];
            temp=1;
        }
        else{
            temp++;
        }
    }
    cout<<temp<<num<<endl;
    return 0;
}