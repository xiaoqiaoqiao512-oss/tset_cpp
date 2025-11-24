#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    char cha = '\0';
    cin>>cha;
    string chars[50] ;
    int count=0;
    for(int i=0;;i++)
    {
        cin>>chars[i];
        if(chars[i][0]=='@')break;
        count++;
    }
    for(int i=0;i<=count;i++)
    {
        for(size_t j=0;j<=chars[i].length();j++)
        {
            if(chars[i][j]==cha)
            {
                chars[i][j]='\0';
            }
        }
    }
    for(int i=0;i<count-1;i++)
    {
        for(size_t j=0;j<count-i-1;j++)
        {
            if(chars[j]<chars[j+1])
            {
                string temp=chars[j];
                chars[j]=chars[j+1];
                chars[j+1]=temp;
            }
        }
    }
    
    for(int i=0;i<count;i++)
    {
        if(i==count-1)cout<<chars[i];
        else
        {
            cout<<chars[i]<<endl;
        }
    }
}