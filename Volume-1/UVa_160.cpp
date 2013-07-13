//UVa Problem-160(Factors and Factorials)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
using namespace std;

int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,
              43,47,53,59,61,67,71,73,79,83,89,97};

int main(){
	int n,temp,count,i;
	while(scanf("%d",&n)==1){
		if(n==0)
            break;
		printf("%3d! =",n);
		for(i=0;i<25;i++){
			count=0;
			temp=prime[i];
			while(n/temp){
				count+=(n/temp);
				temp*=prime[i];
				}
			if(count==0)
                break;
			if(i==15)
                printf("\n      ");
			printf("%3d",count);
			}
		printf("\n");
		}
	return 0;
	}
