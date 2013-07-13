//UVa Problem-486(English-Number Translator)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

char sign[25]="negative";

char digit[20][25] = {
"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine",
"ten","eleven", "twelve","thirteen", "fourteen", "fifteen", "sixteen",
"seventeen","eighteen", "nineteen"};

char power[8][25] = {
"twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};

char ppp[25]="hundred";
char super[2][25]={"thousand", "million" };

long int digit_1[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
long int power_1[11]={20,30,40,50,60,70,80,90};
long int ppp_1=100;
long int super_1[2]={1000,1000000};

int solution(char *s){
	char temp[20][25];
	int i,j,k;
	long int num = 0;
	i=0; j=0; k=0;
	int sig = 0;
	long int di1,di2,po,pp,sp;
	int flag1,flag2,flag3,flag4;
	while(s[i]){
		if(isalpha(s[i])){
			temp[k][j]=s[i];
			temp[k][j+1]=NULL;
			j++;
			}
		else{
			if (j){
				temp[k][j] = NULL;
				k++ ;
				}
			j = 0;
			}
		i++;
		}
	j = 0;
	if(strcmp(temp[0],sign) == 0){
		sig = 1;
		j =1;
		}
	di1=0;po=0;pp=0;sp=0;di2 =0;
	for (i = j ; i <= k ; i++){
		for (j = 0 ; j < 20 ; j++)
			if (strcmp(temp[i],digit[j]) == 0){
				if(di1) di2 = digit_1[j];
				else di1 = digit_1[j];
				break;
				}
		for (j = 0 ; j < 8 ; j++)
			if (strcmp(temp[i],power[j]) == 0){
				po = power_1[j];
				break;
				}
		if(strcmp(ppp,temp[i]) == 0)
			pp = ppp_1;
		for (j = 0 ; j < 2 ; j++)
			if (strcmp(temp[i],super[j]) == 0){
				sp = super_1[j];
				break;
				}
		if(sp){
			if(pp)
				if(di2) num += (di2+po+(di1*pp)) * sp;
				else  num += (po+(di1*pp)) * sp;
			else num += (di1+po) * sp;
			sp = 0; pp = 0;po = 0;di1 = 0;di2 = 0;
			}
		}
	if(pp)
		if(di2) num += di2+po+(di1*pp) ;
		else  num += po+(di1*pp) ;
	else num += di1+po;
	if(sig) num = num * (-1);
	printf("%ld\n",num);
	return 0;
	}

int main(){
	char s[1000];
	while(gets(s)){
		solution(s);
		}
	return 0;
	}
