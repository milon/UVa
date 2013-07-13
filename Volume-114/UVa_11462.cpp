//UVa Problem-11462(Age Sort)
//Accepted
//Running time: 1.292 sec

#include<iostream>
using namespace std;

#define max 2000005

int main(){
	int n,age[max],i,j,m;
	while(cin>>n && n){
		m=0;
		for(i=1;i<=n;i++){
			cin>>age[i];
			}
		for(i=0;i<=110;i++){
			for(j=1;j<=n;j++){
				if(age[j]==i && m<n-1){
					cout<<i<<" ";
					m++;
					}
				else if(age[j]==i && m==n-1){
					cout<<i<<endl;
					m++;
					}
				if(m==n)
					break;
				}
			}
		}
	return 0;
	}
