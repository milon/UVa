//UVa Problem-357(Let Me Count The Ways)
//Accepted
//Running time: 1.120 sec

#include<cstdio>
#include<cstring>
using namespace std;

#define size 30010

long int n,res[size],sum;
long int a[6]={0,1,5,10,25,50};

void solution(){
    long int j,k;
	memset(res,0,sizeof(res[0])*size);
	res[0]=1;
	for(j=1;j<n;j++){
		res[a[j]]+=1;
		for(k=1;k<=sum;k++){
			if((res[k]) && ((a[j]+k)<=sum)){
				res[a[j]+k]+=res[k];
                }
            }
        }
    }

int main(){
	n=6;
	while(scanf("%ld",&sum)==1){
        solution();
		if(res[sum]==1){
			printf("There is only 1 way to produce %ld cents change.\n",sum);
            }
		else{
			printf("There are %ld ways to produce %ld cents change.\n",res[sum],sum);
            }
        }
	return 0;
    }
