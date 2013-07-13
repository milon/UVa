//UVa Problem-492(Pig-Latin)
//Accepted
//Running time: 0.028 sec
//Author: Milon

#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

char s[10000000],ch[2],temp[25000],s7[25000];
int count,i,j,k,l;

char* revers(char *s6){
	int a1,b1,c1,d1;
	b1=strlen(s6);
	for(a1=b1-1,c1=0;a1>=0;a1--,c1++)
		s7[c1]=s6[a1];
	s7[c1] = '\0';
	for(d1=0;s7[d1]!=NULL;d1++)
		s6[d1]=s7[d1];
	s6[d1] = '\0';
	return s6;
	}

void solution(char *temp){
	if(temp[0] == 'a' || temp[0] == 'A' || temp[0] == 'e'
	   || temp[0] == 'E' || temp[0] == 'i' || temp[0] == 'I' ||
	   temp[0] == 'o' || temp[0] == 'O' ||
	   temp[0] == 'u' || temp[0] == 'U' ){
			strcat(temp,"ay");
			printf("%s",temp);
			}
	else {
        ch[0] = temp[0];
        ch[1] = '\0';
        revers(temp);
        temp[strlen(temp) - 1] = NULL;
        revers(temp);
        strcat(temp,ch);
        strcat(temp,"ay");
        printf("%s",temp);
        }
	}

int main(){
	while(gets(s)){
		count = 0;
		for(i=0;s[i]!=NULL;i++) {
			if( ( s[i]>64 && s[i]<91 ) || ( s[i]>96 && s[i]<=122 )){
				temp[j]=s[i];
				j++;
				}
			else{
				temp[j]=NULL;
				if(strcmp(temp,"") != 0) {
					solution(temp);
					j = 0; i--;
					strcpy(temp,"");
					}
				else{
					printf("%c",s[i]);
					}
				}
			}
		printf("\n");
		}
	return 0;
	}
