//UVa Problem-10667(Largest Block)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
using namespace std;

#define MAX 2147483647
#define N 120

char map[N][N];
int table[N][N];

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int i,j,k,h,s,b,x1,y1,x2,y2,min,max,tmp;
        scanf("%d %d",&s,&b);
        for(i=1;i<=s;i++)
            for(j=1;j<=s;j++)
                map[i][j]=1;
        for(k=0;k<b;k++){
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            for(i=x1;i<=x2;i++)
                for(j=y1;j<=y2;j++)
                    map[i][j]=0;
            }
        for(i=1;i<=s;i++)
            for(j=0;j<=s;j++)
                table[i][j]=map[i][j]?table[i][j-1]+1:0;
        max = 0;
        for(i=1;i<=s;i++){
            for(j=1;j<=s;j++){
                min=MAX;
                for(k=i,h=1;k<=s;k++,h++){
                    if(map[k][j]==0)
                        break;
                    min=(min<table[k][j])?min:table[k][j];
                    tmp=min*h;
                    max=(max>tmp)?max:tmp;
                    }
                }
            }
        printf("%d\n",max);
        }
    return 0;
    }
