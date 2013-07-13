//UVa Problem-10323(Factorial! You Must be Kidding!!!)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
using namespace std;

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n>13)
			printf("Overflow!\n");
		else if(n>=0){
			switch(n){
				case 13: printf("6227020800\n");
						 break;
				case 12: printf("479001600\n");
						 break;
				case 11: printf("39916800\n");
						 break;
				case 10: printf("3628800\n");
						 break;
				case 9:  printf("362880\n");
						 break;
				case 8:  printf("40320\n");
						 break;
				default: printf("Underflow!\n");
						 break;
				}
			}
		else{
			if(-n%2==0)
				printf("Underflow!\n");
			else
				printf("Overflow!\n");
			}
		}
	return 0;
	}
