//UVa Problem-10062(Tell me the frequencies!)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<algorithm>
using namespace std;

struct array{
	int ascii;
	int fre;
    }suru[128];

int main(){
    char ch;
	int i,f=0,n=0,m;
    n=scanf("%c",&ch);
	while(true){
		m=(int)ch;
		while(m!=10){
			if(m>31 && m<128){
                suru[m].ascii=m;
                suru[m].fre+=1;
                }
			n=scanf("%c",&ch);
			if(n!=1)
                break;
			m=(int)ch;
            }
		int j;
		for(i=32;i<128;i++){
            for(j=32;j<127;j++){
                if(suru[j].fre>suru[j+1].fre){
                    swap(suru[j].fre,suru[j+1].fre);
                    swap(suru[j].ascii,suru[j+1].ascii);
                    }
                else if(suru[j].fre==suru[j+1].fre && suru[j].ascii<suru[j+1].ascii){
                    swap(suru[j].ascii,suru[j+1].ascii);
                    }
                }
            }
        for(i=32;i<128;i++){
            if(suru[i].fre!=0){
				printf("%d %d\n",suru[i].ascii,suru[i].fre);
			    suru[i].ascii=0;
			    suru[i].fre=0;
                }
            }
        n=scanf("%c",&ch);
		if(n!=1)
            break;
		printf("\n");
        }
	return 0;
    }
