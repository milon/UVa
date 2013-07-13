//UVa Problem-146(ID Codes)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	char a[55];
	while(cin>>a){
		if(strcmp(a,"#")==0)
			break;
		int len=strlen(a);
		if(next_permutation(a,a+len))
			cout<<a<<endl;
		else
			cout<<"No Successor\n";
		}
	return 0;
	}
