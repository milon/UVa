//UVa Problem-271(Simply Syntax)
//Accepted
//Running time: 0.020 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	long len,n,i;
	char suru[10000];
	while(gets(suru)){
		len=strlen(suru);
		n=0;
		for(i=len-1;i>=0;i--){
			if(suru[i]>111 && suru[i]<123)
				n++;
			else if(suru[i]==67 || suru[i]==68 || suru[i]==69 || suru[i]==73){
				if(n>=2)
					n--;
				else{
					n=0;
					break;
					}
				}
			else if(suru[i]==78){
				if(n<1){
					n=0;
					break;
					}
				}
			}
		if(n==1)
			printf("YES\n");
		else
			printf("NO\n");
		}
	return 0;
	}

