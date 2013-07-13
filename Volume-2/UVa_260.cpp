//UVa Problem-260(Il Gioco dell'X)
//Accepted
//Running time: 0.076 sec
//Author: Milon

#include<iostream>
using namespace std;

const int dy[]={-1,0,-1,1,0,1};
const int dx[]={-1,-1,0,0,1,1};

bool visited[200][200];
string m[200];

bool dfs(int n,int x,int y){
    if(y==n-1)
        return true;
    visited[y][x]=true;
    for(int i=0;i<6;i++){
        int nextx=x+dx[i];
        int nexty=y+dy[i];
        if(nextx==-1 || nexty==-1 || nextx==n || nexty==n || visited[nexty][nextx] || m[nexty][nextx]=='w')
            continue;
        if(dfs(n,nextx,nexty))
            return true;
        }
    return false;
    }

bool solve(int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            visited[i][j]=false;
    for(int i=0;i<n;i++){
        if(m[0][i]=='b' && !visited[0][i]){
            if(dfs(n,i,0))
                return true;
            }
        }
    return false;
    }

int main(){
    int n,tc=0;
    while(cin>>n && n){
        for(int i=0;i<n;i++)
            cin>>m[i];
        cout<<++tc<<" ";
        if(solve(n))
            cout<<"B"<<endl;
        else
            cout<<"W"<<endl;
        }
    return 0;
    }
