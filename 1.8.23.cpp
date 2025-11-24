#include<iostream>
#include<vector>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>> list(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>list[i][j];
        }
    }
    int temp=0;
    int T=0;
    int i=0,j=0;
    int high=0,wide=0;
    int r=row,c=col;
    while(temp<row*col){
        cout<<list[i][j]<<' ';
        if(T%4==0){
            j++;
            if(j==c){
                T++;
                i++;
                j--;
                high++;
            }
        }
        else if(T%4==1){
            i++;
            if(i==r){
                T++;
                i--;
                j--;
                c--;
            }
        }
        else if(T%4==2){
            j--;
            if(j==wide-1){
                T++;
                i--;
                j++;
                r--;
            }
        }
        else if(T%4==3){
            i--;
            if(i==high-1){
                T++;
                i++;
                j++;
                wide++;
            }
        }
        temp++;
    }
    return 0;
}