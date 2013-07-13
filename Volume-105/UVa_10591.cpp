//UVa Problem-10591(Happy Number)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

long A[1000], index;

int find(long x){
	long i;
	for (i=0;i<index;i++) {
		if(A[i]==x)
            return 0;
        }
	return 1;
    }

int main(){
	long n,t,sum,digit,save,kase=0;
	scanf("%ld",&t);
	while(t){
		scanf("%ld",&n);
		index=0;
		save=n;
		while(find(n)){
			A[index++]=n;
			sum=0;
			while(n){
				digit=n%10;
				sum+=(digit*digit);
				n/=10;
                }
			n=sum;
            }
		if(n==1)
			printf("Case #%ld: %ld is a Happy number.\n",++kase,save);
		else
			printf("Case #%ld: %ld is an Unhappy number.\n",++kase,save);
		t--;
        }
	return 0;
    }
