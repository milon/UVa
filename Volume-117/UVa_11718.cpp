//UVa Problem-11718(Fantasy of a Summation)
//Accepted
//Running time: 0.044 sec

#include<iostream>
#include<cmath>
using namespace std;

unsigned long long power(unsigned long long n,int p,unsigned long long mod){
    if(p==0)
        return 1;
    unsigned long long tmp=power(n,p/2,mod)%mod,ret=(tmp*tmp)%mod;
    if(p%2==1)
        ret=(ret*n)%mod;
    return ret;
    }

int main(){
    int te,tc=1;
    unsigned long long n,k,mod;
    cin>>te;
    while(te--){
        cin>>n>>k>>mod;
        unsigned long long tmp;
        unsigned long long weight=(k*power(n,k-1,mod))%mod;
        unsigned long long ans=0;
        for (int i=0;i<n;i++){
            cin>>tmp;
            ans=(ans+(tmp*weight)%mod)%mod;
            }
        cout<<"Case "<<tc++<<": "<<ans<<endl;
        }
    return 0;
    }
