//UVa Problem-10055(Hashmat the brave warrior)
//Accepted
//Running time: 0.156 sec

#include<cstdio>
using namespace std;

int main(){
	double n1,n2,n3;
	while(scanf("%lf %lf",&n1,&n2)==2){
		if(n1>=n2) n3=n1-n2;
		else n3=n2-n1;
		printf("%.0lf\n",n3);
		}
	return 0;
	}
