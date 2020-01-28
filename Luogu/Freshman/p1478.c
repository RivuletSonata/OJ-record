#include <stdio.h>
#include <stdlib.h>
void Swap(int*a,int*b);
int main(void) {
	int n,s;
	int a,b;
	int i,j,t,p,k;
	int x[10000],y[10000];
	int z[10000]={0};
	int c[10000],d[10000];
	scanf("%d%d",&n,&s);
	scanf("%d%d",&a,&b);
	t=a+b;
	for(i=1;i<=n;++i)
		{scanf("%d%d",&x[i],&y[i]);
		if(t>=x[i])
			z[i]=1;
			c[i]=y[i]; 
			d[i]=i;
		}
	for (i=1;i<=n-1;++i)
		for(j=i+1;j<=n;++j)
		if(c[i]>c[j])
			{Swap(&c[i],&c[j]);
			Swap(&d[i],&d[j]);
			}
	k=0;
	for(t=1;t<=n;++t)
		{if(z[d[t]]==1)
			{if((s-c[t])>=0)
				{++k;
				s-=c[t];
				}
			else break;
			}
		}
	printf("%d",k);
	
	return 0;
}

void Swap(int* a,int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp; 
}







