//UVa Problem-913(Joana and the Odd Number)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
	long long n,a;
	while(cin>>n){
		a=(1+n)*(n/2+1)/2;
		a=a*2-1;
		a=a*3-6;
		cout<<a<<endl;
		}
	return 0;
	}
