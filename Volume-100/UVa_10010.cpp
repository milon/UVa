//UVa Problem-10010(Where's Waldorf?)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cstring>
using namespace std;

#define maxn 57

long test,m,n,k;
char suru[maxn][maxn];
const long xd[]={-1,-1,0,1,1,1,0,-1},yd[]={0,1,1,1,0,-1,-1,-1};

void search(const char *a,long &x,long &y){
    long pos,xx,yy;
    for(long i=1;i<=m;i++){
        for(long j=1;j<=n;j++){
            if(suru[i][j]==a[0]){
                for(long t=0;t<8;t++){
                    pos=0;
                    xx=i;
                    yy=j;
                    while(a[pos] && a[pos]==suru[xx][yy]){
                        xx+=xd[t];
                        yy+=yd[t];
                        pos++;
                        }
                    if(a[pos]==0){
                        x=i;
                        y=j;
                        return;
                        }
                    }
                }
            }
        }
    }

int main(){
    scanf("%ld",&test);
    for(long cas=1;cas<=test;cas++){
        long x,y;
        char word[maxn];
        if(cas>=2)
            printf("\n");
        memset(suru,0,sizeof(suru));
        scanf("%ld%ld",&m,&n);
        for(long i=1;i<=m;i++){
            getchar();
            for(long j=1;j<=n;j++){
                scanf("%c",&suru[i][j]);
                if(suru[i][j]>='a' && suru[i][j]<='z')
                    suru[i][j]+='A'-'a';
                }
            }
        scanf("%ld",&k);
        for(long i=1;i<=k;i++){
            scanf("%s",word);
            long j=0;
            while(word[j]){
                if(word[j]>='a' && word[j]<='z')
                    word[j]+='A'-'a';
                j++;
                }
            search(word,x,y);
            printf("%ld %ld\n",x,y);
            }
        }
    return 0;
    }
