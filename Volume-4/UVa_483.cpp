//UVa Problem-483(Word Scramble)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

char *reverse(char *s);
int solution(char *s);

int main(){
	char s[5000];
	while(gets(s)){
		solution(s);
		}
	return 0;
	}

int solution(char *s){
	char temp[5000]="";
	char extra[5000];
	char space[2];
	int i,j,k;
	i=0;j=0;
	while(s[i]){
		if(!(isspace(s[i]))){
			extra[j]=s[i];
			extra[j+1]=NULL;
			j++;
			}
		else{
			if(j){
				reverse(extra);
				strcat(temp,extra);
				extra[0]=NULL;
				}
			space[0]=s[i];
			space[1]=NULL;
			strcat(temp,space);
			j=0;
			}
		i++;
		}
	reverse(extra);
	strcat(temp,extra);
	printf("%s\n",temp);
	return 0;
	}

char *reverse(char *s){
	char *r_str;
	char *f_str;
	char test;
	r_str=s;
	f_str=s;
	while(*s)
        s++;
	while(f_str<s){
		test=*(--s);
		*s=*f_str;
		*f_str++=test;
		}
	return r_str;
	}

