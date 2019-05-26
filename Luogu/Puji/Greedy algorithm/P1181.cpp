#include <iostream>
using namespace std;
int main() {
    int n,m,i,k=0,s=0;
    cin>>n>>m;
    int a[100005];
    for(i=1;i<=n;++i){
        cin>>a[i];
        if(k+a[i]>m){
            s++;
            k=a[i];
        }
        else{
            k+=a[i];
        }
    }
    if(k)
        s++;
    cout<<s;
    return 0;
}