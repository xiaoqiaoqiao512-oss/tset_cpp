#include<iostream>
#include<vector>
using namespace std;

int check(int a,int b){
    if((a==2&&b==5)||(a==5&&b==0)||(a==0&&b==2)){
        return 1;
    }
    else if(a==b){
        return 2;
    }
    else{
        return 0;
    }
}
int main(){
    int count;
    int na,nb;
    cin>>count>>na>>nb;
    vector<int> num_a(na);
    vector<int> num_b(nb);
    for(int i=0;i<na;i++){
        cin>>num_a[i];
    }
    for(int i=0;i<nb;i++){
        cin>>num_b[i];
    }
    int a,b=0;
    int temp;
    for(int i=0;i<count;i++){
        temp=check(num_a[i%na],num_b[i%nb]);
        if(temp==1){
            a++;
        }
        else if(temp==0){
            b++;
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}