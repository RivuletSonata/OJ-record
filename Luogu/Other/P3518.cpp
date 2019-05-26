#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

#define LL long long

LL gcd(LL a,LL b){
	return b?gcd(b,a%b):a;
}

LL n,k;
LL a[250001];
LL q[250005];
bool f[250001];
int main() {
	scanf("%lld %lld",&n,&k);
	for(LL i=1;i<=k;++i){
		scanf("%lld",&a[i]);
	}
	LL cnt=0;
	a[k]=gcd(n,a[k]);
	
	for(LL i=1;i*i<=a[k];++i){
		if(a[k]%i==0){
			q[++cnt]=i;
			if(i*i!=a[k])q[++cnt]=a[k]/i; 
		} 
	}//保存所有因子； 
	
	sort(q+1,q+cnt+1);//排序 
	
	for(LL i=1;i<k;++i){
		a[i]=gcd(a[i],a[k]);
	}//处理一下a[] 
	
	for(LL i=1;i<k;i++){
		LL p=lower_bound(q+1,q+cnt+1,a[i])-q;
		f[p]=true;
	} 
	
	for(LL i=1;i<=cnt;++i){
		if(f[i]){
			for(int j=1;j<i;++j){
				if(q[i]%q[j]==0)
				f[j]=true;
			}
		}
	}  
	LL ans;
	for(ans=1;f[ans];++ans);
	printf("%lld",n/q[ans]);
	return 0;
}
