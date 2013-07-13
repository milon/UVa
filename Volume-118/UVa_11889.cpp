//UVa Problem-11889(Benefit)
//Accepted
//Running time: 0.604 sec

#include <iostream>
#include<string>
#include<vector>
using namespace std;

#define MAX 1000000

bool mark [MAX];
vector<int> primeList;

void seive(){
	memset(mark,true,sizeof(mark));
	mark[0]=mark[1]=false;
	for(int i=4;i<MAX;i+=2)
        mark[i]=false;
	for(int i=3;i*i<=MAX;i+=2){
		if(mark[i]){
            for(int j=i*i;j<MAX;j+=2*i)
                mark[j]=false;
            }
        }
	primeList.clear();
	primeList.push_back(2);
	for(int i=3;i<MAX;i+=2){
		if(mark[i])
            primeList.push_back(i);
        }
    }

int power(int a,int b){
	int ret=1;
	for(int i=1;i<=b;i++)
        ret*=a;
	return ret;
    }

int factors(int a,int b){
	int ret=1;
	int in=0;
	int tmp=a;
	while(primeList[in]*primeList[in]<=tmp){
		int cnt1=0;
		int cnt2=0;
		while(a%primeList[in]==0){
			a/=primeList[in];
			cnt1++;
            }
		while(b%primeList[in]==0){
			b/=primeList[in];
			cnt2++;
            }
		if(cnt1>cnt2)
            ret*=power(primeList[in],cnt1);
		in++;
        }
	if(a>1 && b==1)
        ret*=a;
	return ret;
    }

int main(){
	seive();
	int testCase;
	cin>>testCase;
	while(testCase--){
		int a,c;
		cin>>a>>c;
		if(c%a==0){
			cout<<factors(c,a)<<endl;;
            }
		else
            cout<<"NO SOLUTION"<<endl;
        }
	return 0;
    }

