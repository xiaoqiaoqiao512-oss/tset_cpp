#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string l1,l2;
    cin>>l1>>l2;
    int len=(l1.length()>l2.length())?l1.length():l2.length();
    vector<int> line1(len),line2(len);
    int temp=len;
    for(int i=l1.length()-1;i>=0;i--){
        line1[--temp]=l1[i]-'0';
    }
    temp=len;
    for(int i=l2.length()-1;i>=0;i--){
        line2[--temp]=l2[i]-'0';
    }
    vector<int> res(len+1);
    for(int i=len-1;i>=0;i--){
        res[i+1]+=(line1[i]+line2[i])%10;
        res[i]+=(line1[i]+line2[i])/10;
        res[i]+=res[i+1]/10;
        res[i+1]=res[i+1]%10;
    }
    if(res[0]==0){
        for(int i=1;i<=len;i++){
            cout<<res[i];
        }
    }
    else{
        for(int i=0;i<=len;i++){
            cout<<res[i];
        }
    }
    return 0;
}