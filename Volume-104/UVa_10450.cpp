//UVa Problem-10450(World Cup Noise)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,m;
	long long ar[51];
	ar[1]=2;
	ar[2]=3;
	for(int i=3;i<51;i++)
		ar[i]=ar[i-1]+ar[i-2];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
		cout<<"Scenario #"<<i<<":\n";
		cout<<ar[m]<<"\n\n";
		}
	return 0;
	}
