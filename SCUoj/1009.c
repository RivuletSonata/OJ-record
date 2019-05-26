#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[3][3];
    int b,c,d,i,j,n,x;
    for (b=0;b<=2;++b)
    	{for (c=0;c<=2;++c)
    	scanf("%d",&a[b][c]);
    	
		}
	i=a[0][0]+a[1][1]+a[2][2];
	j=a[0][2]+a[1][1]+a[2][0];
	printf("%d %d",i,j);
	system("pause");
	return 0;
}
