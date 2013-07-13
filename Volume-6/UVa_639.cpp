//UVa Problem-639(Don't Get Rooked)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char map[5][5];
int ncount=0;
int n,flag=0;
int visit[5][5];

bool dfs(int a,int b){
    if(!visit[a][b] && map[a][b]!='X'){
        ncount++;
        for(int i=a+1;map[i][b]!='X' && i<n;i++)
            visit[i][b]=1;
        for(int i=a-1;map[i][b]!='X' && i>=0;i--)
            visit[i][b]=1;
        for(int i=b+1;map[a][i]!='X' && i<n;i++)
            visit[a][i]=1;
        for(int i=b-1;map[a][i]!='X' && i>=0;i--)
            visit[a][i]=1;
        }
    visit[a][b]=2;
    if(a>0 && visit[a-1][b]!=2)
        dfs(a-1,b);
    if(a<n-1 && visit[a+1][b]!=2)
        dfs(a+1,b);
    if(b>0 && visit[a][b-1]!=2)
        dfs(a,b-1);
    if(b<n-1 && visit[a][b+1] !=2)
        dfs(a,b+1);
    }

int main(){
    while(cin>>n){
        if(!n)
            break;
        getchar();
        memset(map,0,sizeof(map));
        for(int i=0;i<n;i++){
            string str;
            getline(cin,str);
            for(int j=0;j<n;j++)
                map[i][j]=str[j];
            }
        ncount=0;
        int max=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ncount=0;
                if(map[i][j]=='.'){
                    dfs(i,j);
                    if(ncount>max)
                        max=ncount;
                    }
                memset(visit,0,sizeof(visit));
                }
            }
        cout<<max<<endl;
        }
    return 0;
    }
