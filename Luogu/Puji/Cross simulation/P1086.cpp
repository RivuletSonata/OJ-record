#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;

struct hs{
	int x,y,t;
}temp,a[505];


bool cmp(hs n1,hs n2){
    return n1.t>n2.t;
}
int main() {
	int m,n,k,p=0,x;
	cin>>m>>n>>k;
	for(int i=1;i<=m;++i)
		for(int j=1;j<=n;++j){
			cin>>x;
			if(x){
				a[++p].x=i;
				a[p].y=j;
				a[p].t=x;
			}
		}
	sort(a+1,a+p+1,cmp);//p is the sum of guzi
//	for(int i=1;i<=p;++i)
//	cout<<a[i].t;
//	cout<<"\n";
	a[0].x=0;a[0].y=a[1].y;
	int sum1=0,disx,disy;
	int s=0,rice=0;
	while(s<p){
		if((sum1+abs(a[s].x-a[s+1].x)+abs(a[s].y-a[s+1].y)+a[s+1].x+1)<=k){
			sum1+=abs(a[s].x-a[s+1].x)+abs(a[s].y-a[s+1].y)+1;
			rice+=a[++s].t;
		}
		else break;
	}
	
	cou     rice;
	return 0;
}
