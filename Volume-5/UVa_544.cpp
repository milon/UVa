//UVa Problem-544(Heavy Cargo)
//Accepted
//Running time: 0.032 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

#define MAX 200

char city[MAX][31];
int matrix[MAX][MAX],suru;

int check(char tmp[]){
    for(int i=1;i<=suru;i++){
        if(strcmp(city[i],tmp)==0)
            return i;
        }
    suru++;
    strcpy(city[suru],tmp);
    return suru;
    }

void floyd_warshall(int n){
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                matrix[i][j]=max(matrix[i][j],min(matrix[i][k],matrix[k][j]));
    }

int main(){
    int n,r,a,b,w,t=1;
    char tmp[31];
    while(cin>>n>>r && n && r){
        getchar();
        suru=0;
        for(int i=0;i<r;i++){
             cin>>tmp;
             a=check(tmp);
             cin>>tmp;
             b=check(tmp);
             cin>>w;
             matrix[a][b]=matrix[b][a]=w;
            }
        floyd_warshall(suru);
        cin>>tmp;
        a=check(tmp);
        cin>>tmp;
        b=check(tmp);
        cout<<"Scenario #"<<t++<<endl;
        cout<<matrix[a][b]<<" tons"<<endl<<endl;
        }
    return 0;
    }
