//UVa Problem-10633(Rare Easy Problem)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
	char line[100];
	unsigned long long x,y,z,m,n;
	while(1){
		cin>>y;
		if(y==0)
			break;
		x=y/9;
		n=x+y;
		z=x*9;
		if(z==y){
			m=n-1;
			cout<<m<<" ";
			}
		cout<<n<<endl;
		}
	return 0;
	}
