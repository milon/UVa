//UVa Problem-10346(Peter’s smoke)
//Accepted
//Running time: 0.012 sec

#include<iostream>
using namespace std;

int main(){
	int n,k,sum,butt;
	while(cin>>n>>k){
		sum=0;
		butt=0;
		while(n>0){
			sum+=n;
			butt+=n;
			n=butt/k;
			butt%=k;
			}
		cout<<sum<<"\n";
		}
	return 0;
	}
