//UVa Problem-10336(Rank the Languages)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

char suru[100][100]; // global
char c;

void connected(int i, int j){
	suru[i][j] = '0';
	if(suru[i][j-1]==c)
		connected(i,j-1);
	if(suru[i-1][j]==c)
		connected(i-1,j);
	if(suru[i][j+1]==c)
		connected(i,j+1);
	if(suru[i+1][j]==c)
		connected(i+1,j);
	}

int main(){
	int test,kase=0;
	scanf("%d",&test);
	while(test--){
		int alpha[26]={0}; // frequency
		int i,j;
		for(i=0;i<20;i++){
			for(j=0;j<20;j++)
				suru[i][j]=0;
			}
		int h,w;
		scanf("%d %d",&h,&w);
		scanf("%c",&c);
		for(i=1;i<=h;i++){
			j=1;
			while(j<=w)
				scanf("%c",&suru[i][j++]);
			scanf("%c",&c);
			}
		for(i=1;i<=h;i++){
			for(j=1;j<=w;j++){
				if(suru[i][j]!='0'){
					c=suru[i][j];
					alpha[suru[i][j]-97]++;
					connected(i,j);
					}
				}
			}
		int max;
		int index;
		printf("World #%d\n",++kase);
		do{
			max=0;
			for(i=0;i<26;i++){
				if(max<alpha[i]){
					max=alpha[i];
					index=i;
					}
				}
			if(max!=0){
				printf("%c: %d\n",index+97,max);
				alpha[index]=0;
				}
			}while(max!=0);
		}
	return 0;
	}
