//UVa Problem-11137(Ingenuous Cubrency)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<algorithm>
using namespace std;

long nway[10001];

void count(){
	int i,j,c;
	int coin[]={1, 8, 27, 64, 125, 216, 343, 512, 729,
                1000, 1331, 1728, 2197, 2744, 3375, 4096,
                4913, 5832, 6859, 8000, 9261};
	reverse(coin,coin+21);
	nway[0]=1;
	for(i=0;i<21;i++){
		c=coin[i];
		for(j=c;j<=10000;j++){
			nway[j]+=nway[j-c];
            }
        }
    }

int main(){
	long n;
	count();
	while(cin>>n)      // n must be smaller than 1001
		cout<<nway[n]<<endl;
	return 0;
    }
