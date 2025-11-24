#include<iostream>
#include<vector>
using namespace std;

int main(){
    const int N=19;
    vector<vector<int>> n(N, vector<int>(N));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>n[i][j];
        }
    }

    int dx[4]={0,1,1,-1};
    int dy[4]={1,0,1,1};

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            int color=n[i][j];
            if(color==0)continue;

            for(int d=0;d<4;d++){
                int cmt=0;
                for(int k=0;k<4;k++){
                    int nx=i+dx[d]*k;
                    int ny=j+dy[d]*k;
                    if(nx<0||ny<0||nx>=N||ny>=N)break;

                    if(n[nx][ny]==color)
                        cmt++;
                    else
                        break;

                    if(cmt==4){
                        int prex=i-dx[d];
                        int prey=j-dy[d];
                        int nextx=i+dx[d]*4;
                        int nexty=j+dy[d]*4;

                        bool left =false ,right =false;
                        if(prex>=0&&prex<N&&prey>=0&&prey<N){
                            if(n[prex][prey]==0)left=true;
                        }
                        if(nextx>=0&&nextx<N&&nexty>=0&&nexty<N){
                            if(n[nextx][nexty]==0)right=true;
                        }
                        if(left||right){
                            cout<<color<<":"<<(i+1)<<","<<(j+1)<<endl;
                            return 0;
                        }
                        
                    }
                }
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}