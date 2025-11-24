#include<iostream>
using namespace std;
int main(){
    float book[10];
    float sum=0;
    int count;
    for(int i=0;i<10;i++){
        cin>>book[i];
    }//需要一个个输入书的价格，过于繁琐
    cin>>count;
    for(int i=0;i<10;i++){
        cin>>count;
        sum+=book[i]*count;
    }
    printf("%.2f\n",sum);
    return 0;
}
