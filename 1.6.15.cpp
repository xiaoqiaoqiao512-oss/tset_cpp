#include<iostream>
#include<vector>
using namespace std;

void high_plus(vector<int>& a,vector<int>& b){
    int len=(a.size()>b.size())?a.size():b.size();
    vector<int> res(len+1);
    a.resize(len);
    int carry=0;
    for(int i=0;i<len;i++){
        int temp=a[i]+b[i]+carry;
        carry=temp/10;
        res[i]=temp%10;
    }
    if(carry){
        res[len]=carry;
    }
    else{
        res.resize(len);
    }
    a=res;
}

int main(){
    int num;
    cin>>num;
    if(num==0){
        cout<<1<<endl;
        return 0;
    }
    vector<int> sum(1,0);
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
        high_plus(sum,res);
    }
    for(int i=sum.size()-1;i>=0;i--){
        cout<<sum[i];
    }
    cout<<endl;
    return 0;
}