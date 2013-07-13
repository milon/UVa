//UVa Problem-10176(Ocean Deep! Make it shallow!!)
//Accepted
//Running time: 0.040 sec

#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int index=0,s;
	char c,ar[10005];
	while(cin>>c){
		if(c!='#')
			ar[index++]=c;
		else{
			s=0;
			for(int i=0;i<index;i++){
				s*=2;
				s+=ar[i]-48;
				s%=131071;
				}
			if(s==0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
			index=0;
			getchar();
			}
		}
	return 0;
	}
