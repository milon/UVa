//UVa Problem-10139(Factovisors)
//Accepted
//Running time: 0.084 sec

#include<iostream>
using namespace std;

int primes[6550];
int len;

void getprime(){
	bool flag[65537]={false};
	for(int i=2;i<65537;++i)
        if(!flag[i])
			for(int j=i+i;j<65537;j+=i)
				flag[j]=true;
	for(int i=2;i<65537;++i)
		if(!flag[i])
			primes[len++]=i;
    }

int main(){
	int a,b;
	getprime();
	while(cin>>a>>b){
		int temp=b,dim,sumdim;
		bool flag=true;
		if(a==0){
			if(b==1)
                cout<<b<<" divides "<<a<<"!"<<endl;
			else
			cout<<b<<" does not divide "<<a<<"!"<<endl;
			continue;
            }
		if(b==0){
			cout<<b<<" does not divide "<<a<<"!"<<endl;
			continue;
            }
		for(int i=0;primes[i]*primes[i]<=temp && i<len;++i){
			dim=0;
			while(temp%primes[i]==0){
				dim++;
				temp/=primes[i];
                }
			if(dim){
				sumdim=0;
				for(int j=primes[i];j<=a;j*=primes[i])
					sumdim+=a/j;
				if(dim>sumdim){
				    flag=false;
				    break;
				    }
                }
            }
		if(temp==b || temp!=1) {
			if(a<temp)
                flag=false;
            }
		if(flag)
			cout<<b<<" divides "<<a<<"!"<<endl;
		else
			cout<<b<<" does not divide "<<a<<"!"<<endl;
        }
	return 0;
    }
