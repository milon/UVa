//UVa Problem-10127(Ones)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int count=0,t=0;
		do{
			t=(t*10+1)%n;
			count++;
			}while(t>0);
		cout<<count<<endl;
		}
	return 0;
	}
