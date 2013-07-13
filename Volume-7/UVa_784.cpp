//UVa Problem-784(Maze Exploration)
//Accepted
//Running time: 0.104 sec
//Author: Milon

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> ve;
string str;
bool visit[30][80];
int k=0;

void bfs(int x,int y){
    if(ve[x][y]!=' ' && ve[x][y]!='*')
        return;
    if(x>=k || x<0 || y>=ve[x].size() || y<0 || !visit[x][y])
        return;
    if((ve[x][y]==' ' || ve[x][y]=='*') && visit[x][y]){
        ve[x][y]='#';
        visit[x][y]=false;
        }
    bfs(x-1,y-1);
    bfs(x-1,y);
    bfs(x-1,y+1);
    bfs(x,y-1);
    bfs(x,y+1);
    bfs(x+1,y-1);
    bfs(x+1,y);
    bfs(x+1,y+1);
    return;
    }

int main(){
    int n;
    cin>>n;
    getchar();
    while(n--){
        vector<string>::iterator it;
        int i=0,j=0;
        k=0;
        memset(visit,true,sizeof(visit));
        while(getline(cin,str)){
            k++;
            ve.push_back(str);
            if(str.at(0)=='_')
                break;
            }
        bool flag=false;
        for(i=0;i<k;i++){
            for(j=0;j<ve[i].size();j++){
                if(ve[i][j]=='*'){
                    flag=true;
                    break;
                    }
                }
            if(flag==true)
                break;
            }
        bfs(i,j);
        for(int s=0;s<ve.size();s++)
            cout<<ve[s]<<endl;
        ve.clear();
        }
    return 0;
    }
