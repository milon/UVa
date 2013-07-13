//UVa Problem-108(Maximum Sum)
//Accepted
//Running time: 0.024 sec
//Author: Milon

#include<cstdio>
using namespace std;

int num[101][101], n;

int main(){
	while(scanf("%d",&n)!=EOF){
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				scanf("%d",num[i]+j);
				num[i][j]+=num[i-1][j];
				}
			}
		int max=num[1][1];
		for(int i=1;i<=n;++i){
			for(int j=i;j<=n;++j){
				int temp=0;
				for(int k=1;k<=n;++k){
					if(temp<0)
                        temp=0;
					else
                        temp+=num[j][k]-num[i-1][k];
					max=max>temp?max:temp;
					}
				}
			}
		printf("%d\n",max);
		}
	return 0;
	}
