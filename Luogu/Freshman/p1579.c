#include <stdio.h>
#include <math.h>
int zs(int x);
int zs(int x){
	int i,s;
	s=0;
	i=2;
	while(i<=sqrt(x))
		{if (x%i==0)
		++s;
		++i;
		}
	if(s==0)
		return 1;
	else return 0;	
}
int main() {
	int n,x;
	int a,b,c,i,j;
	int k=0;
	scanf("%d",&n);
	for (a=2;a<=n/3;++a)
		{if(k>=1)
			break;
		for(b=a;b<=n/2;++b)
			{c=n-a-b;
			if((zs(a))&&(zs(b))&&(zs(c)))
				{printf("%d %d %d",a,b,c);
				++k;
				}
			if(k>=1)
				break;	
			}
		}
	return 0;
}
