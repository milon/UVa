//UVa Problem-10054(The Necklace)
//Accepted
//Running time: 1.320 sec

#include<iostream>
#include<cstring>
using namespace std;

const int M=55;
int n,flag,cnt,colournum,b;
int map[M][M];
int num[M];
bool visit[M];

void dfs(int a){
    visit[a]=true;
    cnt++;
    for(int i=0;i<51;i++){
        if(!visit[i] && map[a][i])
            dfs(i);
        }
    return ;
    }

void euler(int a){
    for(int i=1;i<51;i++){
        if(map[a][i]){
            map[a][i]--;
            map[i][a]--;
            euler(i);
            cout<<i<<' '<<a<<endl;
            }
        }
    return ;
    }

int main(){
    int test;
    cin>>test;
    for(int j=0;j<test;j++){
        if(j)
            cout<<endl;
        memset(map,0,sizeof(map));
        memset(num,0,sizeof(num));
        memset(visit,false,sizeof(visit));
        flag=0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            map[x][y]++;
            map[y][x]++;
            num[x]++;
            num[y]++;
            }
        colournum=0;
        for(int i=1;i<51;i++){
            if(num[i]){
                colournum++;
                b=i;
                }
            if(num[i]%2){
                flag=1;
                break;
                }
            }
        cnt=0;
        cout<<"Case #"<<j+1<<endl;
        if(!flag){
            dfs(b);
            if(cnt!=colournum)
                cout<<"some beads may be lost"<<endl;
            else
                euler(b);
            }
        else
            cout<<"some beads may be lost"<<endl;
        }
    return 0;
    }
