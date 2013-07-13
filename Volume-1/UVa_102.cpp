//UVa Problem-102(Ecological Bin Packing)
//Accepted
//Running time: 0.036 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	long int max,C[3],G[3],B[3],sum[6],i;
	char check[4],s[6][4]={"BCG","BGC","CBG","CGB","GBC","GCB"};
	while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld",&B[0],&G[0],&C[0],&B[1],&G[1],&C[1],&B[2],&G[2],&C[2])==9){
		sum[0]=B[1]+B[2]+C[0]+C[2]+G[0]+G[1];
		sum[1]=B[1]+B[2]+G[0]+G[2]+C[0]+C[1];
		sum[2]=C[1]+C[2]+B[0]+B[2]+G[0]+G[1];
		sum[3]=C[1]+C[2]+G[0]+G[2]+B[0]+B[1];
		sum[4]=G[1]+G[2]+B[0]+B[2]+C[0]+C[1];
		sum[5]=G[1]+G[2]+C[0]+C[2]+B[0]+B[1];
		max=sum[0];
		strcpy(check,s[0]);
		for(i=1;i<6;i++){
			if(sum[i]<max){
				max=sum[i];
				strcpy(check,s[i]);
				}
			}
		printf("%s %ld\n",check,max);
		}
	return 0;
	}
