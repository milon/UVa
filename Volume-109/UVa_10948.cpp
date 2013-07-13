//UVa Problem-10948(The primary problem)
//Accepted
//Running time: 0.488 sec

#include<iostream>
#include<cmath>
using namespace std;

#define max 1000000

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
    int n,i,p,a,b;
    while(cin>>n){
        if(n==0) break;
        p=0;
        for(i=2;i<=n;i++){
            if(prime[i]==true && prime[n-i]==true){
                p++;
                a=i;
                b=n-i;
                break;
                }
            }
        if(p==0){
            cout<<n<<":"<<endl;
            cout<<"NO WAY!"<<endl;
            }
        else{
            cout<<n<<":"<<endl;
            cout<<a<<"+"<<b<<endl;
            }
        }
    return 0;
    }
