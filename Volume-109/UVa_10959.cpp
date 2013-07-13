//UVa Problem-10959(The Party, Part I)
//Accepted
//Running time: 0.028 sec

#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

#define MAX 1000

queue<int> q;
bool visited[MAX];
int dance[MAX][MAX],suru[MAX];

void BFS(int start_v,int p){
    for(int i=0;i<p;i++){
        if(dance[start_v][i]==1 && visited[i]==false){
            q.push(i);
            visited[i]=true;
            suru[i]=suru[start_v]+1;
            }
        }
    while(!q.empty()){
        int t=q.front();
        q.pop();
        BFS(t,p);
        }
    }

int main(){
    int n,p,d;
    char ar[125];
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        gets(ar);
        cin>>p>>d;
        int tmp_a,tmp_b;
        for(int j=0;j<p;j++){
            visited[j]=false;
            suru[j]=0;
            for(int k=0;k<p;k++)
                dance[j][k]=0;
            }
        for(int j=0;j<d;j++){
            cin>>tmp_a>>tmp_b;
            dance[tmp_a][tmp_b]=1;
            dance[tmp_b][tmp_a]=1;
            }
        suru[0]=0;
        visited[0]=true;
        BFS(0,p);
        for(int j=1;j<p;j++)
            cout<<suru[j]<<endl;
        if(i!=n-1)
            cout<<endl;
        }
    return 0;
    }

