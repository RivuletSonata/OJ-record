#include <stdio.h>
int main() {
	char a[100000];
	gets(a);
	int i=0;
	int j=0;
		while(a[i]!='\0')
			++i;
	int len=i;
	if(a[0]!='-')
		{for(i=len-1;i>=0;--i)
			{if(a[i]!='0')
				++j;
			if(j) 
			printf("%c",a[i]);} 
			
		}
	else 
	{printf("-");
	for(i=len-1;i>=1;--i)
		 {if (a[i]!='0')
		 	++j;
		if(j)
			printf("%c",a[i]);
			
		 }
	}
	return 0;
}
