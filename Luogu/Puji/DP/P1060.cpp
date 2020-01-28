#include <iostream>
#include <cstdio> 
#include <cstring>
using namespace std;
int N,m;
int v[30];
int w[30];
int dp[30][30000];
int main() {
	scanf("%d%d",&N,&m);
	for(int i=1;i<=m;++i){
		scanf("%d%d",&v[i],&w[i]);
	}
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=m;++i){
		for(int j=0;j<=N;++j){
			dp[i][j]=(i==1?0:dp[i-1][j]); 
			if(j>=v[i]){
				dp[i][j]=max(dp[i][j],dp[i-1][j-v[i]]+v[i]*w[i]);
			}
		}	 
	}
	printf("%d",dp[m][N]);
	return 0;
}
