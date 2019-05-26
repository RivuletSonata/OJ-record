#include <stdio.h>
	char a[100000];
	int l[30]; 
	int n,x,i,j,b,s;
int main() {
	for(i=1;i<=4;++i)
		{gets(a);
		j=0;
		while(a[j]!='\0')
			{if(a[j]>='A'&& a[j]<='Z')
			 l[a[j]-'A']++;
			 ++j;
			}	
		} //读入四句句子 统计每个字母的出现频次； 
	s=l[0];
	for(i=0;i<=25;++i)
		if(l[i]>s)
		s=l[i];//取最大数 
	for(i=s;i>=1;--i)
		{for(j=0;j<=24;++j)//从顶端开始输出 
			{if(l[j]<i)
				printf("  ");
			else printf("* ");
			 } 
		if(l[25]<i)
				printf(" ");
			else printf("*");
		printf("\n");//换行 
		}
	printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
	return 0;
}
