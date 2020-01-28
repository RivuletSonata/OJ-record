#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int n,j,i;
	int x=0,y=0;
	char a[1];
	char b[1000000];
	while(1){
		scanf("%c",&a[0]);
		if(a[0]=='E')break; 
		strcat(b,a);
	}
	if(b[0]=='\0'){
		printf("0:0\n\n0:0");
	}
	else{
		for(i=0;b[i]!='\0';++i){
//		printf("%c",b[i]);
			if(b[i]=='W')++x;
			if(b[i]=='L')++y;
			if((x>=11||y>=11)&&(abs(x-y)>=2)){
				printf("%d:%d\n",x,y);
				x=0;y=0;
			}		
		}
		
		printf("%d:%d\n",x,y);
		x=0;y=0;
		printf("\n");
	
		for(i=0;b[i]!='\0';++i){
			if(b[i]=='W')++x;
			if(b[i]=='L')++y;
			if((x>=21||y>=21)&&(abs(x-y)>=2)){
				printf("%d:%d\n",x,y);
				x=0;y=0;
			}		
		}
		printf("%d:%d\n",x,y);
		x=0;y=0;
				
	}
	
	return 0;
}
