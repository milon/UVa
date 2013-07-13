//UVa Problem-458(The Decoder)
//Accepted
//Running time: 0.020 sec
//Author: Milon

#include<cstdio>
using namespace std;

char x[1200];

void solution(char s[]){
	int i;
	for(i=0;s[i];i++){
		x[i]=s[i]-7;
		}
	x[i]=NULL;
	printf("%s\n",x);
	}

int main(){
	char ch[1200];
	while(gets(ch)){
		solution(ch);
		}
	return 0;
	}
