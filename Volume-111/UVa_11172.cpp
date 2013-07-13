//UVa Problem-11172(Relational Operators)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
	int count;
	cin>>count;
	while(count--){
		long long a,b;
		cin>>a>>b;
		if(a>b)
			cout<<">\n";
		else if(a<b)
			cout<<"<\n";
		else
			cout<<"=\n";
		}
	return 0;
	}
