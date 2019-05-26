#include <math.h>
int main() {
	int a,b,c,x,n,i,j;
	scanf("%d",&n);
	c=0;
	for(a=2;a<=n;++a)//ÕÒËØÊý 
		{for(b=2;b<=sqrt(a);++b)//ÑéÖ¤ 
			{if(a%b==0) 
			    {++c;}
	        }
	    if(c==0)
		    {printf("%d\n",a);}
	    c=0;
        }
	system("pause");
	return 0;
}
