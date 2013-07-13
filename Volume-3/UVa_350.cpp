//UVa Problem-350(Pseudo-Random Numbers)
//Accepted
//Running time: 0.020 sec

#include<iostream>
using namespace std;

int main(){
	long z,i,l,m;
	long kase=1;
	while(cin>>z>>i>>m>>l&&(z>0&&i>0&&l>0&&m>0)){
		int rand[10000]={0};
		long cycle=0;
		int flag=0;
		while(flag!=1){
			long nr=(z*l+i)%m;
			l=nr;
			if(rand[l]==0){
				rand[l]=1;
				cycle++;
				}
			else flag=1;
			}
		cout<<"Case "<<kase++<<": "<<cycle<<"\n";
		}
	return 0;
	}
