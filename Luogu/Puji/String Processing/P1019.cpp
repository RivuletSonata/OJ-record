#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int n;
    string dragon;
    string last;
    cin>>n;
    for(int i=1;i<=n;++i){
        string s;
        cin>>s;
        if(i==1){
            dragon=s;
        }
        else {
            if(s[0]!=last[last.length()-1]){
                last=s;
                break;
            }
            for(int i=0;i<s.length();++i){
                if(s[i]!=last[last.length()-1-i]){
                    dragon+=s[i];
                }
            }
        }
        last=s;
    }
    cout<<dragon.length();
    return 0;
}