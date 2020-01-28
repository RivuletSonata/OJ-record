#include <iostream>
#include <cstdio>
using namespace std;

void qsort(int *a,int start,int end){
	int low=start,high=end;
	int temp,check=a[start];
	
	do{
		while(a[high]>=check&&low<high) high--;
		if(a[high]<check)
			temp=a[high],a[high]=a[low],a[low]=temp;
			
		while(a[low]<=check&&low<high) low++;
		if(a[low]>check)
			temp=a[high],a[high]=a[low],a[low]=temp; 
	}
	while(low!=high);
	
	a[low]=check;
	low--;high++;
	
	if(low>start) qsort(a,start,low);
	if(high<end)  qsort(a,high,end); 
}

void ksort(int l,int h,int a[]){
	if(h<l+2) return;
	int e=h,p=l;
	while(l<h){
		while((l++)<e && a[l]<=a[p]);
		while((h--)>p && a[h]>=a[p]);
		if(l<h) swap(a[l],a[h]); 
	}
	swap(a[h],a[p]);
	ksort(p,h,a); ksort(l,e,a); 
}
int main(void) {
	int n;
	cin>>n;
	int b[n+1];
	for(int i=1;i<=n;++i)
	scanf("%d",&b[i]);
	ksort(1,n,b);
	for(int i=1;i<=n-1;++i)
	printf("%d ",b[i]);
	cout<<b[n]<<endl;
	return 0;
}
