//UVa Problem-674(Coin Change)
//Accepted
//Running time: 0.032 sec
//Author: Milon

#include<cstdio>
using namespace std;

long ways[7500];

void count(){
	int coin[]={50,25,10,5,1};
	ways[0]=1;
	for(int i=0;i<5;i++){
		for(int j=coin[i];j<7500;j++)
			ways[j]+=ways[j-coin[i]];
		}
	}

int main(){
	count();
	int n;
	while(scanf("%d",&n)!=EOF)
		printf("%ld\n",ways[n]);
	return 0;
	}
