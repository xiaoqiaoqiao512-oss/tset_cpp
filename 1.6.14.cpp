#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num==0){
        cout<<1<<endl;
    }
    vector<int> res(1,1);
    for(int i=1;i<=num;i++){
        int carry=0;
        for(size_t j=0;j<res.size();j++){
            int temp=res[j]*i+carry;
            res[j]=temp%10;
            carry=temp/10;
        }
        while(carry){
            res.push_back(carry%10);
            carry/=10;
        }
    }
    for(int i=res.size()-1;i>=0;i--){
        cout<<res[i];
    }
    cout<<endl;
    return 0;
}