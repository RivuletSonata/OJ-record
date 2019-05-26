#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
	int n,i,j,x;
	int a[105];
	int b[1005]={0};
	cin>>n;
	x=n;
	for(i=1;i<=n;++i){
		cin>>a[i];
		if(b[a[i]]) {
			a[i]=0;
			--x;	
		}
		++b[a[i]];
	}
	sort(a+1,a+n+1);
	cout<<x<<endl;
	for(i=1;i<=n;++i)
		if(a[i])
		cout<<a[i]<<' ';
	
	return 0;
}
