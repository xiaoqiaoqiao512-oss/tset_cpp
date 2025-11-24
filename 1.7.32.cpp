#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    int temp=1;
    line[0]=toupper(line[0]);
    char num=line[0];
    for(size_t i=2;i<line.size();i++){
        line[i]=toupper(line[i]);
        if(line[i]!=num){
            cout<<"("<<num<<","<<temp<<") ";
            num=line[i];
            temp=1;
        }
        else{
            temp++;
        }
    }
    cout<<"("<<num<<","<<temp<<")";
    return 0;
}