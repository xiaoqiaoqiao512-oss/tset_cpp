#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    string l1,l2;
    getline(cin,l1);
    getline(cin,l2);

    vector<int> a,b;
    
    stringstream ss1(l1);
    int num;
    while(ss1>>num)
        a.push_back(num);
    
    stringstream ss2(l2);
    while(ss2>>num)
        b.push_back(num);
    
    vector<int> res;
    
    int temp=0;
    for(int i:a){
        for(int j:b){
            if(i==j)
            {
                temp++;
                break;
            }
        }
        if(temp==0)
            res.push_back(i);
        temp=0;
    }
    for(int i:b){
        for(int j:a){
            if(i==j)
            {
                temp++;
                break;
            }
        }
        if(temp==0)
            res.push_back(i);
        temp=0;
    }

    sort(res.begin(),res.end(),greater<int>());

    for (size_t i = 0; i < res.size(); ++i) {
        if (i > 0) cout << " ";
        cout << res[i];
    }
    return 0;
}