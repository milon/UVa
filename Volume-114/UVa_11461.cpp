//UVa Problem-11461(Square Numbers)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(a==0 && b==0)
			break;
		int s=(int)(floor(sqrt(b))-floor(sqrt(a-1)));
		printf("%d\n",s);
		}
	return 0;
	}

