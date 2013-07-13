//UVa Problem-10168(Summation of Four Primes)
//Accepted
//Running time: 2.420 sec

#include<iostream>
#include<cmath>
using namespace std;

#define max 10000000

char prime[max]={0};

int main(){
	prime[0]='1';
	prime[1]='1';
	for(long i=2;i<=sqrt(max);i++)
		for(long j=i+i;j<max;j+=i)
			prime[j]='1';
	long n;
	while(cin>>n){
		int flag=0;
		long a=0,b=0,c=0,d=0;
		for(long k=2;k<=n/4;k+=2){
			if(prime[k]!='1'){
				long sum1=n-k;
				for(long l=sum1-1;l>=sum1/3;l--){
			  		if(prime[l]!='1'){
						long sum2=sum1-l;
						for(long p=sum2-1;p>=sum2/2;p--){
							long m=sum2-p;
							if(prime[p]!='1'&&prime[m]!='1'){
				 				a=k;
				 				b=l;
				 				c=p;
				 				d=m;
				 				flag=1;
				 				break;
				 				}
							else if(p<max&&m<max)
								continue;
							else break;
							}
			   			}
			  		else if(l<max)continue;
			  		else break;
			  		if(flag==1)break;
			  		}
				}
			else if(k<max)continue;
			else break;
			if(flag==1)break;
			if(k==2)k--;
			}
		if(flag==1)cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
		else cout<<"Impossible.\n";
		}
	return 0;
	}
