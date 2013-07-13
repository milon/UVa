//UVa Problem-200(Rare Order)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	char a[5000][21],temp[21];
	int i=0,len,n,j;
	int l[26]={0};
	while(scanf("%s",temp)){
		if(temp[0]=='#') break;
		len=strlen(temp);
		for(j=0;j<len;j++)
			a[i][j]=temp[j];
		while(j!=21)
			a[i][j++]='a';
		i++;
		}
	for(j=0;j<21;j++){
		for(n=0;n<i;n++){
			if(a[n][j]>64 && a[n][j]<91)
				l[(a[n][j]-65)]++;
			if(l[(a[n][j]-65)]==1)
				printf("%c",a[n][j]);
			}
		}
	printf("\n");
	return 0;
	}
