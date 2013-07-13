//UVa Problem-474(Heads / Tails Probability)
//Accepted
//Running time: 2.384 sec
//Author: Milon

#include<cstdio>
using namespace std;

void solution(long int n){
	long int i,count=0;
	double temp=1.0;
	if(n==0){
		printf("2^-0 = 1.000e-0\n");
		return;
        }
	for(i=1;i<=n;i++){
		temp=temp / 2;
		if(temp<1.0){
			count++;
			temp=temp*10;
            }
        }
	printf("2^-%ld = ",n);
	printf("%.3lfe-%ld\n",temp,count);
    }

int main(){
	long int n;
	while(scanf("%ld",&n)==1){
		solution(n);
        }
	return 0;
}
