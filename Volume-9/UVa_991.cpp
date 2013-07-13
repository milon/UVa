//UVa Prblem-991(Safe Salutations)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

#define N 10

int main(){
    int suru[N+1];
    suru[0]=1;
    for(int i=1;i<=N;i++){
        suru[i]=0;
        for(int j=0;j<i;j++)
            suru[i]+=suru[j]*suru[i-j-1];
        }
    int n;
    bool milon=false;
    while(cin>>n){
        if(milon)
            cout<<endl;
        else
            milon=true;
        cout<<suru[n]<<endl;
        }
    return 0;
    }
