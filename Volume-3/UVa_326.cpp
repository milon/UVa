//UVa Problem-326(Extrapolation Using a Difference Table)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
using namespace std;

int suru[10][10];

int solve(int n,int k){
    int array[k];
    int constant=suru[0][n-1];
    for(int i=0;i<n;i++)
        array[i]=suru[n-i-1][i];
    for(int i=0;i<k;i++){
        array[n-1]=constant;
        for(int i=n-2;i>=0;i--)
            array[i]+=array[i+1];
        }
    return array[0];
    }

int main(){
    int n;
    while(cin>>n && n){
        int k;
        for(int i=0;i<n;i++)
            cin>>suru[i][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<n-i;j++)
                suru[j][i]=suru[j+1][i-1]-suru[j][i-1];
            }
        cin>>k;
        int ans=solve(n,k);
        cout<<"Term "<<n+k<<" of the sequence is "<<ans<<endl;
        }
    return 0;
    }

