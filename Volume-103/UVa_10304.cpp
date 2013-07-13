//UVa Problem-10304(Optimal Binary Search Tree)
//Accepted
//Running time: 1.720 sec

#include<iostream>
#include<string>
using namespace std;

#define N 255
#define INF 1<<28

int e[N][N],w[N][N],f[N];

int main(){
    int n;
    while(scanf("%d",&n)==1){
        memset(w,0,sizeof(w));
        memset(e,0,sizeof(e));
        for(int i=1;i<=n;i++)
            scanf("%d",&f[i]);
        for(int i=1;i<=n;i++)
            for(int j=i;j<=n;j++)
                w[i][j]=w[i][j-1]+f[j];
        for(int i=2;i<=n;i++)
            for(int j=i-1;j;j--){
                e[j][i]=INF;
                for(int k=j;k<=i;k++){
                    if(e[j][k-1]+e[k+1][i]+w[j][i]-f[k]<e[j][i]){
                        e[j][i]=e[j][k-1]+e[k+1][i]+w[j][i]-f[k];
                        }
                    }
                }
        printf("%d\n",e[1][n]);
        }
    return 0;
    }
