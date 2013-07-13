//UVa Problem-10502(Counting rectangles)
//Accepted
//Running time: 0.016 sec

#include<iostream>
using namespace std;

const int MAX=100;

char suru[MAX][MAX];
int len[MAX][MAX];

int solve(int r,int c){
    for(int i=0;i<c;i++)
        len[0][i]=suru[0][i]=='1'?1:0;
    for(int i=1;i<r;i++)
        for(int j=0;j<c;j++)
            len[i][j]=suru[i][j]=='1'?len[i-1][j]+1:0;
    int ret=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int mini=len[i][j];
            for(int k=j;k<c;k++){
                mini=min(len[i][k],mini);
                ret+=mini;
                }
            }
        }
    return ret;
    }


int main(){
    int r,c;
    while(cin>>r>>c && r){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>suru[i][j];
                }
            }
        cout<<solve(r,c)<<endl;
        }
    return 0;
    }

