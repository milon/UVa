//UVa Problem-10533(Digit Primes)
//Accepted
//Running time: 0.324 sec

#include<iostream>
using namespace std;

#define MEDDIG 1000000

int num[MEDDIG],primek[MEDDIG],v[MEDDIG];

void prime(){
    primek[2]=1;
	for(int i=3;i<=MEDDIG;i+=2){
        if(!num[i]){
            for(int j=i*2;j<=MEDDIG;j+=i){
                num[j]=1;
                }
            primek[i]=1;
            }
        }
    }

int main(){
	prime();
	int test,c=0,k,p,z=0;
	scanf("%d",&test);
	for(int j=1;j<=MEDDIG;j++){
		k=0;
		p=j;
		while(p!=0){
			k+=p%10;
			p=p/10;
            }
		if(primek[j] && primek[k]){
			c++;
			v[z]=c;
            }
		v[z]=c;
		z++;
        }
	while(test--){
		scanf("%d %d",&k,&c);
		printf("%d\n",(v[c-1]-v[k-2]));
        }
    return 0;
    }
