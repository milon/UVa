//UVa Problem-11650(Mirror Clock)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main(){
	int h,m,lim,i;
	scanf("%d",&lim);
	for(i=0;i<lim;i++){
		scanf("%d%*c%d",&h,&m);
		if(h!=12)
			h=12-h;
		if(m)
			m=60-m;
		if(m)
			h=h-1;
		if(!h)
			h=12;
		h>=10?NULL:printf("0") ;
        printf("%d:", h);
        m>=10?NULL:printf("0") ;
        printf("%d\n", m) ;
		}
	return 0;
	}
