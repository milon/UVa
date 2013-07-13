//UVa Problem-496(Simply Subsets)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

#define MAX 1000

char s[MAX],s1[MAX],*p;
int i,j,k,l,m,n,count,a[MAX],a1[MAX];

int main(){
	while(gets(s)){
		gets(s1);
		i = 0,j = 0;
		p = strtok(s," ");
		a[i++] = atoi(p);
		while(p){
			p = strtok(NULL," ");
			if(p == NULL)
                break;
			a[i++] = atoi(p);
            }
		p = strtok(s1," ");
		a1[j++] = atoi(p);
		while(p){
			p = strtok(NULL," ");
			if(p == NULL)
			 	break;
			a1[j++] = atoi(p);
            }
		count = 0;
		for(m = 0 ;m < i;m++){
			for(n = 0 ; n < j;n++){
				if(a[m] == a1[n]){
					a1[n] = -1;
					count++;
                    }
                }
            }
		if(count == i && count == j)
            printf("A equals B\n");
		else if( (i < j) && count == i)
			printf("A is a proper subset of B\n");
		else if( (i > j) && count == j)
			printf("B is a proper subset of A\n");
		else if(count == 0)
			printf("A and B are disjoint\n");
		else
			printf("I'm confused!\n");
        }
	return 0;
    }
