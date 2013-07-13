//UVa Problem-11287(Pseudoprime numbers)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

#define pmax 31624
#define psize 3401

bool is_prime[pmax];
int prime[psize];

long long square(long long a){
    return a*a;
    }

long long bigmod(long long a,long long n,long long p){
    if(n==1)
        return a%p;
    else if(n%2==0)
        return square(bigmod(a,n/2,p))%p;
    else
        return (square(bigmod(a,n/2,p))%p)*(a%p)%p;
    }



int main(){
    long long a,p;
    int sqrt_p;
    fill(is_prime,is_prime+pmax,true);
    is_prime[0] = false, is_prime[1] = false;
    for(int i=2,k=0;i<pmax;i++){
        if(is_prime[i]){
            for(int j=i*2;j<pmax;j+=i)
                is_prime[j]=false;
            prime[k++] = i;
            }
        }
    while(cin>>p>>a && p && a){
        sqrt_p=(int)ceil(sqrt(p));
        is_prime[0]=true;
        for(int i=0;(i<psize) && (prime[i]<=sqrt_p);i++){
            if(p%prime[i]==0){
                is_prime[0]=false;
                break;
                }
            }
        if(is_prime[0])
            cout<<"no"<<endl;
        else if(bigmod(a, p, p) == a)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        }
    return 0;
    }
