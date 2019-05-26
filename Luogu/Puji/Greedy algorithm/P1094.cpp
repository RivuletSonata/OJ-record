#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int w,n,i,p,z;
    int a[40000];
    cin>>w;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>a[i];
        sort(a+1,a+n+1);
    p=n;
    z=1;
    int t=0;
    while(p>z){
        if(a[p]+a[z]<=w){
           ++t;
            ++z;
            --p;
        }
        else{
            ++t;
            --p;
        }
    }
    if(p==z) ++t;
    cout<<t;
    return 0;
}