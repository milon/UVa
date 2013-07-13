//UVa Problem-10189(Minesweeper)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    const long maxn=200;
    const long xd[]={-1,-1,0,1,1,1,0,-1};
    const long yd[]={0,1,1,1,0,-1,-1,-1 };
    long n,m,test=0;
    while(scanf("%ld%ld",&n,&m)==2){
        if(n==0&&m==0) break;
        getchar();
        test++;
        char map[maxn][maxn]={0};
        long a[maxn][maxn]={0};
        memset(map,0,sizeof(map));
        memset(a,0,sizeof(a));
        for(long i=1;i<=n;i++){
            for(long j=1;j<=m;j++)
                scanf("%c",&map[i][j]);
            getchar();
            }
        for(long i=1;i<=n;i++){
            for(long j=1;j<=m;j++){
                if(map[i][j]=='*') continue;
                for(long k=0;k<8;k++){
                    long x=i+xd[k],y=j+yd[k];
                    if(x>=1&&x<=n&&y>=1&&y<=m&&map[x][y]=='*')
                        a[i][j]++;
                    }
                }
            }
        if(test>1)
            putchar('\n');
        printf("Field #%ld:\n",test);
        for(long i=1;i<=n;i++){
            for(long j=1;j<=m;j++)
                if(map[i][j]=='*')
                    putchar('*');
                else
                    printf("%ld",a[i][j]);
                putchar('\n');
            }
        }
    return 0;
    }
