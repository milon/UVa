//UVa Problem-11463(Commandos)
//Accepted
//Running time: 0.104 sec

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int matrix[100][100];

int minimum(const int tl,const int tr){
    if(tl==0 || tl>tr)
        return tr;
    else
        return tl;
    }

void floyd_warshall(int n){
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(matrix[i][k] && matrix[k][j])
                    matrix[i][j]=minimum(matrix[i][j],matrix[i][k]+matrix[k][j]);
    }

int main(){
    int test,n,r,u,v,s,d,index=1;
    cin>>test;
    while(test--){
        cin>>n>>r;
        memset(matrix,0,sizeof(matrix));
        for(int j=0;j<r;j++){
            cin>>u>>v;
            matrix[u][v]=matrix[v][u]=1;
            }
        floyd_warshall(n);
        for(int j=0;j<n;j++)
            matrix[j][j]=0;
        cin>>s>>d;
        int max_value=0;
        for(int j=0;j<n;j++)
            max_value=max(max_value,matrix[s][j]+matrix[j][d]);
        cout<<"Case "<<index++<<": "<<max_value<<endl;
        }
    return 0;
    }
