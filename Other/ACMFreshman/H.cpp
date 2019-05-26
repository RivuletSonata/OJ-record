//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int matrix[1005][1005];
//int a[3];
////void dfs1(int i,int j, int n,int p){//p--1 heng p--0 shu
////    if(n>k){
////        sum1++;
////        return;
////    }
////    if(p==1){
////        if(matrix[i][j]==0)
////            dfs1(i,j+1,n+1,p);
////    }
////    else{
////        if(matrix[i][j]==0)
////            dfs1(i+1,j,n+1,p);
////    }
////
////}
////void dfs2(int i,int j, int n,int p){//p--1 heng p--0 shu
////    if(n>k){
////        sum2++;
////        return;
////    }
////    if(p==1){
////        if(matrix[i][j]==1)
////            dfs1(i,j+1,n+1,p);
////    }
////    else{
////        if(matrix[i][j]==1)
////            dfs1(i+1,j,n+1,p);
////    }
////
////}
//
//
//int main() {
//    int t;
//    cin>>t;
//    for(int z=1;z<=t;++z){
//        int n,m,k;
//        cin>>n>>m>>k;
//        for(int i=1;i<=n;++i){
//            for(int j=1;j<=m;++j){
//                cin>>matrix[i][j];
//            }
//        }
//        memset(a,0,sizeof(a));
//
//        for(int i=1;i<=n;++i){
//            for(int j=1;j<=m;++j){
//                if(j<=m-2 && (matrix[i][j]==matrix[i][j+1])&&(matrix[i][j+1]==matrix[i][j+2])){
//                    a[matrix[i][j]]++;
//                }
//                if(i<=n-2 && (matrix[i][j]==matrix[i+1][j])&&(matrix[i+1][j]==matrix[i+2][j])){
//                    a[matrix[i][j]]++;
//                }
//            }
//        }
//        cout<<a[0]<<" "<<a[1]<<endl;
//    }
//    return 0;
//}

#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1010;
int T;
int n,m;
int h[MAXN][MAXN],l[MAXN][MAXN];
int ans1,ans0;
int k;
int main(){
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d",&n,&m,&k);
        memset(h,0,sizeof(h));
        memset(l,0,sizeof(l));
        ans1 = 0;ans0 = 0;
        if(k==1){
            for(int i=1;i<=n;++i){
                for(int j=1;j<=m;++j){
                    int a;
                    scanf("%d",&a);
                    if(a==0)++ans0;
                    else ++ans1;
                }
            }
            printf("%d %d",ans0,ans1);
            continue;
        }
        for(int i=1;i<=n;++i){
            for(int j = 1;j<=m;++j){
                int a;
                scanf("%d",&a);
                h[i][j] = h[i][j-1]+a;
                l[j][i] = l[j][i-1]+a;
            }
        }

        for(int i = 1;i<=n;++i){
            for(int j = 1;j<=m-k+1;++j){
                int hh = h[i][j+k-1]-h[i][j-1];
                if(hh == k)++ans1;
                if(hh == 0)++ans0;
            }
        }
        for(int j=1;j<=m;++j){
            for(int i = 1;i<=n-k+1;++i){
                int ll = l[j][i+k-1] - l[j][i-1];
                if(ll == k)++ans1;
                if(ll == 0)++ans0;
            }
        }

        printf("%d %d\n",ans0,ans1);
    }

}
