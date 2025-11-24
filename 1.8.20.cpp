#include<iostream>
#include<vector>
using namespace std;

int main(){
    int len;
    cin>>len;
    string line;
    cin>>line;
    int T=line.size();
    int wide=T/len;
    vector<vector<char>> str(len,vector<char>(wide,'*'));
    for(int i=0;i<wide;i++){
        int temp=0;
        for(int j=0;j<len;j++){
            if(i%2==0){
            str[j][i]=line[i*len+temp];
            temp++;
            }   
            else
            {
                temp++;
                str[j][i]=line[(i+1)*len-temp];
            }
        }
    }
    for(int i=0;i<len;i++){
        for(int j=0;j<wide;j++){
            cout<<str[i][j];
        }
    }
    cout<<endl;
    return 0;
}