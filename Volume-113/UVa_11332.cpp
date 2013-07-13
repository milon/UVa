//UVa Problem-11332(Summing Digits)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
	char ar[11];
	while(scanf("%s",&ar)!=EOF){
		if(ar[0]=='0')
			break;
		int len=strlen(ar);
		int sum=0;
		for(int i=0;i<len;i++)
			sum+=(ar[i]-48);
		int temp=sum/10+sum%10;
		if(temp<10)
			printf("%d\n",temp);
		else
			printf("%d\n",(temp/10+temp%10));
		}
	return 0;
	}
