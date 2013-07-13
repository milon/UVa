//UVa Problem-824(Coast Tracker)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cassert>
using namespace std;

bool in[3][3];
int dx[]={0,-1,-1,-1,0,1,1,1};
int dy[]={-1,-1,0,1,1,1,0,-1};

int solve(int now){
    for(int i=0;i<8;i++){
        int nex=1+dx[(now+i+5)%8];
        int ney=1+dy[(now+i+5)%8];
        if(in[ney][nex]){
            return (now+i+5)%8;
            }
        }
    assert(false);
    }

int main(){
    int y,x,dir;
    while(cin>>x>>y>>dir){
        if(x==-1)break;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                in[i][j]=false;
        for(int i=0;i<8;i++){
            int yy,xx;
            bool tmp;
            cin>>xx>>yy>>tmp;
            xx-=(x-1);
            yy-=(y-1);
            in[2-yy][xx]=tmp;
            }
        cout<<solve(dir)<<endl;
        }
    return 0;
    }

