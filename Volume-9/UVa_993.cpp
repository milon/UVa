//UVa Problem-993(Product of digits)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int count,num;
	cin>>count;
	while(count--){
		cin>>num;
		vector<int>result;
		if(num<10){
			cout<<num<<endl;
			continue;
			}
		for(int i=9;i>=2;i--){
			while(num%i==0){
				result.push_back(i);
				num/=i;
				}
			}
		if(num!=1){
			cout<<"-1"<<endl;
			continue;
			}
		sort(result.begin(),result.end());
		int number=0;
		for(int i=result.size()-1,j=0;i>=0;i--,j++){
			number+=(result[i])*(int)pow((double)10,(double)j);
			}
		printf("%d\n",number);
		}
	return 0;
	}
