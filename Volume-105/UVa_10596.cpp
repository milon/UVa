//UVa Problem-10596(Morning Walk)
//Accepted
//Running time: 0.328 sec

#include<iostream>
using namespace std;

const int MAX=210;

int map[MAX][MAX],num[MAX];
bool flag=false,visit[MAX];
int n,r,sum=0;

void dfs(int current){
    visit[current]=true;
    sum++;
    for(int i=0;i<n;i++)
        if(!visit[i] && map[current][i])
            dfs(i);
    }

int main(){
    while(cin>>n>>r){
        memset(map,0,sizeof(map));
        memset(visit,false,sizeof(visit));
        memset(num,0,sizeof(num));
        sum=0;
        for(int i=0;i<r;i++){
            int a,b;
            cin>>a>>b;
            map[a][b]=1;
            map[b][a]=1;
            num[a]++;
            num[b]++;
            }
        flag=false;
        for(int i=0;i<MAX;i++){
            if(num[i]%2){
                flag=true;
                break;
                }
            }
        if(!flag){
            dfs(1);
            if(sum==n)
                cout<<"Possible"<<endl;
            else
                cout<<"Not Possible"<<endl;
            }
        else
            cout<<"Not Possible"<<endl;
        }
    return 0;
    }
