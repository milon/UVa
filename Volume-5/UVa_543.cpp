//UVa Problem-543(Goldbach's Conjecture)
//Accepted
//Running time: 0.180 sec
//Author: Milon

#include<iostream>
using namespace std;

#define max 1000000

int prime[max]={0};

int main(){
	prime[1]=1;
	for(long i=2;i*i<=max;i++){
		for(long j=i+i;j<max;j+=i)
			prime[j]=1;
		}
	long n;
	while(cin>>n && n>0){
		long a=0,b=0;
		for(long k=3;k<=n/2;k+=2){
			if(prime[k]==0){
				long q=n-k;
				if(prime[q]==0){
					a=k;
					b=q;
					break;
					}
				}
			}
		if(a!=0 && b!=0)
			cout<<n<<" = "<<a<<" + "<<b<<"\n";
		else
			cout<<"Goldbach's conjecture is wrong.\n";
		}
	return 0;
	}
