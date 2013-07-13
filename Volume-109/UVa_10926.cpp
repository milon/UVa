//UVa Problem-10926(How Many Dependencies?)
//Accepted
//Running time: 0.032 sec

#include<cstdio>
#include<cstring>
#include<climits>
using namespace std;

bool matrix[100+3][100+3];
bool vis[100+3];
int n;

int countVis(){
    int ret=0;
    for(int i=1;i<=n;i++)
        if(vis[i])
            ret++;
    return ret;
    }

void dfs(int u){
    vis[u]=true;
    for(int i=1;i<=n;i++)
        if(matrix[u][i] && !vis[i])
            dfs(i);
    }

int main(){
    while(scanf("%d",&n) && n){
        memset(matrix,false,sizeof(matrix));
        for(int i=0;i<n;i++){
            int m;
            scanf("%d",&m);
            int k;
            for(int j=0;j<m;j++){
                scanf("%d",&k);
                matrix[i+1][k]=true;
                }
            }
        int freq[100+3];
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++){
            memset(vis,false,sizeof(vis));
            dfs(i+1);
            freq[i+1]=countVis();
            }
        int maxi=INT_MIN;
        int ind;
        for(int i=1;i<=n;i++){
            if(maxi<freq[i]){
                maxi=freq[i];
                ind=i;
                }
            }
        printf("%d\n",ind);
        }
	return 0;
    }
