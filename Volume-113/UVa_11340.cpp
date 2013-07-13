//UVa Problem-11340(Newspaper)
//Accepted
//Running time: 0.424 sec

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	long kase,c,val,line,i,j,k,len,n[200];
	double price;
	char text[10000],x[200];
	while(scanf("%ld\n",&kase)==1){
		for(k=1;k<=kase;k++){
			price=0;
			scanf("%ld\n",&val);
			for(j=1;j<=val;j++){
				scanf("%c %ld\n",&x[j],&n[j]);
				}
			scanf("%ld\n",&line);
			for(j=1;j<=line;j++){
				gets(text);
				len=strlen(text);
				for(i=1;i<=val;i++){
					for(c=0;c<len;c++){
						if(x[i]==text[c])
							price+=n[i];
						}
					}
				}
			printf("%.2lf$\n",price/100);
			}
		}
	return 0;
	}
