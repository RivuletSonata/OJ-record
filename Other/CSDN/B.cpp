#include <iostream>
#include <cstring>
using namespace std;

char map[10][10];
int n,m,t1;

bool dfs(int x,int y,int t){
    if(map[x][y]=='D'&&t==t1){
        return true;
    }else {
        if(map[x][y]=='D')
            return false;
        else if(t==t1)
            return false;
    }

    if(map[x+1][y]=='.'||map[x+1][y]=='D'){
        map[x][y]='X';
        if(dfs(x+1,y,t+1))
            return true;
        map[x][y]='.';
    }
    if(map[x][y+1]=='.'||map[x][y+1]=='D'){
        map[x][y]='X';
        if(dfs(x,y+1,t+1))
            return true;
        map[x][y]='.';
    }
    if(map[x-1][y]=='.'||map[x-1][y]=='D'){
        map[x][y]='X';
        if(dfs(x-1,y,t+1))
            return true;
        map[x][y]='.';
    }
    if(map[x][y-1]=='.'||map[x][y-1]=='D'){
        map[x][y]='X';
        if(dfs(x,y-1,t+1))
            return true;
        map[x][y]='.';
    }
    return false;
}

int main() {
    int k;
    cin>>k;
    while(k--){
        int sx,sy;
        memset(map,0,sizeof(map));
        cin>>n>>m>>t1;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                cin>>map[i][j];
                if(map[i][j]=='S'){
                    sx=i,sy=j;
                }
            }
        }
        if(dfs(sx,sy,0)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}