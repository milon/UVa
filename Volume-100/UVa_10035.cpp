//UVa Problem-10035(Primary Arithmetic)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	unsigned long n1,n2;
	while((cin>>n1>>n2) && (n1>0||n2>0)){
		int ca=0;
		int count=0;
		int res;
		while(n1>0||n2>0){
			res=(n1%10)+(n2%10)+ca;
			if(res>9)count++;
			ca=res/10;
			n1/=10;
			n2/=10;
		   }
		if(count==0) cout<<"No carry operation.\n";
		else if(count==1) cout<<count<<" carry operation.\n";
		else cout<<count<<" carry operations.\n";
		}
	return 0;
	}
