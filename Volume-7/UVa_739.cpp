//UVa Problem-739(Soundex Indexing)
//Accepted
//Running time: 0.040 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int soundex(char ch){
	if(ch=='B'||ch=='F'||ch=='P'||ch=='V')
		return 1;
    else if(ch=='C'||ch=='G'||ch=='J'||ch=='K'||ch=='Q'||ch=='S'||ch=='X'||ch=='Z')
		return 2;
    else if(ch=='D'||ch=='T')
		return 3;
    else if(ch=='L')
		return 4;
    else if(ch=='M'||ch=='N')
		return 5;
    else if(ch=='R')
		return 6;
    else
		return 0;
    }

int main(){
	char code[25],x;
    int i,len,j,a[22];
    printf("         NAME                     SOUNDEX CODE\n");
    while(gets(code)){
		for(i=0;i<22;i++)
			a[i]=0;
		len=strlen(code);
		printf("         ");
		printf("%s",code);
		for(i=len;i<25;i++)
			printf(" ");
		printf("%c",code[0]);
		a[0]=soundex(code[0]);
		int c,j=1;
		for(i=1;i<len;i++){
			c=soundex(code[i]);
			if(c!=soundex(code[i-1])&&c!=0){
				a[j]=c;
				j++;
				}
			}
		for(i=1;i<=3;i++)
			printf("%d",a[i]);
		printf("\n");
		}
    printf("                   END OF OUTPUT\n");
    return 0;
    }
