#include <string>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
	int M1_origin,M2_origin;
	string command;
	while(scanf("%d%d",&M1_origin,&M2_origin)!=EOF){
		int R1=0,R2=0,R3=0;
		int M1=M1_origin;
		int M2=M2_origin;
		cin>>command;
		for(int i=0;i<command.length();++i){
			if(command[i]=='A'){
				R1=M1;
			}else if(command[i]=='B'){
				R2=M2;
			}else if(command[i]=='C'){
				M1=R3;
			}else if(command[i]=='D'){
				M2=R3;
			}else if(command[i]=='E'){
				R3=R1+R2;
			}else if(command[i]=='F'){
				R3=R1-R2;
			}
		}
		cout<<M1<<","<<M2<<endl; 
	} 
	return 0; 
}
