//UVa Problem-834(Continued Fractions)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int num,den;
  	while(scanf("%d%d",&num,&den)!=-1){
		int times=num/den;
  		printf("[%d;",times);
  		num-=den*times;
  		bool first=true;
  		while(true){
  			swap(num,den);
  			if(den==0)
                break;
  			if(first==false)
                printf(",");
  			first=false;
  			int t=num/den;
  			printf("%d",t);
  			num-=den*t;
			}
  		printf("]\n");
		}
  	return 0;
	}
