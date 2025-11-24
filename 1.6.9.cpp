#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    vector<int> a(num);
    vector<int> b(num);
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    for(int i=0;i<num;i++){
        cin>>b[i];
    }
    int sum=0;
    for(int i=0;i<num;i++){
        sum+=a[i]*b[i];
    }
    cout<<sum<<endl;
    return 0;
}