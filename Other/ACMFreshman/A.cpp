//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int t,n,q;
//int s[1000004];
//int mark;
//int tim[1000000];
//struct qj{
//    int l;
//    int r;
//}qj1[1000004],qj2[1000004];
//
//bool cmp(const qj &i,const qj &j){
//    return i.l<j.l;
//}
//
//int main() {
//    cin>>t;
//    for(int z=1;z<=t;++z){
//        memset(tim,0,sizeof(tim));
//        mark=0;
//        cin>>n>>q;
//        for(int i=1;i<=n;++i){
//            cin>>qj1[i].l>>qj1[i].r;
//            }
//        }
//        sort(qj1+1,qj1+n+1,cmp);
//        for(int i=1;i<=n-1;++i) {
//            if (qj1[i].r >= qj1[i + 1].l) {
//                qj1[i + 1].r = max(qj1[i + 1].r, qj1[i].r);
//                qj1[i + 1].l = qj1[i].l;
//                qj1[i].l = qj1[i].r = 0;
//            }
//        }
//        for(int i=1;i<=n;++i){
//            if(qj1[i].l)
//            for(int j=qj1[i].l;j<=qj1[i].r;++j){
//                tim[j]=1;
//        }
//
//        for(int i=1;i<=q;++i){
//            cin>>s[i];
//            if(tim[s[i]])
//                cout<<"Yes"<<endl;
//            else cout<<"No"<<endl;
//        }
//
//
////        for(int i=1;i<=q;++i){
////            mark=0;
////            for(int j=1;j<=n;++j){
////                if(s[i]>=qj1[j].l&&s[i]<=qj1[j].r){
////                    ++mark;
////                    break;
////                }
////            }
////            if(mark)
////                cout<<"Yes"<<endl;
////            else cout<<"No"<<endl;
////        }
//    }
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10000010;
int t,n,q;
struct qj{
    int l;
    int r;
}qj1[MAXN];
bool flag[MAXN];

bool cmp(const qj &i,const qj &j){
    return i.l<j.l;
}

int tot = 0;
int maxx = 0;

int main() {
    scanf("%d",&t);
    while(t--){
        memset(flag,0,sizeof(flag));
        scanf("%d%d",&n,&q);
        for(int i=1;i<=n;++i){
            scanf("%d%d",&qj1[i].l,&qj1[i].r);
            maxx = max(maxx,qj1[i].r);
        }
        sort(qj1+1,qj1+n+1,cmp);


        int sig = qj1[1].l;
        for(int i=sig;i<=qj1[1].r;++i){
            flag[i] = 1;
        }

        sig = qj1[1].r;
        for(int i=2;i<=n;++i){
            if(sig>qj1[i].r)continue;

            sig = max(sig,qj1[i].l);
            while(sig<=qj1[i].r){
                flag[sig] = 1;
                ++sig;
            }
        }//合并标记


        for(int i=1;i<=q;++i){
            int x;
            scanf("%d",&x);
            if(x>=MAXN || x<qj1[1].l){
                printf("No\n");
                continue;
            }
            if(flag[x])printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
