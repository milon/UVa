//UVa Problem-369(Combinations)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<algorithm>
using namespace std;

double nCr(int n,int r){
	if(r==0) return 1;
	int k=min(r,n-r);
	double num=1;
	for(int i=k;i>=1;i--){
		num*=(n-i+1);
		num/=i;
		}
	return num;
	}

int main(){
	int n, r;
	while(scanf("%d %d",&n,&r)==2){
		if(n==0 && r==0)
			break;
		double res=nCr(n,r);
		printf("%d things taken %d at a time is %.0lf exactly.\n",n,r,res);
		}
	return 0;
	}
