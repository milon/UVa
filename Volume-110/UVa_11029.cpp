//UVa Problem-11029(Leading and Trailing)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int test;
	unsigned int n,k;
	cin>>test;
	while(test--){
		cin>>n>>k;
		long double lead_mul,temp;
		temp=n;
		lead_mul=k*log10(temp);
		lead_mul=fmod(lead_mul,(long double)1);
		lead_mul=pow((long double)10,2+lead_mul);
		unsigned int trail_mul=1;
		n=n%1000;
		while(k){
			if(k & 0x01)
				trail_mul=(trail_mul*n)%1000;
			n=(n*n)%1000;
			k>>=1;
            }
		printf("%u...%03u\n",(unsigned)lead_mul,trail_mul);
        }
	return 0;
    }
