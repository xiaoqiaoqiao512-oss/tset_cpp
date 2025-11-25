#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    cin>>num;
    string line;
    cin.get(); // 读取换行符
    getline(cin,line);
    char cha=line[0];
    int wide=0;
    for(int i=0;i<(int)line.size();i++){
        if(cha!=line[i]){
            cha=line[i];
            if(wide>=num){
                cout<<line[i-1]<<endl;
                return 0;
            }
            wide=1;
        }
        else{
            wide++;
        }
    }
    if (wide >= num) {
        cout << cha << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}