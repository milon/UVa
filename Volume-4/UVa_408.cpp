//UVa Problem-408(Uniform Generator)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<algorithm>
using namespace std;

long gcd(long a,long b){
	while(b>0){
		a%=b;
		swap(a,b);
		}
	return a;
	}

int main(){
	long a,b;
	while(scanf("%ld %ld",&a,&b)!=EOF){
		if(gcd(a,b)==1)
			printf("%10ld%10ld    %s\n\n",a,b,"Good Choice");
		else
			printf("%10ld%10ld    %s\n\n",a,b,"Bad Choice");
		}
	return 0;
	}
