//UVa Problem-264(Count on Cantor)
//Accepted
//Running time: 0.872 sec
//AUthor: Milon

#include<iostream>
using namespace std;

int main(){
	long num;
	while(cin>>num){
		int flag1=0,flag2=0;
		long i,j,k,l;
		long m,n;
		for(i=1,j=1;j<=num;i++){
			if(flag1==0){
				for(k=1,l=i;l>0;k++,l--){
					m=l;
					n=k;
					j++;
					if(j>num){
						flag2=1;
						break;
						}
					}
				flag1=1;
				}
			else{
				for(k=1,l=i;l>0;k++,l--){
					n=l;
					m=k;
					j++;
					if(j>num){
						flag2=1;
						break;
						}
					}
				flag1=0;
				}
			}
		if(flag2==1)
		cout<<"TERM "<<num<<" IS "<<m<<'/'<<n<<"\n";
		}
	return 0;
	}
