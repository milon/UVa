//UVa Problem-10783(Odd Sum)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
using namespace std;

int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a,b,j,sum=0;
		scanf("%d %d",&a,&b);
		for(j=a;j<=b;j++){
			if(j%2) sum+=j;
			}
		printf("Case %d: %d\n",i+1,sum);
		}
	return 0;
	}
