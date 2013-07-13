//UVa Problem-10469(To Carry or not to Carry)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,m,n_ar[32],m_ar[32],add[32];
	long long ar[32];
	for(int i=0;i<32;i++)
		ar[i]=pow(2,i);
	while(cin>>n>>m){
		for(int i=31,j=0;i>0,j<=31;i--,j++){
			if(n>=ar[i]){
				n_ar[j]=1;
				n-=ar[i];
				}
			else
				n_ar[j]=0;
			}
		for(int i=31,j=0;i>0,j<=31;i--,j++){
			if(m>=ar[i]){
				m_ar[j]=1;
				m-=ar[i];
				}
			else
				m_ar[j]=0;
			}
		for(int i=0;i<32;i++){
			if((n_ar[i]==1 && m_ar[i]==1)||(n_ar[i]==0 && m_ar[i]==0))
				add[i]=0;
			else
				add[i]=1;
			}
		long long ans=0;
		for(int i=0,j=31;i<32,j>=0;i++,j--)
			ans+=add[i]*ar[j];
		cout<<ans<<endl;
		}
	return 0;
	}
