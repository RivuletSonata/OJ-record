#include <stdio.h>
int x[10]={0};
void fj(int t);
int main() {
	int a,b,c;
	int i,j,n,t;
	j=0;
	t=0;
	scanf("%d%d%d",&a,&b,&c); 
	for(n=123;n<=345;++n)
		{if(n/a*c>999)
			break;
		if(n%a==0)
			{fj(n);
			fj(n/a*b);
			fj(n/a*c);
			}
		for (i=1;i<=9;++i)
			if(x[i]!=1)
			++j;
		if(j==0)
			{printf("%d %d %d\n",n,n/a*b,n/a*c);
			++t;
			}
		j=0;
		for (i=1;i<=9;++i)	
			x[i]=0;
		}
	if(t==0)
		printf("No!!!")	;
	return 0;
}
void fj(int t){
	int a,b,c;
	while(t!=0)
		{x[t%10]++;
		t=t/10; 
		} 
}
