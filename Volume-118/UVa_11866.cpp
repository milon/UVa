//UVa Problem-11866(Triangle)
//Accepted
//Running time: 0.108 sec

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

#define MAX 1000001

long long f(long long n){
	return n*(n+1)/2;
    }

int main(){
	int n;
	long long *suru=new long long[MAX];
	long long dpn;
	long long *DP=new long long[MAX];
	suru[1]=1;
	dpn=0;
	DP[0]=0;
	for(n=1;n<MAX;++n){
        dpn=f(n)-dpn;
		DP[n]=DP[n-1]+dpn;
		if(n>1){
			suru[n]=suru[n-1]+f(n);
            }
        }
	cin>>n;
	for(int i=0;i<n;++i){
		long long X,Y;
		long long tX;
		cin>>X>>Y;
		if(Y<X){
			swap(X,Y);
            }
		--X;
		tX=2*X+1;
		if(tX>=Y){
			tX=Y;
			X=Y-(1+X);
            }
		long long ans=suru[X+1]+(DP[Y]-DP[tX])-f(X)*(Y-tX);
		cout<<ans<<endl;
        }
	delete [] suru;
	delete [] DP;
	return 0;
    }
