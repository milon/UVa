//UVa Problem-11679(Sub-prime)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main(){
    int b,n;
    int reserve[30];
    while(scanf("%d %d",&b,&n)){
        if(b==0 && n==0)
            break;
        for(int i=1;i<=b;i++)
            scanf("%d",&reserve[i]);
        for(int i=0;i<n;i++){
            int d,c,v;
            scanf("%d %d %d",&d,&c,&v);
            reserve[d]-=v;
            reserve[c]+=v;
            }
        bool suru=false;
        for(int i=1;i<=b;i++){
            if(reserve[i]<0){
                suru=true;
                break;
                }
            }
        if(suru)
            printf("N\n");
        else
            printf("S\n");
        }
    return 0;
    }
