//UVa Problem-574(Sum It Up)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
using namespace std;

int sum(int t,int now,int nowsum,int suma[],int sump,int x[],int xlimit){
    if(now==xlimit)
        return 0;
    nowsum+=x[now];
    int i;
    if(nowsum>t){
        for(i=now+1;i<xlimit;i++)
            if(x[now]!=x[i])
                break;
        return sum(t,i,nowsum-x[now],suma,sump,x,xlimit);
        }
    else if(nowsum<t){
        if(now==xlimit-1)
            return 0;
        suma[sump++]=x[now];
        int result=sum(t,now+1,nowsum,suma,sump,x,xlimit);
        for(i=now+1;i<xlimit;i++)
            if(x[now]!=x[i])
                break;
        result+=sum(t,i,nowsum-x[now],suma,sump-1,x,xlimit);
        return result;
        }
    else{
        int print=0;
        for(i=0;i<sump;i++){
            if(print)
                printf("+");
            printf("%d",suma[i]);
            print=1;
            }
        if(print)
            printf("+");
        printf("%d",x[now]);
        printf("\n");
        for(i=now+1;i<xlimit;i++)
            if(x[now]!=x[i])
                break;
        return 1+sum(t,i,nowsum-x[now],suma,sump,x,xlimit);
        }
    }

int main(){
    int t;
    while(scanf("%d",&t)!=EOF){
        int n;
        scanf("%d",&n);
        if(t==0 && n==0)
            break;
        int x[20]={0};
        int i;
        for(i=0;i<n;i++)
            scanf("%d",&x[i]);
        printf("Sums of %d:\n",t);
        int suma[20]={0};
        if(!sum(t,0,0,suma,0,x,n))
            printf("NONE\n");
        }
    return 0;
    }
