//UVa Problem-417(Word Index)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstring>
#include<cstdio>
using namespace std;

long int solution(char *s){
    char p[6];
	int i,j,k,l,m,len;
	long int total;
	len=strlen(s);
	switch(len){
        case 1:{
			total=0;
			for(i=97;i<123;i++){
				p[0]=i;
				p[1]=NULL;
				total++;
				if(!(strcmp(p,s)))
					return total;
                }
			return 0;
            }
		case 2:{
			total=26;
			for(i=97;i<122;i++){
				for(j=i+1;j<123;j++){
					p[0]=i;
					p[1]=j;
					p[2]=NULL;
					total++;
					if(!(strcmp(p,s)))
						return total;
                    }
                }
			return 0;
            }
		case 3:{
			total=351;
			for(i=97;i<121;i++)
				for(j=i+1;j<122;j++)
					for(k=j+1;k<123;k++){
						p[0]=i;
						p[1]=j;
						p[2]=k;
						p[3]=NULL;
						total++;
						if(!(strcmp(p,s)))
							return total;
                        }
			return 0;
            }
		case 4:{
			total=2951;
			for(i=97;i<120;i++)
				for(j=i+1;j<121;j++)
					for(k=j+1;k<122;k++)
						for(l=k+1;l<123;l++){
							p[0]=i;
							p[1]=j;
							p[2]=k;
							p[3]=l;
							p[4]=NULL;
							total++;
							if(!(strcmp(p,s)))
								return total;
                            }
			return 0;
            }
		case 5:{
			total=17901;
			for(i=97;i<119;i++)
				for(j=i+1;j<120;j++)
					for(k=j+1;k<121;k++)
						for(l=k+1;l<122;l++)
							for(m=l+1;m<123;m++){
								p[0]=i;
								p[1]=j;
								p[2]=k;
								p[3]=l;
								p[4]=m;
								p[5]=NULL;
								total++;
								if(!(strcmp(p,s)))
									return total;
                                }
			return 0;
            }
        }
	return 0;
    }

int main(){
	char s[6];
	long int result;
	while(gets(s)){
		result=solution(s);
		if(!result)
            printf("0\n");
		else
            printf("%ld\n",result);
        }
	return 0;
    }
