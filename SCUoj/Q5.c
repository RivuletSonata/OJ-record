#include <stdio.h>
int main() 
{int a,b,c,d;
scanf("%d",&a);
b=a/100000;
	switch(b){
		case 0:
			c=a*0.1;
			break;
		case 1:
			c=10000+(a-100000)*0.075;
			break;
		case 2:
		case 3:
			c=17500+(a-200000)*0.05;
			break;
		case 4:
		case 5:
			c=27500+(a-400000)*0.03;
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			c=33500+(a-600000)*0.015;
			break;
		default:
			c=37500+(a-1000000)*0.01;
			break;	}
printf("%d",c);	

	system("pause");
	return 0;
}
