//UVa Problem-10721(Bar Codes)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

long long suru[60][60];

long long solve(int n,int k,int m){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++)
            suru[i][j]=0;
        }
    for(int i=1;i<=min(m,n);i++)
        suru[i][1]=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=k;j++){
            for(int s=1;s<=m;s++)
                if(i-s>=0)
                    suru[i][j]+=suru[i-s][j-1];
            }
        }
    return suru[n][k];
    }

int main(){
    int n,k,m;
    while(cin>>n>>k>>m)
        cout<<solve(n,k,m)<<endl;
    return 0;
    }
