//UVa Problem-10305(Ordering Tasks)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cstring>
using namespace std;

bool G[110][110];
int in[110], m, n;

struct stack{
    int q[110],t;
    stack(){
        memset(q,0,sizeof(q));
         t=0;
         }
    void push(int x){
        q[++t]=x;
        }
    int pop(){
        return q[t--];
        }
    bool empty(){
        return t?0:1;
        }
	};

void toposort(){
    stack s;
    int p[110],t=0,i,j;
    bool flag[110]={0};
    for(;;){
        if(t==m)
            break;
        for(i=1;i<=m;i++)
            if(!in[i] && !flag[i])
                s.push(i);
        while(!s.empty()){
            i=s.pop();
            p[++t]=i;
            flag[i]=1;
            for(j=1;j<=m;j++)
                if(G[i][j])
                    in[j]--;
			}
		}
    for(i=1;i<t;i++)
        printf("%d ",p[i]);
    printf("%d\n",p[t]);
	}

int main(){
    int i,x,y;
    while(scanf("%d%d",&m,&n)==2 && (m || n)){
        memset(G,0,sizeof(G));
        memset(in,0,sizeof(in));
        for(i=1;i<=n;i++){
            scanf("%d%d",&x,&y);
            G[x][y]=1;
            in[y]++;
			}
        toposort();
		}
	return 0;
	}
