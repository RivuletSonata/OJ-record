#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	int x[1000]={0};
	x[1]=1;
	for (i=2;i<=n;++i)
	{	for(j=1;j<=(i/2);++j)
		x[i]+=x[j];
		x[i]++;
		}
	printf("%d",x[n]);
		
	
	return 0;
}
