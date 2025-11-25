#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.get(); // 读取换行符
    string line;
    getline(cin,line);
    vector<int> list;
    int temp=0;
    for(int i=0;i<(int)line.size();i++){
        if(line[i]!=' '){
            if(line[i]!=line[i-2]&&i!=1){
                list.push_back(temp);
                temp=1;
            }
            else{
                temp++;
            }
        }         
    }
    int mx;
    for(int i=0;i<(int)list.size();i++){
        if(i==0||list[i]>mx){
            mx=list[i];
        }
    }
    cout<<mx<<endl;
    return 0; 
}