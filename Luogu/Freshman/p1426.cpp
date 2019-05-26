#include <iostream>
using namespace std;
int main() {
    double t1,t,v,s,x,lc=0,k,lc2;
    cin>>s>>x;
    k=s-x;
    v=7;
    while(lc<=k){
        lc+=v;
        v*=0.98;
        ++t;
    }
    t1=(k-lc)/v;
    if(((1-t1)*v+t1*v*0.98)>=(2*x))
        cout<<"n";
    else cout<<"y";
    return 0;
}