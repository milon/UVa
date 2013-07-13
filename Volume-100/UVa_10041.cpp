//UVa Problem-10041(Vito's family)
//Accepted
//Running time: 0.140 sec

#include<cstdio>
using namespace std;

int main(){
	long n;
	scanf("%ld",&n);
	long i=0;
	while(i<n){
		int r;
		scanf("%d",&r);
		long s[500]={0};
		int j=0;
		while(j<r){
			scanf("%ld",&s[j]);
			j++;
			}
		long sum[500]={0};
		int k,l;
		for(k=0;k<j;k++){
			for(l=0;l<j;l++){
				if(s[k]>s[l])
					sum[k]+=s[k]-s[l];
				else
					sum[k]+=s[l]-s[k];
				}
			}
		long min=2147483647;
		for(k=0;k<j;k++){
			if(sum[k]<min)
				min=sum[k];
			}
		printf("%ld\n",min);
		i++;
		}
	return 0;
	}
