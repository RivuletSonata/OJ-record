#include <iostream>
#include <string>
using namespace std;

bool isfloat (string a){
    if(a.find('.')<a.length()){
        return true;
    }else return false;
}
bool isfraction (string a){
    if(a.find('/')<a.length()){
        return true;
    }else return false;
}
bool ispercent (string a){
    if(a.find('%')==(a.length()-1)){
        return true;
    }else return false;
}
void delzero(string &a,bool front){
    if(front){
        int i=0;
        while(true){
            if(i+1<a.length() && a[i]=='0'){
                a.erase(0,1);
            }else break;
        }
    }
    else {
        int i = (int)a.length()-1;
        while(true){
            if(i>0&& a[i]=='0'){
                a.erase(a.length()-1,1);
                --i;
            }else break;
        }
    }

}

void sswap(string &a,int n,int m){
    char temp;
    temp=a[n];
    a[n]=a[m];
    a[m]=temp;

}

void transfer(string &a){
    for(int i=0;i<=((int)a.length()/2-1);++i){
        sswap(a,i,(int)a.length()-1-i);
    }
}

int main() {
    string a;
    string m,n;
    cin>>a;
    if(isfloat(a)){
        m=a.substr(0,a.find('.'));
        n=a.substr(a.find('.')+1,a.length()-a.find('.'));
        transfer(m);
        transfer(n);
        delzero(m, true);
        delzero(n, false);
        cout<<m<<"."<<n;
    }else if(isfraction(a)){
        m=a.substr(0,a.find('/'));
        n=a.substr(a.find('/')+1,a.length()-a.find('/'));
        transfer(m);
        transfer(n);
        delzero(m, true);
        delzero(n, true);
        cout<<m<<"/"<<n;
    }else if(ispercent(a)){
        m=a.substr(0,a.length()-1);
        transfer(m);
        delzero(m, true);
        cout<<m<<"%";
    }else{
        transfer(a);
        delzero(a, true);
        cout<<a;
    }
    return 0;
}