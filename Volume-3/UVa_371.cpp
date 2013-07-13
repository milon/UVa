//UVa Problem-371(Ackermann Functions)
//Accepted
//Running time: 0.152 sec

#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	long a,b;
	while(scanf("%ld %ld",&a,&b)==2){
		if(a==0 && b==0)
			break;
		if(a>b)
			swap(a,b);
		long res=0,resnum=-1;
		for(long i=a;i<=b;i++){
			long long num=i,len=0;
			do{
				if(num%2==0)
					num/=2;
				else
					num=3*num+1;
				len++;
				}while(num!=1);
			if(len>res){
				resnum=i;
				res=len;
				}
			}
		printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.\n", a, b, resnum, res);
		}
	return 0;
	}
