//Uva Problem-10918(Tri Tiling)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

#define N 15

int main(){
    int suru[2][N+1];
    suru[0][0]=0;
    suru[0][1]=1;
    suru[1][0]=1;
    suru[1][1]=2;
    for(int i=2;i<=N;i++){
        suru[0][i]=suru[0][i-1]+suru[1][i-1];
        suru[1][i]=suru[0][i-1]*2+suru[1][i-1]*3;
        }
    int n;
    while((cin>>n) && (n>=0)){
        if(n%2)
            cout<<0<<endl;
        else
            cout<<suru[0][n/2]+suru[1][n/2]<<endl;
        }
    return 0;
    }
