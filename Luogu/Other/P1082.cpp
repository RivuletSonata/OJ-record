#include <iostream>
using namespace std;
long long a,b,x,y;
void exgcd(long long a,long long b){
	if(b==0){
		x=1;
		y=0;
		return;
	}
	exgcd(b,a%b); 
	long long pp=x;
	x=y;
	y=pp-(a/b)*y;
	
} 

 
int main() {
	cin>>a>>b;
	exgcd(a,b);
	cout<<(x%b+b)%b;
	return 0;
}
