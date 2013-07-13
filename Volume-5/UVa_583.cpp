//UVa Problem-583(Prime Factors)
//Accepted
//Running time: 0.768 sec
//Author: Milon

# include<cstdio>
using namespace std;

# define size 5000

void generate_prime(long *d){
	int i,j;
  	long num;
  	d[0]=2;
  	d[1]=3;
  	d[2]=5;
  	for(i=3,num=7;i<size;i++,num++){
    	while(1){
      		for(j=0;d[j]<=num/2;j++)
				if((num%d[j])==0){
	  				num++;
	  				break;
					}
      			if(d[j]>num/2)
					break;
    			}
    		d[i]=num;
  		}
	}

int main(){
	long prime[size],g;
	int i;
    generate_prime(prime);
  	while(scanf("%ld",&g)==1 && g){
    	printf("%ld =",g);
    	if(g<0){
      		printf(" -1 x");
      		g*=-1;
    		}
    	for(i=0;i<size && g>1;i++)
      		while((g%prime[i])==0){
				printf(" %ld",prime[i]);
				g/=prime[i];
				if(g>1)
	  				printf(" x");
				else
	  				printf("\n");
      			}
    		if(i==size && g>1)
      			printf(" %ld\n",g);
  		}
  	return 0;
	}
