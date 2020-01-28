#include <stdio.h>
#include <math.h>
void Bubble(int* array,int* array2,int size);
void bubble(int* array,int size)
{
	int t1;
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=size-i;j++)
		{
			if(*(array+j)>*(array+j+1))//½»»»
			{
                t1=*(array+j);
				*(array+j)=*(array+j+1);
				*(array+j+1)=t1;				
			}
		}
	}
}

int max(int a,int b){
	return a>=b?a:b;
	}
int min(int a,int b){
	return a<=b?a:b;
	}	 
int main() {
	int m,n,k,l,w;
	int x,y,p,q;
	int i,j,s,t;
	int a[2005]={0},b[2005]={0};
	int c[2005],d[2005];
	scanf("%d%d%d%d%d",&m,&n,&k,&l,&w);
	for (i=1;i<=w;++i){
		scanf("%d%d%d%d",&x,&y,&p,&q);
		if(x==p){
			b[min(y,q)]++;
		}
		else a[min(x,p)]++;
	}
	Bubble(a,c,m);
	Bubble(b,d,n);
	bubble(c,k);
	bubble(d,l);
	for(s=1;s<=k;++s)
		printf("%d ",c[s]);
	printf("\n");
	for(t=1;t<=l;++t)
		printf("%d ",d[t]); 
	return 0;
}

	void Bubble(int* array,int* array2,int size)
{
	int t1,t2;
	for(int s=1;s<=size;s++)
		*(array2+s)=s;
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=size-i;j++)
		{
			if(*(array+j)<*(array+j+1))//½»»»
			{
                t1=*(array+j);
				*(array+j)=*(array+j+1);
				*(array+j+1)=t1;
				t2=*(array2+j);
				*(array2+j)=*(array2+j+1);
				*(array2+j+1)=t2;				
			}
 
		}
	}
}

