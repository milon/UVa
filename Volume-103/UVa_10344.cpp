//UVa Problem-10344(23 Out of 5)
//Accepted
//Running time: 1.432 sec

#include<iostream>
using namespace std;

bool visit[5];
int array[5];
bool flag=false;

void dfs(int a,int current){
    if(a==5 && current==23){
        flag=true;
        return;
        }
    for(int i=0;i<5;++i){
        if(!visit[i]){
            visit[i]=true;
            dfs(a+1,current+array[i]);
            dfs(a+1,current-array[i]);
            dfs(a+1,current*array[i]);
            visit[i]=false;
            }
        if(flag)
            break;
        }
    }

int main(){
    int n;
    while(cin>>n && n){
        array[0]=n;
        for(int i=1;i<5;i++)
            cin>>array[i];
        flag=false;
        for(int i=0;i<5;++i){
            memset(visit,false,sizeof(visit));
            visit[i]=true;
            dfs(1,array[i]);
            if(flag)
                break;
            }
        if(flag)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
        }
    return 0;
    }
