#include <stdio.h>
int p[100001][5]={0};
int main() {
	int n,i,t,s;
	int a,b,g,k;
	int x,y;
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%d%d%d%d",&p[i][1],&p[i][2],&p[i][3],&p[i][4]);		
	}
	scanf("%d%d",&x,&y);
	for(i=n;i>=1;--i)
		if(x>=p[i][1]&&x<=p[i][1]+p[i][3]&&y>=p[i][2]&&y<=p[i][4]+p[i][2]){
			printf("%d",i);
			break;
		}
	if(i==0)
		printf("-1");	
	return 0;
}
