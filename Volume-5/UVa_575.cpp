//UVa Problem-575(Skew Binary)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
	char ch[10000];
	while(cin>>ch){
		int len=strlen(ch);
		if((len==1) && (ch[len-1]=='0'))
			break;
		unsigned long sum=0;
		for(int i=0,j=len-1;i<len;i++,j--){
			int n=ch[j]-48;
			sum+=n*(pow(2,i+1)-1);
			}
		cout<<sum<<endl;
		}
	return 0;
	}
