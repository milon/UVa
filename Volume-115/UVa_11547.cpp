//UVa Problem-11547(AUTOMATIC ANSWER)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long result = ((((((n*567)/9)+7492)*235)/47)-498);
		if(result<0)
			result= -result;
		int s=((result%100)-(result%10))/10;
		printf("%d\n",s);
		}
	return 0;
	}
