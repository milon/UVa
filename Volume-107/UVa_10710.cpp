//UVa Problem-10710(Chinese Shuffle)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

long long mypow(long long n,long long mod){
    if(n==0) return 1;
    if(n==1) return 2;
    long long ret=mypow(n/2,mod);
    ret=ret*ret;
    ret%=mod;
    if(n%2)
        ret*=2;
    return(ret%mod);
    }

bool solve(long long n){
    if(mypow(n-1,n)!=1)
        return false;
    return true;
    }

int main(){
    int n;
    while(cin>>n && n!=-1){
        if(solve(n))
            cout<<n<<" is a Jimmy-number"<<endl;
        else
            cout<<n<<" is not a Jimmy-number"<<endl;
        }
    return 0;
    }
