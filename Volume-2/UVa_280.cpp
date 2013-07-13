//UVa Problem-280(Vertex)
//Accepted
//Running time: 0.752 sec
//Author: Milon

#include<iostream>
using namespace std;

bool visited[101];
int graph[101][101],cnt;

void DFS(int n,int start_v){
    for(int i=1;i<=n;i++){
        if(graph[start_v][i]==1 && visited[i]==false){
            visited[i]=true;
            cnt++;
            DFS(n,i);
            }
        }
    }

int main(){
    int n,start_v,end_v;
    while(cin>>n){
        if(n==0)
            break;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                graph[i][j]=0;
        while(cin>>start_v){
            if(start_v==0)
                break;
            while(cin>>end_v){
                if(end_v==0)
                    break;
                graph[start_v][end_v]=1;
                }
            }
        int num,tmp;
        cin>>num;
        for(int i=0;i<num;i++){
            cin>>tmp;
            cnt=0;
            for(int j=1;j<=n;j++)
                visited[j]=false;
            DFS(n,tmp);
            cnt=n-cnt;
            cout<<cnt;
            for(int j=1;j<=n;j++){
                if(visited[j]==false){
                    if(cnt!=0)
                        cout<<" ";
                    cout<<j;
                    cnt--;
                    }
                }
            cout<<endl;
            }
        }
    return 0;
    }

