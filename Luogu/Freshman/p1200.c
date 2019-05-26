#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[10],b[10];
	int n,i,j=0;
	int x=1,y=1;
	scanf("%s",a);
	scanf("%s",b);
	while(a[i]!='\0')
		{x=x*((a[i]-'A')+1);
		++i;
		}
	while(b[j]!='\0')
		{y=y*((b[j]-'A')+1);
		++j;
		}
	if((x%47)==(y%47))
		printf("GO");
	else printf("STAY");
	return 0;
}
