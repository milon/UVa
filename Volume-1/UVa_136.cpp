//UVa Problem-136(Ugly Numbers)
//Accepted
//Running time: 0.016 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
	int i,j;
	unsigned long ugly[1500];
	ugly[0]=1;
	for(i=1;i<1500;i++){
		ugly[i]=1000000000;
		for(j=0;j<i;j++){
			if(ugly[j]*2>ugly[i-1]){
				if(ugly[j]*2<ugly[i])
					ugly[i]=ugly[j]*2;
				}
		 	else if(ugly[j]*3>ugly[i-1]){
				if(ugly[j]*3<ugly[i])
					ugly[i]=ugly[j]*3;
				}
		 	else if(ugly[j]*5>ugly[i-1]){
				if(ugly[j]*5<ugly[i])
					ugly[i]=ugly[j]*5;
				}
			}
		}
	cout<<"The 1500'th ugly number is "<<ugly[1499]<<"."<<endl;
   	return 0;
	}
