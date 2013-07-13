//UVa Problem-10110(Light, more light)
//Accepted
//Running time: 0.168 sec

#include<iostream>
#include<cmath>
using namespace std;

bool light(unsigned long n){
	unsigned long a=sqrt(n);
	if(a*a==n)
		return false;
	else
		return true;
	}

int main(){
	unsigned long n;
	while(cin>>n){
		if(n==0)
			break;
		if(light(n))
			cout<<"no\n";
		else
			cout<<"yes\n";
		}
	return 0;
	}
