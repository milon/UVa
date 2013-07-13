//UVa Problem-729(The Hamming Distance Problem)
//Accepted
//Running time: 0.196 sec
//Author: Milon

#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int dataset;
	scanf("%d",&dataset);
	bool blank=false;
	while(dataset--){
		if(blank)
			printf("\n");
		blank=true;
		int n,h;
		scanf("%d %d",&n,&h);
		int a[18]={0};
		for(int i=0;i<h;i++)
			a[n-1-i]=1;
		do{
			for(int j=0;j<n;j++)
				printf("%d",a[j]);
			printf("\n");
			}while(next_permutation(a,a+n));
		}
	return 0;
	}
