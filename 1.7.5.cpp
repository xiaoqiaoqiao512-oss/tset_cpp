#include<iostream>
using namespace std;
int main(){
    string line;
    cin>>line;
    for(size_t i=0;i<line.size();i++){
        char c=line[i]+line[(i+1)%line.size()];
        cout<<c;
    }
    cout<<endl;
    return 0;
}