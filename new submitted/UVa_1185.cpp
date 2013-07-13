//UVa Problem-1185(Big Number)
//Accepted
//Running time: 0.660 sec
//

#include<cmath>
#include<cstdio>
using namespace std;

#define MAX 10000000

double arr[MAX+1];

void calculate(){
	arr[0]=0;
	for(int i=1;i<=MAX;i++)
		arr[i]=arr[i-1]+log(i);
    }

int main(){
	calculate();
	int i;
	scanf("%d",&i);
	while(i--){
		int num;
		scanf("%d",&num);
		printf("%.0lf\n",floor(arr[num]/log(10.0)+1.0));
        }
	return 0;
    }
