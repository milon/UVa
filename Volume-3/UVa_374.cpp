//UVa Problem-374(Big Mod)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cmath>
using namespace std;

unsigned long modular_exponential(unsigned long b, unsigned long p, unsigned long m){
	unsigned long c=0;
	double d=1;
	unsigned long size=32;
	unsigned long mask=0x80000000;
	for(int i=size;i>0;i--){
		c<<=1;
		d=fmod(d*d,m);
		if(mask & p){
			c++;
			d=fmod(d*b,m);
			}
		mask>>=1;
		}
	return (unsigned long)d;
	}

int main(){
	unsigned long b,p,m;
	while(scanf("%lu %lu %lu",&b,&p,&m)==3){
		printf("%lu\n",modular_exponential(b,p,m));
		}
	return 0;
	}
