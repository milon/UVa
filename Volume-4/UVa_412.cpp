//UVa Problem-412(Pi)
//Accepted
//Running time: 0.176 sec
//Author: Milon

#include<cstdio>
#include<cmath>
using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)>(b))?(b):(a))

long int N,a[1000],a1,b1,r;

long int gcd(long int m,long int n){
	a1=MAX(m,n);
	b1=MIN(m,n);
	while(1){
		r=a1%b1;
		if(!r)
            return b1;
		else{
			a1=b1;
			b1=r;
			}
		}
	}

void solution(){
	long int j,i,common=0,totalcom;
	double pi;
	totalcom=((N-1)*N)/2;
	for(i=0;i<(N-1);i++){
		for(j=i+1;j<N;j++)
			if(gcd(a[i],a[j])==1)
				common++;
		}
	if(common==0){
		printf("No estimate for this data set.\n");
		return;
		}
	pi=(double)(common);
	pi=(6.0/pi)*totalcom;
	pi=sqrt(pi);
	printf("%.6lf\n",pi);
	return;
	}

int main(){
	int i;
	while(scanf("%ld",&N)==1){
		if(N==0)
            return 0;
		for(i=0;i<N;i++)
			scanf("%ld",&a[i]);
		solution();
		}
	return 0;
	}

