#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
struct em{
    int a;
    int b;
}p[1005];
bool cmp(const em &i,const em &j){
    return i.a<j.a;
}
int main() {
    int n,i;
    long long j=0;
    double t;
    cin>>n;
    for (i=1;i<=n;++i){
        cin>>p[i].a;
        p[i].b=i;
    }
    sort(p+1,p+n+1,cmp);
    for(i=1;i<=n;++i){
        j+=p[i].a*(n-i);
    }
    t=(double)j/n;
    for(i=1;i<=n;++i){
        cout<<p[i].b<<" ";
    }
    printf("\n%.2lf",t);
    return 0;
}