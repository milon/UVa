//UVa Problem-167(The Sultan's Successors)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<iostream>
#include<iomanip>
using namespace std;

const int M=8;

int map[M][M];
bool vis[3][3*M];
int maxsum,sum;

void init(){
    maxsum=0;
    sum=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>map[i][j];
            vis[i][j]=false;
            }
        }
    }

void search(int cur){
    int i,j;
    if(cur==8){
        if(maxsum<=sum){
            maxsum=sum;
            }
        }
    else{
        for(i=0;i<8;i++){
            if(!vis[0][i] && !vis[1][cur+i] && !vis[2][cur-i+8]){
                sum+=map[cur][i];
                vis[0][i]=vis[1][cur+i]=vis[2][cur-i+8]=true;
                search(cur+1);
                sum-=map[cur][i];
                vis[0][i]=vis[1][cur+i]=vis[2][cur-i+8]=false;
                }
            }
        }
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        init();
        search(0);
        cout<<setw(5)<<maxsum<<endl;
        }
    return 0;
    }
