//UVa Problem-382(Perfection)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
using namespace std;

int solution(unsigned long int x){
	unsigned long int i,total=0;
	for(i=1;i<=x/2;i++)
		if((x%i)==0)
		     total=total+i;
	if (total>x)
        return 1;
	else if(total==x)
        return 0;
	else return -1;
	}

int main(){
	int result;
	unsigned long int a;
	printf("PERFECTION OUTPUT\n");
	while(scanf("%lu",&a)==1){
		if(!a){
			printf("END OF OUTPUT\n");
			return 0;
			}
		result=solution(a);
		printf("%5ld  ",a);
		if(result==0)
            printf("PERFECT\n");
		else if(result>0)
            printf("ABUNDANT\n");
		else
            printf("DEFICIENT\n");
		}
	return 0;
	}
