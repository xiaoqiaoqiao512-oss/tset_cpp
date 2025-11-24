#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int max=0,min=0;
    int num=0,num_max=0;
    for(int i=0;i<n;i++)
    {
        cin>>max>>min;
        if(140>=max&&max>=90&&90>=min&&min>=60){
            num++;
            if(num>=num_max){
                num_max=num;
            }
        }
            else{
            num=0;
            }
    }
    cout<<num_max<<endl;
    return 0;
}