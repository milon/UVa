//UVa Problem-11417(GCD)
//Accepted
//Running time: 0.184 sec

#include<cstdio>
using namespace std;

int gcd(int n,int m);

int main(){
	int n;
	while(scanf("%d",&n)==1){
		if(n==0) break;
		int g=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++)
				g+=gcd(i,j);
			}
		printf("%d\n",g);
		}
	return 0;
	}

int gcd(int n,int m){
	if(m==0) return n;
	else return gcd(m,n%m);
	}
