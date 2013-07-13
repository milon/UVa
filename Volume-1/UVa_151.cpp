//UVa Problem-151(Power Crisis)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
using namespace std;

int init(int a[]){
	for (int i=1;i<=10;i++){
		a[i]=i;a[10+i]=10+i;
		a[20+i]=20+i;a[30+i]=30+i;
		a[40+i]=40+i;a[50+i]=50+i;
		a[60+i]=60+i;a[70+i]=70+i;
		a[80+i]=80+i;a[90+i]=90+i;
		}
	return 0;
	}

int main(){
	int a[101],i,n,dis,counter;
	int check,flag,flag1;
	while(1){
		scanf("%d",&n);
		if(n==0)
            break;
		dis=1;
		while(true){
			init(a);
			i=1;
			counter=0;
			check=1;
			flag1=1;
			flag=1;
			a[1] = 0;
			while(flag1 && flag){
				if(a[i]!=0){
					counter++;
					if(counter==dis){
						check++;
						counter=0;
						if((a[i]==13) && (check!=n))
							flag=0;
						else if((check==(n-1)) && (a[13]==13))
							flag1=0;
						a[i]=0;
						}
					}
				i++;
				if(i>n)
					i=1;
				}
			if(flag1==0)
				break;
			dis++;
		 }
		printf("%d\n",dis);
		}
	return 0;
	}
