//UVa Problem-10771(Barbarian tribes)
//Accepted
//Running time: 0.036 sec

#include<iostream>
using namespace std;

int main(){
	int n,m,k;
	while(cin>>n>>m>>k){
		if(n==0 && m==0 && k==0)
			break;
		if(m%2==0)
			cout<<"Gared\n";
		else
			cout<<"Keka\n";
		}
	return 0;
	}
