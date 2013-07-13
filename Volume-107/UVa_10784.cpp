//UVa Problem-10784(Diagonal)
//Accepted
//Running time: 0.004 sec

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long num,cas=0;
	while(cin>>num){
		cas++;
		if(num==0)
			break;
		int result=(int)(3+sqrt(9+8*num))/2;
		if(((long long)result*(result-3))/2<num)
			result++;
		cout<<"Case "<<cas<<": "<<result<<endl;
		}
	return 0;
	}
