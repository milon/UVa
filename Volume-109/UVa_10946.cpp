//UVa Problem-10946(You want what filled?)
//Accepted
//Running time: 0.024 sec

#include<cstdio>
#include<algorithm>
using namespace std;

int R,C;
char suru[50+3][50+3];
int cnt;

struct node{
    char ch;
    int f;
    }p[2600];

void dfs(int r,int c,char k){
    if(r<0 || r==R || c<0 || c==C || suru[r][c]!=k)
        return;
    cnt++;
    suru[r][c]='.';
    dfs(r-1,c,k);
    dfs(r+1,c,k);
    dfs(r,c+1,k);
    dfs(r,c-1,k);
    }

bool cmp(node x,node y){
    if(x.f>y.f)
        return true;
    if(x.f==y.f && x.ch<y.ch)
        return true;
    return false;
    }

int main(){
    int kase=0;
    while(scanf("%d %d",&R,&C)){
        if(R==0 && C==0)
            break;
        for(int i=0;i<R;i++)
            scanf("%s",suru[i]);
        int len=0;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(suru[i][j]!='.'){
                    cnt=0;
                    p[len].ch=suru[i][j];
                    dfs(i,j,suru[i][j]);
                    p[len++].f=cnt;
                    }
                }
            }
        sort(p,p+len,cmp);
        printf ("Problem %d:\n",++kase);
        for(int i=0;i<len;i++)
            printf("%c %d\n",p[i].ch,p[i].f);
        }
	return 0;
    }


