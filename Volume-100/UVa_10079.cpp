//UVa Problem-10079(Pizza Cutting)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main(){
	long long int p;
	while(scanf("%lld",&p)==1){
		if(p<0) break;
		long long int n=((p*(p+1))/2)+1;
		printf("%lld\n",n);
		}
	return 0;
	}
