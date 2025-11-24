#include<iostream>
using namespace std;

int main(){
    int first_9=0,second_9=0,third_9=0;
    int first_7=0,second_7=0,third_7=0;
    for(int i=0;i<1000;i++){
        int num = i;
        first_9= num%9;
        num = num/9;
        second_9 = num%9;
        num = num/9;
        third_9 = num%9;
        num = i;
        first_7= num%7;
        num = num/7;
        second_7 = num%7;
        num = num/7;
        third_7 = num%7;
        if(first_7==third_9&&first_9==third_7&&second_7==second_9){
            cout<<i<<endl;
        }
    }
    return 0;
}