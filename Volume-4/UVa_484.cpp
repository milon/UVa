//UVa Problem-484(The Department of Redundancy Department)
//Accepted
//Running time: 0.048 sec
//Author: Milon

#include<cstdio>
using namespace std;

int in,flag,i,temp,a[100000],f[100000];

int main(){
	in=0;
    while(scanf("%d",&temp)==1){
		flag=0;
		for(i=0;i<in;i++){
			if(a[i]==temp){
				flag=1;
				a[i]=temp;
				f[i]++;
				break;
                }
            }
		if(!flag){
			a[in]=temp;
			f[in]++;
			in++;
            }
        }
	for(i=0;i<in;i++){
		printf("%d %d\n",a[i],f[i]);
        }
	return 0;
    }
