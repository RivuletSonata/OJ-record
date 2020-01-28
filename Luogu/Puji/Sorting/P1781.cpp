#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std; 
struct inf{
	int n;
	char p[105];
} a[25];

int px(char p[],char q[]){
	int s;
	if (strlen(p)!=strlen(q))
		return (strlen(p)>=strlen(q)?1:0);
	else {
		for(s=0;(p[s]!='\0')&&(q[s]!='\0');++s){
			if((int)p[s]-'0'>(int)q[s]-'0'){
			return 1;
			break;
			}
			if((int)p[s]-'0'<(int)q[s]-'0'){
			return 0;
			break;
			}

		}
		if(q[s]='\0')
		 return 0;
	}	
}//·µ»Ø1±íÊ¾p>q 

void qsort(struct inf *a,int n){
	int i,j;
	struct inf temp;
	for(i=1;i<n;++i)
		for(j=i+1;j<=n;++j){
			if(!px(a[i].p,a[j].p)){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
}

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i].p;
		a[i].n=i;
	}
	qsort(a,n);
	cout<<a[1].n<<endl;
	printf("%s",a[1].p);
	
	return 0;
}
