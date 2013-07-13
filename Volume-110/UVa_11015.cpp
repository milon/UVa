//UVa Problem-11015(05-2 Rendezvous)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 23

int matrix[MAX][MAX];

void floyd_warshall(int n){
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(matrix[i][k] && matrix[k][j])
                    matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
    }

int main(){
    int n,m,a,b,cost,index=1;
    char name[MAX][11];
    while(cin>>n>>m){
        if(n==0 && m==0)
            break;
        for(int i=1;i<=n;i++){
            cin>>name[i];
            for(int j=i+1;j<=n;j++){
                matrix[j][i]=matrix[i][j]=99999;
                }
            matrix[i][i]=0;
            }
        for(int i=1;i<=m;i++){
            cin>>a>>b>>cost;
            matrix[a][b]=cost;
            matrix[b][a]=cost;
            }
        floyd_warshall(n);
        int tmp,ans,minimum=99999;
        for(int i=1;i<=n;i++){
            tmp=0;
            for(int j=1;j<=n;j++){
                tmp+=matrix[i][j];
                }
            if(tmp<minimum){
                minimum=tmp;
                ans=i;
                }
            }
        cout<<"Case #"<<index++<<" : "<<name[ans]<<endl;
        }
    return 0;
    }
