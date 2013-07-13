//UVa Problem-10994(Simple Addition)
//Accepted
//Running time: 0.028 sec

#include<iostream>
using namespace std;

long long sum(long long n){
	long long m,s1=0,s2=0;
	while(n){
		m=n%10;
		n/=10;
		s1+=((m*(m+1))/2);
		s2+=n*45;
		}
	return s1+s2;
	}

int main(){
	long long p,q;
	while(cin>>p>>q){
		if(p<0 && q<0)
			break;
		long long a,b,t;
		a=sum(q);
		if(p==0 || p==1)
			b=0;
		else
			b=sum(p-1);
		t=a-b;
		cout<<t<<endl;
		}
	return 0;
	}
