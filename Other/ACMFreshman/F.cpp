#include<stdio.h>

int main()
{
    int t;
    int place[25];
    scanf("%d",&t);
    for(int i=1;i<=t;++i)
    {
        int M=1, N;
        scanf("%d",&N);
        if(N==1){
            printf("1.000000\n");
            continue;
        } else printf("0.");
        int key = 0;
        while (M % N && key < 6)
        {
            M *= 10;
            place[key] = M / N;
            M %= N;
            if(key<5)
                printf("%d", place[key++]);
            else key++;
        }
        if(key==6){
            M *=10;
            place[6]=M/N;
            M %= N;
            if(place[6]>=5&&place[5]<=8){
                place[5]++;
                printf("%d",place[5]);
            }
            else printf("%d",place[5]);
        }
        else for(;key<=5;++key){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}

