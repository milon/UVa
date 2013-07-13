//UVa Problem-677(All Walks of length "n" from the first node)
//Accepted
//Running time: 0.068 sec
//Author: Milon

#include<cstdio>
using namespace std;

bool edge[10][10];
bool visited[10];
int cnt;
int path[5];

void output(int len){
    cnt++;
    putchar('(');
    putchar('1');
    for(int i=0;i<len;i++)
        printf(",%d",path[i]+1);
    puts(")");
    }

void solve(int n,int now,int len,int lnow){
    if(len==lnow){
        output(len);
        return;
        }
    visited[now]=true;
    for(int i=0;i<n;i++){
        if(visited[i]==true || edge[now][i]==false)
            continue;
        path[lnow]=i;
        solve(n,i,len,lnow+1);
        }
    visited[now]=false;
    }

int main(){
    int n,l;
    int test=0;
    while(scanf("%d%d",&n,&l)!=-1){
        if(test)
            puts("");
        test=1;
        cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                scanf("%d",&edge[i][j]);
            visited[i]=false;
            }
        visited[0]=true;
        solve(n,0,l,0);
        if(cnt==0)
            printf("no walk of length %d\n",l);
        int d;
        scanf("%d",&d);
        }
    return 0;
    }
