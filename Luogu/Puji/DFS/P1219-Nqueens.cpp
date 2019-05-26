#include <iostream>
#include <cstring>
using namespace std;

bool column[20],cross1[50],cross2[50];
int pos[20];
int n,sum=0;

void dfs(int row){
    if(row==n+1){
        sum++;
        if(sum<=3){
            for(int i=1;i<=n;++i){
                cout<<pos[i]<<' ';
            }
            cout<<endl;
        }
        return;
    }

    for(int i=1;i<=n;++i){
        if(column[i] && cross1[i+row] && cross2[row-i+n]){
            pos[row]=i;
            column[i]=false;
            cross1[i+row]=false;
            cross2[row-i+n]=false;//标记

            dfs(row+1);

            column[i]= true;
            cross1[i+row]= true;
            cross2[row-i+n]= true;//解除标记

        }
    }
}

int main() {
    cin>>n;
    memset(column,true,sizeof(column));
    memset(cross1,true,sizeof(cross1));
    memset(cross2,true,sizeof(cross2));
    dfs(1);
    cout<<sum<<endl;
    return 0;
}