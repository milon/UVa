//UVa Problem-11538(Chess Queen)
//Accepted
//Running time: 1.380 sec

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	unsigned long long n,m;
	while(cin>>n>>m && n && m){
		unsigned long long res=0;
		unsigned long long mini=min(m,n);
		unsigned long long maxi=max(m,n);
		unsigned long long cnt=1;
		while(cnt!=mini){
			res+=((cnt-1)*cnt);
			res+=((cnt-1)*cnt);
			cnt++;
			maxi--;
            }
		cnt*=(cnt-1);
		res+=(maxi*cnt);
		res*=2;
		res+=(n*(m-1)*m+m*(n-1)*n);
		cout<<res<<endl;
        }
	return 0;
    }
