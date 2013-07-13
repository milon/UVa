//UVa Problem-10656(Maximum Sum II)
//Accepted
//Running time: 0.040 sec

#include<iostream>
using namespace std;

int main(){
	int n, temp, ar[1000];
	while(cin>>n){
		if(n==0) break;
		int index=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp!=0)
				ar[index++]=temp;
			}
		for(int i=0;i<index-1;i++)
			cout<<ar[i]<<" ";
		cout<<ar[index-1]<<endl;
		}
	return 0;
	}
