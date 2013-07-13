//UVa Problem-10394(Twin Primes)
//Accepted
//Running time: 1.032 sec

#include<cstdio>
#include<cmath>
using namespace std;

#define max 19000000

char prime[max+1];
int twin[1000000];

void sieve(){
    long int i,j;
    for(i=2;i<=max;i++)
        prime[i]=1;
    for(i=2;i<=sqrt(max);){
        for(j=2*i;j<=max;j+=i){
            prime[j]=0;
            }
        i++;
        for(;!prime[i];i++);
        }
    }

int main(){
    sieve();
    long int n,i,j,k=1;
    for(i=3;i<=max;i+=2){
        if(prime[i]==1 && prime[i+2]==1){
            twin[k]=i;
            k++;
            }
        }
    while(scanf("%ld",&n)==1){
        printf("(%ld, %ld)\n",twin[n],twin[n]+2);
        }
    return 0;
    }
