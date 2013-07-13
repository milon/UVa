//UVa Problem-138(Street Numbers)
//Accepted
//Running time: 0.556 sec
//Author: Milon

#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	long long count=0,n,m;
	for(n=8;count<10;n++){
		long long val=((n*n)+n)/2;
		double md=sqrt(val);
		m=(int)md;
		if(m*m==val){
			printf("%10lld%10lld\n",m,n);
			count++;
			}
		}
	return 0;
	}
