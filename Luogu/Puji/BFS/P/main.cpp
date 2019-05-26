#include <iostream>
#include <queue>
using namespace std;

typedef pair<int,int> P;

bool flag[32][32];
int map[32][32];
int N;
queue<P> q;

void bfs(int i,int j){
    q.push(P(i,j));
    flag[i][j]=1;
    while(!q.empty()){
        P p=q.front();
        q.pop();
        if(map[p.first+1][p.second]==0 && flag[p.first+1][p.second]==0 && p.first+1<=N){
            flag[p.first+1][p.second]=1;
            q.push(P(p.first+1,p.second));
        }
        if(map[p.first][p.second+1]==0 && flag[p.first][p.second+1]==0 && p.second<=N){
            flag[p.first][p.second+1]=1;
            q.push(P(p.first,p.second+1));
        }
        if(map[p.first-1][p.second]==0 && flag[p.first-1][p.second]==0 && p.first-1>=1){
            flag[p.first-1][p.second]=1;
            q.push(P(p.first-1,p.second));
        }
        if(map[p.first][p.second-1]==0 && flag[p.first][p.second-1]==0 && p.second-1>=1){
            flag[p.first][p.second-1]=1;
            q.push(P(p.first,p.second-1));
        }

    }
}

int main() {
    cin>>N;
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            cin>>map[i][j];
            if(map[i][j]){
                flag[i][j]=1;
            }
        }
    }
    int k=0;
    for(int i=1;i<=N;i=N+1-i){
        if(k>1)
            break;
        for(int j=1;j<=N;++j){
            if(!flag[i][j])
            bfs(i,j);
        }
        ++k;
    }
    k=0;
    for(int i=1;i<=N;i=N+1-i){
        if(k>1)
            break;
        for(int j=1;j<=N;++j){
            if(!flag[j][i])
            bfs(j,i);
        }
        ++k;
    }
    for(int i=1;i<=N;++i){
        for(int j=1;j<=N;++j){
            if(!flag[i][j]){
                cout<<"2 ";
            }
            else cout<<map[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}