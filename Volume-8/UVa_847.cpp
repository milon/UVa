//UVa Problem-847(A Multiplication Game)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main (){
	long n;
	while (scanf("%lld",&n)!=EOF){
		long p = 1;
		bool stan = true;
		bool ollie = false;
		while(p<n){
			if (stan){
				p *= 9;
				stan = false;
				ollie = true;
				}
			else {
				p *= 2;
				ollie = false;
				stan = true;
				}
			}
		if ( ! stan )
			printf ("Stan wins.\n");
		else
			printf ("Ollie wins.\n");
		}
	return 0;
	}
