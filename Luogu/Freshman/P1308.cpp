#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct 	WORD{
	string spell;
	int sum=0;
	int place;
} word[1000000];
 
int main() {
	int num=0;
	int k=0;
	string fword;
	string inword;
	int location=0;
	cin>>fword;
	transform(fword.begin(), fword.end(), fword.begin(), ::toupper);
	while(cin>>inword){
		int js=0;	
		transform(inword.begin(), inword.end(), inword.begin(), ::toupper);
		for(int i=1;i<=k;++i){
		  	if(inword==word[i].spell){
		  		word[i].sum++;
		  		js++;
		  		break;
			}
		}
		if(!js){
			word[k++].spell=inword;
			word[k].sum=1;
			word[k].place=location;
			num++;
		}
		location++;
	}
	int f=0;
	for(int i=1;i<=num
	;++i){
		if(word[i].spell==fword){
			cout<<word[i].sum<<" "<<word[i].place<<endl;
			++f;
			break;
		}
	}
	if(!f){
		cout<<"-1"; 
	}
}
