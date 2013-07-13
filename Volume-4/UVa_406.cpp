//UVa Problem-406(Prime Cuts)
//Accepted
//Running time: 0.060 sec

#include<cstdio>
using namespace std;

long int num,c,total,start,end;
int pri[1001];

int prime(long int n){
    if((n%2==0)||(n%3==0))
        return 0;
	int k=5;
	while(k*k<=n){
		if((n%k==0) || (n%(k+2)==0))
			return 0;
		k+=6;
        }
	return 1;
    }

void set_array(){
	long int i,j;
	pri[0]=1;
	pri[1]=2;
	pri[2]=3;
	for(i=5,j=3;i<1001;i+=2)
		if(prime(i)==1)
			pri[j++]=i;
	total=j;
    }

long int count(){
	int i,tot=0;
	for(i=0;((pri[i]<=num) && (total!=i));i++)
		tot++;
	return tot;
    }

void find_solution(){
	long int n,i;
	printf("%ld %ld:",num,c);
	n=count();
	if(n%2==0)
        c=c*2;
	else
        c=c*2-1;
	if(c>n)
        c=n;
	start=(n-c)/2;
	end=start+c-1;
	for(i=start;i<=end;i++)
		printf(" %d",pri[i]);
	printf("\n\n");
    }

int main(){
	set_array();
	while(scanf("%ld %ld",&num,&c)==2){
		find_solution();
	}
	return 0;
    }
