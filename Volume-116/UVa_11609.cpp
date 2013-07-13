//UVa Problem-11609(Teams)
//Accepted
//Running time: 0.008 sec

#include<iostream>
using namespace std;

#define MOD 1000000007

long long bigMod(long long b,long long p){
	if(p==0)
		return 1;
    if(p==1)
    	return b;
    if(p%2==0){
        long long x=bigMod(b,p/2)%MOD;
        return (x*x)%MOD;
    	}
    else
        return (bigMod(b,p-1)%MOD)*(b%MOD);
	}

int main(){
    int test;
    cin>>test;
    int kase=0;
    while(test--){
        int n;
        cin>>n;
        cout<<"Case #"<<++kase<<": "<<((bigMod(2,n-1)*(n%MOD))%MOD)<<endl;
    	}
	return 0;
	}
