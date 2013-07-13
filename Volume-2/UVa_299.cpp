//UVa Problem-299(Train Swapping)
//Accepted
//Running time: 0.016 sec
//Author: Milon

#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	int n,l,a[100],i,j,k,count,temp,swap1;
	scanf("%d",&n);
	for(k=1;k<=n;k++){
		count = 0 ;
		scanf("%d",&l);
		for( i=0;i<l;i++)
			scanf("%d",&a[i]);
		i=0;
		swap1=1;
		while(swap1 && i<l){
			swap1=0;
			for(j=0;j<(l-i-1);j++){
				if(a[j]>a[j+1]){
					swap(a[j],a[j+1]);
					++count;
					swap1=1;
					}
				}
			i++;
			}
		printf("Optimal train swapping takes %d swaps.\n",count);
		}
	return 0;
	}
