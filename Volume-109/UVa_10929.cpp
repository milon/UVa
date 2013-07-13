//UVa Problem-10929(You can say 11)
//Accepted
//Running time: 0.056 sec

#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char n[1000];
	int odd_sum=0;
	int even_sum=0;
	while(cin>>n){
		if(n[0]=='0' && n[1]=='\0')
			break;
		int len=strlen(n);
		odd_sum=0;
		even_sum=0;
		for(int i=0;i<len;i+=2)
			even_sum += (n[i]-48);
		for(int i=1;i<len;i+=2)
			odd_sum += (n[i]-48);
		if((even_sum-odd_sum)%11==0)
			cout<<n<<" is a multiple of 11.\n";
		else
			cout<<n<<" is not a multiple of 11.\n";
		}
	return 0;
	}
