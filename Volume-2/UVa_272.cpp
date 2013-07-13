//UVa Problem-272(TeX Quotes)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

long int solution(char *ch,long int pos){
	for(int i=0;ch[i];i++){
		if(ch[i]==34){
			if(pos%2)
                printf("``");
			else
                printf("''");
			pos++;
			}
		else
            printf("%c",ch[i]);
		}
	printf("\n");
	return pos;
	}

int main(){
	char suru[1000];
	int i;
	long int pos=1;
	while(gets(suru)){
		pos=solution(suru,pos);
		}
	return 0;
	}

