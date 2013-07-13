//UVa Problem-572(Oil Deposits)
//Accepted
//Running time: 0.016 sec
//Author: Milon

#include<iostream>
using namespace std;

int m;
int n;
char grid[100+5][100+5];
int cnt;

void dfs(int r,int c){
    if(r<0 || r>=m || c<0 || c>=n || grid[r][c]=='*')
        return;
    grid[r][c]='*';
    dfs(r-1,c);     // up
    dfs(r-1,c+1);   // top-right
    dfs(r,c+1);     // right
    dfs(r+1,c+1);   // bottom-right
    dfs(r+1,c);     // bottom
    dfs(r+1,c-1);   // bottom-left
    dfs(r,c-1);     // left
    dfs(r-1,c-1);   // top-left
    }

int main (){
    while(cin>>m>>n && m && n){
        cnt=0;
        for(int i=0;i<m;i++){
            cin>>grid[i];
            }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='@'){
                    cnt++;
                    dfs(i,j);
                    }
                }
            }
        cout<<cnt<<endl;
        }
    return 0;
    }
