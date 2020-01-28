#include <iostream>
using namespace std;
int n;
int fish[102]; 
int main() {
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>fish[i];
		int sum=0;
		for(int j=1;j<i;++j){
			if(fish[j]<fish[i]){
				++sum;
			}
		}
		cout<<sum<<" ";
	}
	return 0;
}
