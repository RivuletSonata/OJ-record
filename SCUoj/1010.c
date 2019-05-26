#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[10];
	int b,c,d,x,y,n;
	for(b=0;b<=8;++b)
		{
		scanf("%d",&a[b]);
		}
	scanf("%d",&x);
	for(b=0;b<=8;++b)
		{if (x<=a[b])
			{y=b;
			break;
			}
		}
	for (b=0;b<y;++b)
		printf("%d\n",a[b]);
	printf("%d\n",x);
	for (b=y;b<=8;++b)
		printf("%d\n",a[b]);
	return 0;
}
