#include<iostream>
using namespace std;

int main(){
    int count,dis,start;
    cin>>count>>dis>>start;
    int m=count;
    int n[50]={0};
    n[0]= start-1;
    for(int i=1;i<=m;i++)
    {
        n[i]=i;
    }
    int temp=start;
    for(int i=1;i<=count;i++)
    {
        
        temp--;
        temp+=dis;
        while(temp>m)
        {
            temp-=m;
        }
        cout<<n[temp]<<' ';
        for(int j=temp;j<=count;j++){
            n[j]=n[j+1];
        }
        m--;
    }
    return 0;
}