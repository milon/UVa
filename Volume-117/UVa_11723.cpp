//UVa Problem-11723(Numbering Roads!)
//Accepted
//Running time: 0.040 sec

#include<iostream>
using namespace std;

int main(){
	long r,n,i,kase=1;
	while(cin>>r>>n && r && n){
		int x=n;
		cout<<"Case "<<kase<<": ";
		if((n+n*26)<r)
			cout<<"impossible"<<endl;
		else{
			for(i=0; ;i++){
				n=x+i*x;
				if(n>r || n==r){
					cout<<i<<endl;
					break;
					}
				}
			}
		kase++;
		}
	return 0;
	}
