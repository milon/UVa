//UVa Problem-11728(Alternate Task)
//Accepted
//Running time: 0.024 sec

#include<iostream>
#include<cmath>
using namespace std;

int list[1001];

void factors(){
	int i,j,k,n;
	for(i=1;i<=1000;i++)
		list[i]=0;
	for(i=1;i<=1000;i++){
		for(j=1;j<=i;j++){
			if(i%j==0)
				list[i]+=j;
			}
		}
	}

int main(){
	factors();
	int n,i,j,r,kase=1;
	while(cin>>n && n){
		r=0;
		cout<<"Case "<<kase<<": ";
		for(i=1000;i>=1;i--){
			if(list[i]==n){
				cout<<i<<endl;
				r++;
				break;
				}
			}
		if(r==0)
			cout<<"-1"<<endl;
		kase++;
		}
	return 0;
	}
