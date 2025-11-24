#include<iostream>
using namespace std;

int main(){
    string line;
    cin>>line;
    for(size_t i=0;i<line.size();i++){
        for(size_t j=i+1;j<line.size();j++){
            if(line[i]==line[j]){
                int temp=j;
                bool ok=true;
                for(size_t k=i;k<(j-i+1)/2+i;k++){
                    if(line[k]!=line[temp--]){
                        ok=false;
                        break;
                    }
                }
                if(ok){
                    for(size_t l=i;l<=j;l++){
                        cout<<line[l];
                    }
                    cout<<endl;
                }
            }
        }
    }
    
    return 0;
}