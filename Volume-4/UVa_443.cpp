//UVa Problem-443(Humble Numbers)
//Accepted
//Running time: 0.024 sec

#include<iostream>
#include<cstdio>
using namespace std;

#define limit 5842
#define inf (long long int)1e15

long long int min(long long int a, long long int b){
	return (a>b?b:a);
	}

 string suffix(int num) {
   	if (num%100 >= 10 && num%100 <= 20) return "th";
   	if (num%10 == 1) return "st";
   	if (num%10 == 2) return "nd";
   	if (num%10 == 3) return "rd";
   	return "th";
	}

int main(){
	int marker[4],num[4],i,j;
	long long value[limit];
	for(i=0;i<4;i++)
		marker[i]=0;
	num[0]=2;
	num[1]=3;
	num[2]=5;
	num[3]=7;
	for(i=0;i<limit;i++)
		value[i]=1;
	for(i=1;i<limit;i++){
		long long cur=inf;
		for(j=0;j<4;j++)
			cur=min(cur,value[marker[j]]*num[j]);
		value[i]=cur;
		for(j=0;j<4;j++){
			if(cur==value[marker[j]]*num[j]){
				marker[j]++;
				}
			}
		}
	long long t;
	while(cin>>t && t){
		printf("The %d%s humble number is %lld.\n", t, suffix(t).c_str(),value[t-1]);
		}
	return 0;
	}
