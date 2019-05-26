#include <iostream>
#include <string>

using namespace std;

struct Character {
    char c;
    int num;
}character[10000];

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        string a;
        cin>>a;
        int t=1;
        character[1].c=a[0];
        character[1].num=1;
        for(int j=1;j<a.length();++j){
            if(a[j]!=a[j-1]){
                character[++t].c=a[j];
                character[t].num=1;
            }else {
                character[t].num++;
            }
        }
        for(int s=1;s<=t;s++){
            if(character[s].num>1)
                cout<<character[s].num;
            cout<<character[s].c;
        }
        cout<<endl;
    }
    return 0;
}