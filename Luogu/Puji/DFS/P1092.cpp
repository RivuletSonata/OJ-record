#include<cstdio>
#include<algorithm>
//#include<string.h>

using namespace std;

int n,cnt;

#define maxn 30
int a[maxn],b[maxn],c[maxn];//×ÖÄ¸±àºÅ 
char s1[maxn],s2[maxn],s3[maxn];//Ô­Ê¼×ÖÄ¸ 
int num[maxn],Next[maxn];
bool used[maxn];

bool Judge(){
	int x=0;
	for(int i=n-1;i>=0;--i){
		int A=num[a[i]],B=num[b[i]],C=num[c[i]];
		if((A+B+x)%n!=C)
			return false;
		x=(A+B+x)/n;
	}
	return true;
}

bool CanPrune(){//¼ôÖ¦º¯ÊýÎªtrueÊ±  dfs¼ôÖ¦
	if(num[a[0]]+num[b[0]]>=n) return true;
	for(int i=n-1;i>=0;--i){
		int A=num[a[i]],B=num[b[i]],C=num[c[i]];
		if(A==-1||B==-1||C==-1) continue;
		 if((A+B)%n!=C&&(A+B+1)%n!=C)
            return true;
	}
	return false;
}

void Print(){
	for(int i=0;i<=n-1;++i){
		printf("%d ",num[i]);
	}
	exit(0);
}
void dfs(int x) {
    if(CanPrune()==true) return;
    if(x==n) {
        if(Judge()==true) Print();
        return;
    }
    for(int i=n-1;i>=0;i--)
        if(used[i]==false) {
            num[Next[x]]=i;
            used[i]=true;
            dfs(x+1);
            num[Next[x]]=-1;
            used[i]=false;
        }
    return;
}

inline int id(char k){
	return k-'A';
}

void GetNext(int x) {
    if(used[x]==false) {
        used[x]=true;
        Next[cnt++]=x;
    }
    return;
}

int main(){
	scanf("%d",&n);
	scanf("%s%s%s",s1,s2,s3);
//	memset(num,-1,sizeof(num));
	for(int i=0;i<n;++i){
		a[i]=id(s1[i]);
		b[i]=id(s2[i]);
		c[i]=id(s3[i]);
		num[i]=-1;
	}
	for(int i=n-1;i>=0;i--) {
        GetNext(a[i]);
        GetNext(b[i]);
        GetNext(c[i]);
	}
	for(int i=0;i<n;i++) used[i]=false;
	dfs(0);
    return 0;
} 
