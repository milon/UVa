//UVa Problem-11466(Largest Prime Divisor)
//Accepted
//Running time: 0.380 sec

#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

#define N 10001000

bool mark[N];
vector<long long> prime_list;
vector<long long> factor;
bool isNegative;

bool isPrime(long long p){
    if(p<2 || p%2==0)
        return false;
    int len=sqrt(p*1.0);
    for(int i=3;i<=len;i+=2){
        if(p%i==0)
            return false;
        }
    return true;
    }

void sieve(){
    memset(mark,true,sizeof(mark));
    mark[0]=mark[1]=false;
    for(int i=4;i<N;i+=2)
        mark[i]=false;
    for(int i=3;i*i<=N;i+=2){
        if(mark[i]){
            for(int j=i*i;j<N;j+=2*i)
                mark[j]=false;
            }
        }
    prime_list.clear();
    prime_list.push_back(2);
    for(int i=3;i<N;i+=2){
        if(mark[i])
            prime_list.push_back(i);
        }
    }

long long prime_factors(long long n){
    int ind=0;
    long long tmp=n;
    factor.clear();
    while(prime_list[ind]*prime_list[ind]<=n){
        while(tmp%prime_list[ind]==0){
            tmp/=prime_list[ind];
            factor.push_back(prime_list[ind]);
            }
        ind++;
        }
    if(tmp>1)
        factor.push_back(tmp);
    sort(factor.begin(),factor.end());
    if(isNegative)
        return factor[factor.size()-1];
    if(factor[0]==factor[factor.size()-1])
        return -1;
    return factor[factor.size()-1];
    }

int main(){
    sieve();
    long long n;
    while(cin>>n && n){
        if(n<0){
            n*=-1;
            isNegative=true;
            }
        if(n<4 || (n<N && mark[n]) || isPrime(n)){
            cout<<"-1"<<endl;
            continue;
            }
        cout<<prime_factors(n)<<endl;
        isNegative = false;
        }
	return 0;
    }

