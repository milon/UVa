//UVa Problem-11258(String Partition)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cstring>
using namespace std;

#define INF 2147483647
#define MAXN 210

int test,n,a[MAXN]={0};
char buf[MAXN]={'\0'};
long long dp[MAXN]={0},s;

long long max(long long a,long long b){
    if(a<b)
        a=b;
    return a;
    }

void Precal(){
    int k=0;
    memset(dp,0,sizeof(dp));
    for(int i=n-1;i>=0;i--){
        s=0;
        k=1;
        for(int j=i;j<n;j++){
            s=s*10+buf[j]-'0';
            if(s>INF)
                break;
            dp[i]=max(dp[i],s+dp[i+k]);
            k++;
            }
        }
    printf("%lld\n",dp[0]);
    }

int main(){
    scanf("%d",&test);
    while(test--){
        scanf("%s",buf);
        n=strlen(buf);
        Precal();
        }
    return 0;
    }
