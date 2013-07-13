//UVa Problem-10699(Count the factors)
//Accepted
//Running time: 0.508 sec

#include<iostream>
#include<cmath>
using namespace std;

#define max 10000002

bool prime[max+1];

void sieve(){
    long int i,j;
    for(i=2;i<=max;i++)
        prime[i]=true;
    for(i=2;i<=sqrt(max);){
        for(j=2*i;j<=max;j+=i){
            prime[j]=false;
            }
        i++;
        while(!prime[i])
            i++;
        }
    }

int main(){
    sieve();
    long r,num,factor,i;
    while(cin>>num && num){
        factor=0;
        r=num/2;
        if(prime[num]==true)
            factor=1;
        else{
            for(i=2;i<=r;i++){
                if(prime[i]==true && num%i==0)
                    factor++;
                }
            }
        cout<<num<<" : "<<factor<<endl;
        }
    return 0;
    }
