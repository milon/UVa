//UVa Problem-10919(Prerequisites?)
//Accepted
//Running time: 0.184 sec

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	int k,m,c,r;
	char course[100][5];
	while(scanf("%d",&k)){
		if(k==0)
			break;
		scanf("%d",&m);
		for(int i=0;i<k;i++){
			scanf("%s",&course[i]);
			}
		bool t=true;
		for(int i=0;i<m;i++){
			int count=0;
			scanf("%d %d",&c,&r);
			for(int j=0;j<c;j++){
				char temp[5];
				scanf("%s",&temp);
				for(int x=0;x<k;x++){
					if(strcmp(temp,course[x])==0)
						count++;
					}
				}
			if(count<r)
				t=false;
			}
		if(t)
			printf("yes\n");
		else
			printf("no\n");
		}
	return 0;
	}
