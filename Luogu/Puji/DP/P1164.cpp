#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int M,N;
int a[103];
int dp[103][10004];
int main() {
	scanf("%d%d",&N,&M);
	for(int i=1;i<=N;++i){
		scanf("%d",&a[i]);
	}
	
/*int f[10004];
	for(int i=1;i<=n;++i)
        for(int j=m;j>=v[i];--j)
            f[j]+=f[j-v[i]];//���ڵĻ���+=�Ҳ�������˵�ʱ��Ļ���
    cout<<f[m]<<endl;�������һ����Ļ���������Ϳ�����
*/	
	
	
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=N;++i){
		for(int j=0;j<=M;++j){
				if(j==a[i]){
					dp[i][j]=dp[i-1][j]+1;
				}
				else if(j>a[i]){
					dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i]];
				}
				else if(j<a[i]){
					dp[i][j]=dp[i-1][j];
				}
		}
	}
	printf("%d",dp[N][M]) ;
	return 0;
}
