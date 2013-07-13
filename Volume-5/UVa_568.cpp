//UVa Problem-568(Just the Facts)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int num;
   	while(cin>>num){
   		long long int res=1;
   		for(int i=2;i<=num;i++){
   			res*=i;
   			while(res%10==0){
   				res/=10;
				}
   			res%=1000000;
            }
   		printf("%5d -> %lld\n", num, res%10);
		}
   	return 0;
	}
