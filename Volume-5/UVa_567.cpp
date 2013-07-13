//UVa Problem-567(Risk)
//Accepted
//Running time: 0.360 sec
//Author: Milon

#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

#define MAX 21

int matrix[MAX][MAX];
void Floyd_Warshall(int n);

int main(){
    int t,tmp,index=1;
    while(cin>>t){
        for(int i=1;i<MAX;i++){
            for(int j=i+1;j<MAX;j++)
                matrix[j][i]=matrix[i][j]=99999;
            matrix[i][i]=0;
            }
        for(int i=1;i<=t;i++){
            cin>>tmp;
            matrix[1][tmp]=1;
            matrix[tmp][1]=matrix[1][tmp];
            }
        for(int i=2;i<=19;i++){
            cin>>t;
            for(int j=1;j<=t;j++){
                cin>>tmp;
                matrix[i][tmp]=1;
                matrix[tmp][i]=matrix[i][tmp];
                }
            }
        Floyd_Warshall(20);
        int N,a,b;
        cin>>N;
        cout<<"Test Set #"<<index++<<endl;
        for(int i=0;i<N;i++){
            cin>>a>>b;
            cout<<setw(2)<<a<<" to "<<setw(2)<<b<<": "<<matrix[a][b]<<endl;
            }
        cout<<endl;
        }
    return 0;
    }

void Floyd_Warshall(int n){
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
    }
