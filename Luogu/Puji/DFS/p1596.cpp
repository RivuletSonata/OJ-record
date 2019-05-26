#include <iostream>
using namespace std;
char field[105][105];
int n,m;
void dfs(int x,int y,int N,int M){
    field[x][y] ='.';//将现在所在位置替换为.
    for(int dx = -1; dx<=1; dx ++){
        for(int dy = -1; dy<=1 ; dy++){
            //向x方向移动dx，向y方向移动dy,移动的结果为（nx,ny）
            int nx=x+dx,ny=y+dy;
            //判断（nx,ny）是不是在院子内，以及是否有积水
            if (0<= nx && nx<N && 0<=ny && ny<M &&field[nx][ny] == 'W')
                dfs(nx,ny,N,M);
        }
    }
    return;
}

void solve(int N,int M){
    int res = 0;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            if(field[i][j]=='W'){
                //从有w的地方开始dfs
                dfs(i,j,N,M);
                res++;
            }
        }
    }
    cout<<res<<endl;
}
int main() {
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>field[i][j];
        }
    }
    solve(n,m);
    return 0;
}