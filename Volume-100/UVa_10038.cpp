//UVa Problem-10038(Jolly Jumpers)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cstdlib>
using namespace std;

#define max 3000

int main(){
	int n;
	while(cin>>n){
		int flag=0;
		int dif[max]={0};
		long num[max]={0};
		int i=1;
		cin>>num[0];
		int c=0;
		while(i<n){
			cin>>num[i];
			long d=labs(num[i]-num[i-1]);
			if((d>0&&d<n)&&dif[d]==0)
				dif[d]=1;
			else flag=1;
			i++;
			}
		if(flag==0)cout<<"Jolly\n";
		else cout<<"Not jolly\n";
		}
	return 0;
	}
