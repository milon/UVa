//UVa Problem-11614(Etruscan Warriors Never Play Chess)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long num;
		cin>>num;
		long long sq=sqrt(1+4*2*num);
		long long res1=(1+sq)/2;
		cout<<res1-1<<endl;
		}
	return 0;
	}
