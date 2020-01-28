#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k=0,t=0;
	int a[10004];
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		scanf("%d",&a[i]);
		t+=a[i];
	}
	t/=n;
	for(i=1;i<=n;++i)
		a[i]-=t;
	i=1;j=n;
	while(a[i]==0)++i;
	while(a[j]==0)--j;
	while(i<j){
		a[i+1]+=a[i];
		a[i]=0;
		++i;++k;
		while(a[i]==0)
		++i; 
	}
	printf("%d",k);
	
	return 0;
}
