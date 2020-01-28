#include <stdio.h>
int main() 
{int a,t,i,n,x;
 int array[4];
 	scanf("%d",&n);
 	i=n;
		while(i!=0)
		 {array[x]=i%10;
		  i=i/10;
		  x+=1;}
    printf("%d\n",x);
	printf("%d",array[x-1]);
		for(t=x-2;t>=0;--t)
		{printf(" %d",array[t]);}
	printf("\n");
		for(t=0;t<x;++t)
		{printf("%d",array[t]);}
 	system("pause");
	return 0;
}
