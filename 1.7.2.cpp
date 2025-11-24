#include<iostream>
using namespace std;

int main(){
    string line;
    cin>>line;
    int count[26]={0};
    for(char c:line){
        count[c-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]==1){
            char res='a'+i;
            cout<<res;
        }
    }
    cout<<endl;
    return 0;
}