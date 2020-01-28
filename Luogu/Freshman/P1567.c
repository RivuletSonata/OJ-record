#include <stdio.h>
	char a[1000000];
	int n,x,i,j,b,s;
int main() {
	scanf("%d%s",&n,a);
	for(j=0;a[j]!='\0';j++)
		printf("%c",(a[j]-'a'+n)%26+'a');
		
	return 0;
}
