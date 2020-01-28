#include <iostream>
using namespace std;
int main(){
	int n,i,j;
	int a,b,c;
	cin>>n;
	for(i=1;i<=n;++i){
		cin>>b;
		if(i==1){
			if(b>1)
				cout<<b<<"x^"<<n-i+1;
			else {
				if(b==1)
					cout<<"x^"<<n-i+1;
				else {
					if(b<0){
						if(b==-1)
							cout<<"-"<<"x^"<<n-i+1;
						else
							cout<<b<<"x^"<<n-i+1;
					}	
				}		
			}
		}
		else {
		if (i==n){
			if(b>1)
				cout<<"+"<<b<<"x";
			else {
				if(b==1)
					cout<<"+"<<"x";
				else {
					if(b<0){
						if(b==-1)
							cout<<"-"<<"x";
						else
							cout<<b<<"x";
					}	
				}		
			}
		}else{
				if(b>1)
				cout<<"+"<<b<<"x^"<<n-i+1;
			else {
				if(b==1)
					cout<<"+"<<"x^"<<n-i+1;
				else {
					if(b<0){
						if(b==-1)
							cout<<"-"<<"x^"<<n-i+1;
						else
							cout<<b<<"x^"<<n-i+1;
					}	
				}		
			}
		}
		}
		
	}
	cin>>c;
		if(c>0)
			cout<<"+"<<c;
		if(c<0)
			cout<<c;
		
	return 0;
}
