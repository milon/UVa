//UVa Problem-944(Happy Numbers)
//Accepted
//Running time: 1.340 sec

#include<cstdio>
#include<cstdlib>
using namespace std;

int check(int in){
	int i,count=0;
	int sum=0;
	int n=in;
	int array[50];
	if(n==1)
		return 1;
    while(sum!=1){
		array[count++]=n;
		sum=0;
		for(i=10;(n/i)!=0 || (n%i)!=0; ){
			sum+=(n%i)*(n%i);
			n/=i;
            }
		n=sum;
		for(i=0;i<count;i++)
			if((array[i]==sum))
				return 0;
        }
	sum=0;
	return count+1;
    }

int main(){
	int i,j,k;
	int c=0;
	while(scanf("%d %d",&i,&j)==2){
        if(j>=i){
			if(c==0)
				c=1;
            else
				printf("\n");
			for(k=i;k<=j;k++)
				if(check(k))
					printf("%d %d\n",k,check(k));
            }
        }
	return 0;
    }

