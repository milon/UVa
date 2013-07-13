//UVa Problem-696(How Many Knights)
//Accepted
//Running time: 0.032 sec
//Author: Milon

#include<cstdio>
using namespace std;

int main(){
	long n,m,s;
    while(scanf("%ld %ld",&n,&m)==2){
		if(n==0&&m==0) break;
        if(m==1||n==1) s=n*m;
        else if(n==2||m==2){
			long t=n;
			if(t<m) t=m;
			s=(t/4)*4;
			if(t%4==1)
				s+=2;
			else if(t%4>1)
				s+=4;
			}
        else s=(n*m+1)/2;
        printf("%ld knights may be placed on a %ld row %ld column board.\n",s,n,m);
		}
    return 0;
	}
