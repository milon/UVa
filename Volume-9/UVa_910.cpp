//UVa Problem-910(TV game)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cstdio>
using namespace std;

int matrix[26+3][4+3];
int dp[26+3][30+3];

int backtarck(int pos,int m){
    if(m==0)
        return matrix[pos][2];
    if(dp[pos][m]!=-1)
        return dp[pos][m];
    return dp[pos][m]=backtarck(matrix[pos][0],m-1)+backtarck(matrix[pos][1],m-1);
    }

void reset(){
    for(int i=0;i<29;i++){
        for(int j=0;j<33;j++)
            dp[i][j]=-1;
        }
    }

int main(){
    int nodes;
    while(cin>>nodes){
        reset();
        getchar();
        char a[10];
        for(int i=0;i<nodes;i++){
            gets(a);
            matrix[a[0]-'A'][0]=a[2]-'A';
            matrix[a[0]-'A'][1]=a[4]-'A';
            matrix[a[0]-'A'][2]=a[6]=='x'?1:0;
            }
        int m;
        cin>>m;
        cout<<backtarck(0,m)<<endl;
        }
	return 0;
    }

