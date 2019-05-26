#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool a[105];
int main() {
	int n,k,m;
	int i,j,t,p;
	scanf("%d%d",&n,&m);
	t=n;
	p=0;
	while(t>0)
		{i=1;
		while(i<=m)
			{if (!a[p%n+1])
				{++i;
				}
			p=p%n+1;
			}
		a[p]=true;
		printf("%d ",p);
		--t;
		}
	return 0;
}
