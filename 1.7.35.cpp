#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    int p1,p2,p3;
    cin>>p1>>p2>>p3>>line;
    for(size_t i=0;i<line.size();i++)
    {
        if(line[i]=='-'){
            int temp=line[i-1];
            if(temp!=line[i+1]&&line[i+1]>line[i-1]&&((line[i-1]>='a'&&line[i-1]<='z'&&line[i+1]>='a'&&line[i+1]<='z')||(line[i-1]>='0'&&line[i-1]<='9'&&line[i+1]>='0'&&line[i+1]<='9'))){
                if(p3==2){
                    for(int j=line[i+1]-1;j>line[i-1];j--){
                        if(p1==1){
                           cout<<string(p2, char(j)); 
                        }
                        else if(p1==2){
                            cout<<string(p2, toupper(char(j)));
                        }
                        else if(p1==3){
                            cout<<string(p2, '*');
                        }
                    }
                }
                else if(p3==1){
                    for(int j=line[i-1]+1;j<line[i+1];j++){
                        if(p1==1){
                           cout<<string(p2, char(j)); 
                        }
                        else if(p1==2){
                            cout<<string(p2, toupper(char(j)));
                        }
                        else if(p1==3){
                            cout<<string(p2, '*');
                        }
                    }
                }
                
            }
        }
        else{
            cout<<line[i];
        }
    }
    return 0;
}