//UVa Problem-10061(How many zeros and how many digits?)
//Accepted
//Running time: 0.248 sec

#include<cstdio>
#include<cmath>
#include<climits>
using namespace std;

int trailzero(int num,int base){
	unsigned int max=UINT_MAX,factordim,i;
	for(i=2;i<=base;++i){
		factordim=0;
		while(base%i==0){
			factordim++;
			base/=i;
            }
		if(factordim>0){
			int numfactor=0,j=i;
			for(;j<=num;j*=i)
				numfactor+=num/j;
			if(max>numfactor/factordim)
				max=numfactor/factordim;
            }
        }
	return max;
    }

double dignum(int num, int base){
	double sum=0,temp;
	for(int i=2;i<=num;++i){
		temp=i;
		sum+=log(temp);
        }
	temp=base;
	return ceil(sum/log(temp)+1e-10);
    }

int main(){
	int N,B;
	while(scanf("%d %d",&N,&B) != EOF){
		if(N==1){
		    printf("0 1\n");
		    continue;
		    }
		printf("%u %.lf\n",trailzero(N,B),dignum(N,B));
        }
	return 0;
    }
