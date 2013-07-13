//UVa Problem-100(The 3n + 1 problem)
//Accepted
//Running time: 0.656 sec
//Author: Milon

#include<cstdio>
#include<algorithm>
using namespace std;

unsigned long int start,end,temp;

unsigned long int counter(unsigned long int a){
	unsigned long int count=1;
	while(a>1){
		if(a%2) a=3*a+1;
		else a=a/2;
		count++;
		}
	return count;
	}

int main(){
	unsigned long int max=0,total=0;
	while(scanf("%lu %lu",&start,&end)==2){
		printf("%lu %lu ",start,end);
		if(start>end)
			swap(start,end);
		max=counter(start);
		for(unsigned long int i=start+1;i<=end;i++){
			total=counter(i);
			if(total>=max)
				max=total;
			}
		printf("%lu\n",max);
		}
	return 0;
	}
