//UVa Problem-530(Binomial Showdown)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
	long long n,k,ans;
	while(cin>>n>>k){
		if(n==0 && k==0)
			break;
		ans=1;
		if(k<n/2.0){
			for(int i=n,j=1;i>n-k,j<=k;i--,j++){
				ans*=i;
				ans/=j;
				}
			}
		else{
			for(int i=n,j=1;i>k,j<=n-k;i--,j++){
				ans*=i;
				ans/=j;
				}
			}
		cout<<ans<<endl;
		}
	return 0;
	}
