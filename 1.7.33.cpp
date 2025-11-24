#include<iostream>
using namespace std;
int main(){
    string line;
    cin>>line;
    for(size_t i=0;i<line.size()/2;i++){
        if(line[i]!=line[line.size()-1-i]){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}