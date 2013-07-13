//UVa Problem-900(Brick Wall Patterns)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
using namespace std;

long long array[55];

int fib(int x){
	if(x==0 || x==1)
		return 1;
	if(array[x]>0)
		return array[x];
	array[x]=fib(x-1)+fib(x-2);
	return array[x];
	}

int main(){
	int n;
	array[0]=array[1]=1;
	fib(50);
	while(scanf("%d",&n) && n)
		printf("%lld\n",array[n]);
	return 0;
	}
