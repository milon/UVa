//UVa Problem-324(Factorial Frequencies)
//Accepted
//Running time: 0.024 sec
//Author: Milon

#include<cstdio>
using namespace std;

#define MAX 790

char res[367][MAX];
int f[367][10];
long int carry,sum;

void multiply(char *s,long int n,char *r){
	int i;
	carry=0;
	for(i=0;s[i];i++){
		sum=(s[i]-'0')*n+carry;
		r[i]=sum%10+'0';
		carry=sum/10;
		}
	while(carry){
		r[i++]=carry%10+'0';
		carry=carry/10;
		}
	r[i]='\0';
	}

void init(){
	long int i,j;
	res[1][0]='1';
	res[1][1]='\0';
	for(i=2;i<367;i++)
		multiply(res[i-1],i,res[i]);
	for(i=1;i<367;i++){
		for(j=0;res[i][j];j++){
			f[i][res[i][j]-'0']++;
			}
		}
	}

int main(){
	int n;
	init();
	while(scanf("%d",&n)==1){
		if(n==0)
            return 0;
		printf("%d! --\n",n);
		printf("   (0)%5ld    (1)%5ld    (2)%5ld    (3)%5ld    (4)%5ld\n",
			f[n][0],f[n][1],f[n][2],f[n][3],f[n][4]);
		printf("   (5)%5ld    (6)%5ld    (7)%5ld    (8)%5ld    (9)%5ld\n",
			f[n][5],f[n][6],f[n][7],f[n][8],f[n][9]);
		}
	return 0;
	}
