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
		} //�����ľ���� ͳ��ÿ����ĸ�ĳ���Ƶ�Σ� 
	s=l[0];
	for(i=0;i<=25;++i)
		if(l[i]>s)
		s=l[i];//ȡ����� 
	for(i=s;i>=1;--i)
		{for(j=0;j<=24;++j)//�Ӷ��˿�ʼ��� 
			{if(l[j]<i)
				printf("  ");
			else printf("* ");
			 } 
		if(l[25]<i)
				printf(" ");
			else printf("*");
		printf("\n");//���� 
		}
	printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
	return 0;
}
