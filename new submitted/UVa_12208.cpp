//UVa Problem-12208(How Many Ones Need)
//Accepted
//Running time:0.728 sec

#include<map>
#include<cstdio>
using namespace std;

map<long long,long long> Map;

long long calculate(long long n){
	if(n<=0)
        return 0;
	if(Map.find(n)!=Map.end())
		return Map[n];
	long long m=n/2;
	if(n&1){
		Map[n]=2*calculate(m)+m+1;
        }
	else{
		Map[n]=calculate(m)+calculate(m-1)+m;
        }
	return Map[n];
    }

int main(){
	long long a,b,v;
	for(int test=1; ;test++){
		scanf("%lld %lld",&a,&b);
		if(!a && !b)
            return 0;
		v=calculate(b)-calculate(a-1);
		printf("Case %d: %lld\n",test,v);
        }
    return 0;
    }
