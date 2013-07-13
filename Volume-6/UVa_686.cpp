//UVa Problem-686(Goldbach's Conjecture (II))
//Accepted
//Running time: 0.112 sec
//Author: Milon

#include<cstdio>
#include<cstdlib>
using namespace std;

int v[32771],p[3513],n,c=1,cx,j;

int primek(){
	int i,j;
	p[0]=2;
	for(i=3;i<=32770;i+=2){
		if(!v[i]){
			for(j=i*2;j<=32770;j+=i){
				v[j]=1;
				}
			p[c++]=i;
			}
		}
	}

int main(){
	primek();
	while(1){
		scanf("%d",&n);
		if(!n)
            break;
		cx=j=0;
		while(p[j]<n){
			for(c=j;n>p[c];c++){
				if(p[c]+p[j]==n){
					cx++;
					}
				}
			j++;
			}
		printf("%d\n",cx);
		}
	return 0;
	}

