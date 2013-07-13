//UVa Problem-113(Power of Cryptography)
//Accepted
//Running time: 0.020 sec
//Author: Milon

#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	double n,p,x;
	while(scanf("%lf %lf",&n,&p)==2){
		x=(double)(1.0/n);
		printf("%.0lf\n",pow(p,x));
		}
	return 0;
	}
