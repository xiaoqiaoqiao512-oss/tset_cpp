#include<iostream>
#include<vector>
using namespace std;

int main(){
    const int N=19;
    vector<vector<int>> n(N,vector<int>(N));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>n[i][j];
        }
    }

    int dx[4]={1,0,1,-1};
    int dy[4]={0,1,1,1};

    int max_cmt=0;
    int m=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int color=n[i][j];//颜色不同代表数字不同
            if(color==0) continue;
            for(int dir=0;dir<4;dir++){
                int cmt=0;
                for(int count=1;count<=4;count++){ 
                    int nx=i+count*dx[dir];
                    int ny=j+count*dy[dir]; 
                    if(nx<0||ny<0||nx>N||ny>N){
                        break;
                    }
                    if(color==n[nx][ny]){
                        cmt++;
                    }
                    else
                        break;  
                    if(cmt==4)  
                    {
                        cout<<color<<":"<<(i+1)<<","<<(j+1)<<endl; 
                        m=1;
                    } 
                }
                if(max_cmt<cmt+1) max_cmt=cmt+1;
            }
        }
    }
    if(m==0){
        cout<<max_cmt;
    }
    return 0;
}