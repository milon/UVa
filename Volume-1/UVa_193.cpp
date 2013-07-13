//UVa Problem-193(Graph Coloring)
//Accepted
//Running time: 0.020 sec
//Author: Milon

#include<iostream>
using namespace std;

#define N 100
#define G 0
#define W 1
#define B 2

int ans;
int path[N];
int edge[100][100];

void solve(int n,int now,int *color,int tmp){
    if(n-now+tmp<ans)
        return;
    if(n==now){
        if(tmp>ans){
            ans=tmp;
            int p=0;
            for(int i=0;i<n;i++)
                if(color[i]==B)
                    path[p++]=i;
            }
        return;
        }
    int cntg=0;
    for(int i=0;i<n;i++){
        if(edge[now][i]==0)
            continue;
        if(color[i]==B){
            color[now]=W;
            solve(n,now+1,color,tmp);
            return;
            }
        else if(color[i]==G)
            cntg++;
        }
    color[now]=B;
    solve(n,now+1,color,tmp+1);
    if(cntg!=0){
        color[now]=W;
        solve(n,now+1,color,tmp);
        }
    color[now]=G;
    }

int main(){
    int n,e,test;
    cin>>test;
    while(test--){
        cin>>n>>e;
        int color[n];
        fill(color,color+n,G);
        ans=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                edge[i][j]=0;
        for(int i=0;i<e;i++){
            int f,t;
            cin>>f>>t;
            f--;
            t--;
            edge[f][t]=edge[t][f]=1;
            }
        solve(n,0,color,0);
        cout<<ans<<endl;
        for(int i=0;i<ans;i++){
            if(i)
                cout<<' ';
            cout<<path[i]+1;
            }
        cout<<endl;
        }
    return 0;
    }
