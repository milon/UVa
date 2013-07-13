//UVa Problem-10219(Find the ways !)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cstring>
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
	while(scanf("%d %d",&n,&r)!=-1){
		char s[100];
		double result=nCr(n,r);
		sprintf(s,"%.0lf",result);
		printf("%d\n",strlen(s));
		}
	return 0;
	}
