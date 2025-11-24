#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    int m=0;
    vector<string> lines;
    string line;
    while(getline(cin,line)){
        transform(line.begin(), line.end(), line.begin(), ::tolower);
        lines.push_back(line);
        m++;
    }
    int num=0;
string words;
vector<string> word;
for(int i=0;i<m;i++){
    stringstream ss(lines[i]);
    while(ss>>words){
        word.push_back(words);
        num++;
    }
}

sort(word.begin(),word.end());

for(int i=0;i<num;i++)
{
    if(word[i]==word[i+1]){
        word.erase(word.begin()+i);
        i--;
        num--;
    }
}

for(int i=0;i<num;i++)
{
    cout<<word[i]<<endl;
}
    return 0;
}