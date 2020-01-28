#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int hw(int n); 
int zs(int n);

int main() {
	int n;
	int a,b;
	scanf("%d%d",&a,&b);
	if (a%2==0)
	++a;
	for(n=a;n<=b;n=n+2)
		{if(n==9989901)
            break;
		if(hw(n)&&zs(n))
			printf("%d\n",n);
		
		}
	return 0;
}

int hw(int n){
	int a[10];
	int s;
	int p,t=0;
	int j=0;
	s=n;
	p=0;
	while (s>=10)
		{a[j]=s%10;
		s=s/10;
		++j;
		}
	a[j]=s;
	for(t=0;t<=(j/2);++t)
		if(a[t]!=a[j-t])
		++p;
	if(p==0)
		return 1;
	else return 0;
}

int zs(int n){
	int j,a=0;
	for(j=2;j<=sqrt(n);++j)
		{if(n%j==0)
			++a;
		}
	if(a==0)
		return 1;
	else return 0;
}

