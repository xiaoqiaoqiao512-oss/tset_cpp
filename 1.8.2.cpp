#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,i,j;
    cin>>n>>i>>j;
    vector<vector<int>> list(n,vector<int>(n));
    for(int m=0;m<n;m++){
        cout<<"("<<i<<","<<m+1<<")"<<" ";
    }
    cout<<endl;
    for(int m=0;m<n;m++){
        cout<<"("<<m+1<<","<<j<<")"<<" ";
    }
    cout<<endl;
    int temp = j;
    for(int m=i;m>0;m--){
        if(m!=1&&temp!=1){
            temp--;
        }
        else{
            for(;m<n+1&&temp<n+1;m++,temp++){
                cout<<"("<<m<<","<<temp<<")"<<" ";
            }
            break;
        }
    }
    cout<<endl;
    temp=j;
    for(int m=i;m>=0;m++){
        if(m!=n&&temp!=0){
            temp--;
        }
        else{
            for(;m>0&&temp<n+1;m--,temp++){
                cout<<"("<<m<<","<<temp<<")"<<" ";
            }
            break;
        }
    }
    return 0;
}