#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    cin.get(); // 读取换行符
    int mx=0;
    vector<int> list;
    for(int i=0;i<num;i++){
        string line;
        getline(cin,line);
        string word="";
        for(int j=0;j<=(int)line.size();j++){
            int temp=0;
            if(line[j]==','||j==(int)line.size()){
                for(char c:word){
                   temp=temp*10+(c-'0');
                }
                if(temp>mx){
                    mx=temp;
                    list.clear();
                    list.push_back(i);
                }
                else if(temp==mx){
                    list.push_back(i);
                }
                word="";
            }
            else{
                word+=line[j];
            }
            
        }
    }
    cout<<mx<<endl;
    for(int i=0;i<(int)list.size();i++){
        if(i!=0) cout<<",";
        if(i==0 || list[i]!=list[i-1]) cout<<list[i]+1;
    }
    cout<<endl;
    return 0;
}