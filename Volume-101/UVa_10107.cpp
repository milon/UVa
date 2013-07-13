//UVa Problem-10107(What is the Median?)
//Accepted
//Running time: 0.036 sec

#include<cstdio>
#include<iostream>
using namespace std;

#define MAX 10001

long d[MAX];

void insertion(long n,long N){
	long k=N-1;
	while((n<d[k])&&(k>=0)){
		d[k+1]=d[k];
		k-=1;
		}
	d[k+1]=n;
	}

int main(){
	long i=0,mid,median,n;
	while(scanf("%ld",&n)==1){
		insertion(n,i);
		if(i%2==0){
			mid=i/2;
			median=d[mid];
			}
		else{
			mid=i/2;
			median=(d[mid]+d[mid+1])/2;
			}
		i++;
		printf("%ld\n",median);
		}
	return 0;
	}
