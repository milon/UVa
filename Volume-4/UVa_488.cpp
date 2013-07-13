//UVa Problem-488(Triangle Wave)
//Accepted
//Running time: 0.332 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
	int count;
	cin>>count;
	bool flag=true;
	while(count--){
		int amp,fre;
		cin>>amp>>fre;
		bool first=true;
		if(flag==false)
			cout<<endl;
		flag=true;
		for(int i=0;i<fre;i++){
			if(first==false)
				cout<<endl;
			first=false;
			for(int j=1;j<amp;j++){
				for(int k=0;k<j;k++)
					cout<<j;
				cout<<endl;
				}
			for(int j=amp;j>0;j--){
				for(int k=0;k<j;k++)
					cout<<j;
				cout<<endl;
				}
			}
		}
	return 0;
	}
