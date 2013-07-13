//UVa Problem-10306(e-Coins)
//Accepted
//Running time: 0.048 sec

#include<cstdio>
#include<cstring>
using namespace std;

#define INF 1000001
#define MAXN 302

int T,s,n,x[128],y[128]={0};
int dp[MAXN][MAXN]={0},mins;

int hold(int lx,int ly){
	if(dp[lx][ly]!=-1)
		return dp[lx][ly];
    int mini=INF,t;
    for(int i=1;i<=n;i++){
    	if(lx-x[i]>=0 && ly-y[i]>=0){
        	t=hold(lx-x[i],ly-y[i]);
           	dp[lx-x[i]][ly-y[i]]=t;
           	if(t+1<mini)
           		mini=t+1;
        	}
        }
    return dp[lx][ly]=mini;
	}

int main(){
	int squ,t;
    scanf("%d",&T);
    while(T--){
    	scanf("%d%d",&n,&s);
       	for(int i=1;i<=n;i++)
        	scanf("%d%d",&x[i],&y[i]);
       	memset(dp,-1,sizeof(dp));
       	dp[0][0]=0;
       	mins=INF;
       	squ=s*s;
       	for(int i=0;i<=s;i++)
        	for(int j=0;j<=s;j++)
          		if(i*i+j*j==squ) {
             		t=hold(i,j);
             		if(t<mins)
             			mins=t;
          			}
       	if(mins==INF)
       		printf("not possible\n");
       	else
       		printf("%d\n",mins);
    	}
    return 0;
	}