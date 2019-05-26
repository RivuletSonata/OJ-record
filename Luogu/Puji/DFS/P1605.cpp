#include <iostream>
#include <cstring>
#include <queue>
#include <stack>
using namespace std;

#define isok(a,b) (map[a][b]!='1')&&(visited[a][b]==false)
#define expand(a,b)  {k.r=a;k.c=b;v.push(k);}

char map[110][110];
bool visited[110][110];
struct point{
    int r,c;
};
int n,m,t;
int sx,sy,fx,fy,zx,zy;
int sum=0;

queue<point> q;
stack<point> v;

void DFS(int r,int c){
    if(r==fx && c==fy ){
        ++sum;
        return;
    }

    visited[r][c]=true;//标记

    if(isok(r-1,c)) DFS(r-1,c);
    if(isok(r,c-1)) DFS(r,c-1);
    if(isok(r+1,c)) DFS(r+1,c);
    if(isok(r,c+1)) DFS(r,c+1);//往四个方向expand

    visited[r][c]=false;//别忘记复位
}


void bfs()
{
    queue<oo> q;      //定义结构体后，可以直接使用结构体名定义变量或者队列。
    sa.x = x;
    sa.y = y;         //横纵坐标替换，这样写起来方便。
    sa.used[x][y] = 1;//标记走过的路径
    q.push(sa);
    while(!q.empty())
    {
        oo now = q.front();     //一起拿出来
        q.pop();
        for(int i = 0;i < 4; i++)
        {
            int sx = now.x + dx[i];
            int sy = now.y + dy[i];
            if( now.used[sx][sy]
                || vis[sx][sy]
                || sx == 0 || sy == 0
                || sx > n || sy > m)
                continue;    //如果这里走过，或者这里是障碍，或者这里是墙壁，那么这里就不能走。
            if(sx == a && sy == b)
            {
                ans++;           如果这里是终点，那么结果数量加一
                continue;
            }
            sa.x = sx;
            sa.y = sy;
            memcpy(sa.used,now.used,sizeof(now.used));
            sa.used[sx][sy] = 1;     //这里的操作都是为了标记路径
            q.push(sa);
        }
    }
}


void BFS(int r,int c){
    struct point k,p;
    p.r=r;
    p.c=c;
    v.push(p);

    while(!v.empty()){
        p=v.top();
        v.pop();
        r=p.r;
        c=p.c;
        visited[p.r][p.c]=true;

        if(r==fx && c==fy){
            sum++;
        }
        else{
            if(isok(r-1,c))  expand(r-1,c);
            if(isok(r,c-1))  expand(r,c-1);
            if(isok(r+1,c))  expand(r+1,c);
            if(isok(r,c+1))  expand(r,c+1);
        }

    }
    return;
}

int main() {
    memset(visited,0,sizeof(visited));
    cin>>n>>m>>t;
    cin>>sx>>sy>>fx>>fy;
    int i,j;
    for(j=0;j<=m+1;++j){
        map[0][j]='1';
        map[n+1][j]='1';
    }
    for(i=0;i<=n+1;++i){
        map[i][0]='1';
        map[i][m+1]='1';
    }                       //封装边界；
    for(i=1;i<=n;++i){
        for(j=1;j<=m;++j){
            map[i][j]='0';
        }                  //默认全通
    }
    for(int s=1;s<=t;++s){
        cin>>zx>>zy;
        map[zx][zy]='1';    //设置障碍
    }//初始化迷宫；
    DFS(sx,sy);
    cout<<sum;
    return 0;
}