//UVa Problem-465(Overflow)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cstdlib>
using namespace std;

int main (){
	long double x,y;
	char a[10000],b[10000],c;
	while(scanf("%s %c %s",a,&c,b)==3){
		x=atof(a);
		y=atof(b);
		printf("%s %c %s\n",a,c,b);
		if(x>2147483647)
			printf("first number too big\n");
		if(y>2147483647)
			printf("second number too big\n");
		if(c=='+'){
			x=x+y;
			if(x>2147483647)
			printf("result too big\n");
			}
		else{
			x=x*y;
			if(x>2147483647)
			printf("result too big\n");
			}
		}
	return 0;
	}
