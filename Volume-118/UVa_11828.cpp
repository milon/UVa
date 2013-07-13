//UVa Problem-11828(Palindrome Again)
//Accepted
//Running time: 0.264 sec

#include<iostream>
#include<algorithm>
using namespace std;

const long long mod=1000000000;
const int N=1010;
long long p2[N],p24[N],p25[N];
long long comb[N][N]={0},sum[N][N]={0};

void computepow(int a,long long *b){
    b[0]=1;
    for(int i=1;i<N;i++)
        b[i]=(b[i-1]*a)%mod;
    }

void precalc(){
    computepow(2,p2);
    computepow(24,p24);
    computepow(25,p25);
    comb[0][0]=1;
    for(int i=1;i<N;i++){
        comb[i][0]=1;
        for(int j=1;j<i;j++)
            comb[i][j]=(comb[i-1][j-1]+comb[i-1][j])%mod;
        comb[i][i]=1;
        }
    sum[0][0]=1;
    for(int i=1;i<N;i++){
        sum[i][0]=1;
        for(int j=1;j<=i;j++){
            sum[i][j]=(sum[i][j-1]+comb[i][j]*p25[j])%mod;
            }
        }
    }

long long solve(int n,int m,int k){
    long long ret=0;
    for(int i=0;i<=m;i++){
        if(i+2*(m-i)<=k){
            int can=min(n,(k-(i+2*(m-i)))/2);
            long long tmp=(sum[n][can]*comb[m][i])%mod;
            tmp=(tmp*p2[i])%mod;
            tmp=(tmp*p24[m-i])%mod;
            ret=(ret+tmp)%mod;
            }
        }
    return ret;
    }

int main(){
    precalc();
    int test,len,k;
    cin>>test;
    for(int t=0;t<test;t++){
        cin>>len>>k;
        string a;
        cin>>a;
        int n=0,m=0;
        for(int i=0;i<a.size()/2;i++){
            if(a[i]==a[a.size()-i-1])
                n++;
            else
                m++;
            }
        long long ans=solve(n,m,k);
        if(a.size()%2==1)
            ans=(ans+25*solve(n,m,k-1))%mod;
        cout<<"Case "<<t+1<<": "<<ans<<endl;
        }
    return 0;
    }
