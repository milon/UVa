//UVa Problem-11541(Decoding)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cmath>
using namespace std;

int n, num, i, t, l;
char string[200], * p;

int main(){
	scanf("%d",&n);
	while(n--){
		t++;
		scanf("%s",string);
		printf("Case %d: ",t);
		p = &string[0];
		while(*p){
			sscanf(p+1,"%d",&num);
			for(i = 0; i < num; i++)
				putchar(*p);
			l=(int)log10(num);
			p+=(l+2);
            }
		putchar('\n');
        }
	return 0;
    }
