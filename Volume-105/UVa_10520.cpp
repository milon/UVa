//UVa Problem-10520(Determine it)
//Accepted
//Running time: 0.204 sec

#include<iostream>
#include<algorithm>
using namespace std;

long long table[30][30];

long long dp(int i,int j,int n){
    if(i==0)
        return 0;
    if(table[i][j]!=-1)
        return table[i][j];
    long long ret=0;
    if(i<j){
        for(int k=i;k<j;k++){
            ret=max(ret,dp(i,k,n)+dp(k+1,j,n));
            }
        }
    else if(i>=j){
        long long ret2=0;
        if(i<n){
            for(int k=i+1;k<n+1;k++){
                ret=max(ret,dp(k,1,n)+dp(k,j,n));
                }
            }
        if(j>0){
            for(int k=1;k<j;k++){
                ret2=max(ret2,dp(i,k,n)+dp(n,k,n));
                }
            }
        ret+=ret2;
        }
    return table[i][j]=ret;
    }

int main(){
    int n,an;
    while(cin>>n>>an){
        for(int i=0;i<21;i++){
            for(int j=0;j<21;j++){
                table[i][j]=-1;
                }
            }
        table[n][1]=an;
        long long ans=dp(1,n,n);
        cout<<ans<<endl;
        }
    return 0;
    }
