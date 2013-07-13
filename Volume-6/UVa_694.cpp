//UVa Problem-694(The Collatz Sequence)
//Accepted
//Running time: 0.024 sec
//Author: Milon

#include<cstdio>
using namespace std;

int main(){
	long long a,l,cas=0;
	while(scanf("%lld %lld",&a,&l)==2){
		if(a<0 && l<0)
			break;
		cas++;
		long long ap=a, lp=l;
		long long terms=0;
		while(1){
			if(a==1){
				terms++;
				break;
				}
			if(a>l)
				break;
			if(a%2==0)
				a/=2;
			else
				a=3*a+1;
			terms++;
			}
		printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",cas,ap,lp,terms);
		}
	return 0;
	}
