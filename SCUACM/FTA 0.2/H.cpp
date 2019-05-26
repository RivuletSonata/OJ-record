#include <iostream>
using namespace std;
char line[102][102];
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        int a,b,c;
        cin>>a>>b>>c;
        for(int j=1;j<=b;++j){
            for(int t=1;t<=(2*(b-j+1));++t){
                line[2*j-1][t]='.';//奇数行处理
                line[2*j][t-1]='.';//偶数行处理
            }
            for(int t=(2*(b-j+1))+1;t<=(2*(a+b))+1;t+=2){
                line[2*j-1][t]='+';//奇数行处理

                if(t>2*(a+b-j+1)){
                    line[2*j-1][t+1]='.';
                } else
                    line[2*j-1][t+1]='-';//偶数行处理

                line[2*j][t-1]='/';//奇数行处理

                if(t>2*(a+b-j+1)){//偶数行处理
                    line[2*j][t]='|';
                } else
                    line[2*j][t]='.';
            }
        }
        for(int t=1;t<=(2*(a+b))+1;t+=2){
            line[2*b+1][t]='+';
            line[2*b+2][t]='|';
            if(t>2*a+1){
                line[2*b+1][t-1]='.';
                line[2*b+2][t-1]='/';
            }
            else {
                line[2*b+1][t-1]='-';
                line[2*b+2][t-1]='.';
            }
        }//立体中间重复部分的记录

        for(int t=1;t<=c;++t){
            for(int p=1;p<=2*(a+b)+1;++p){
                line[2*b+2*t][p]=line[2*b+2][p];
                line[2*b+2*t+1][p]=line[2*b+1][p];
            }
        }

        for(int k=1;k<=b;++k){
            for(int p=1;p<=2*(a+b)+1;++p){
                if(p>(2*(a+b)+1-(2*(b+1-k)))){
                    line[2*(b+c)+1-(2*k-2)][p]='.';
                }
                if(p>(2*(a+b)+1-(2*(b+1-k)-1))) {
                    line[2*(b+c)+1-(2*k-1)][p] = '.';
                }
            }
        }


        //尾部行的处理基于前2*b行
        //只需修改每行最后的几个字符即可

        //打印部分
        for(int k=1;k<=b+c;++k){//打印头部
            for(int p=1;p<=2*(a+b)+1;++p){
                cout<<line[2*k-1][p];
            }
            cout<<endl;
            for(int p=1;p<=2*(a+b)+1;++p){
                cout<<line[2*k][p];
            }
            cout<<endl;
        }
        for(int p=1;p<=2*(a+b)+1;++p) {
            cout << line[2 * (b + c) + 1][p];
        }
        cout<<endl;
//        //打印中间部分
//        for(int p=1;p<=2*(a+b)+1;++p){
//            cout<<line[2*b+1][p];
//        }
//        cout<<endl;
//        for(int m=1;m<=(c-b);++m){
//            for(int p=1;p<=2*(a+b)+1;++p){
//                cout<<line[2*b+2][p];
//            }
//            cout<<endl;
//            for(int p=1;p<=2*(a+b)+1;++p){
//                cout<<line[2*b+1][p];
//            }
//            cout<<endl;
//        }
//
//        //打印尾部
//        for(int k=1;k<=b;++k){
//            for(int p=1;p<=2*(a+b)+1;++p){
//                if(p<=(2*(a+b)+1-(2*k-1)))
//                    cout<<line[2*b+2][p];
//                else cout<<'.';//修改最后
//            }
//            cout<<endl;
//            for(int p=1;p<=2*(a+b)+1;++p){
//                if(p<=(2*(a+b)+1-(2*k)))
//                    cout<<line[2*b+1][p];
//                else cout<<'.';//修改修改
//            }
//            cout<<endl;
//        }
    }
    return 0;
}