//UVa Problem-11732(strcmp() Anyone?)
//Accepted
//Running time: 0.980 sec

#include<cstdio>
#include<cstring>
using namespace std;

int cmpTimes(char* p,char* q){
	char *s=p;
	while(*s==*q && *s){
	    ++s;
	    ++q;
	    }
	return(s-p+1)*2-((*s+*q)?1:0);
    }

char str[4000][1001];
int mat[4000][4000];
int likeleft[4000];

int main(){
	int i,j,k,N,l,m,n,s;
	long long t;
	for(i=1;scanf("%d%*c",&N),N;i++){
		memset(&mat[0][0],0,4000*4000*sizeof(int));
		memset(likeleft,0,4000*sizeof(int));
		t=0;
		gets(str[0]);
		for(j=1;j<N;j++){
			gets(str[j]);
			likeleft[j]=0;
			mat[0][j]=cmpTimes(str[0],str[j]);
			t+=mat[0][j];
			for(k=1;k<j;k++){
				l=likeleft[k];
				m=mat[l][j];
				n=mat[l][k];
				if(m!=n)
                    mat[k][j]=m<n?m:n;
				else if(m&1){
					s=(m-1)>>1;
					mat[k][j]=m-1+cmpTimes(str[k]+s,str[j]+s);
                    }
				else
                    mat[k][j]=m;
				mat[likeleft[j]][j]<mat[k][j] && (likeleft[j]=k);
				t+=mat[k][j];
                }
            }
		printf("Case %d: %lld\n",i,t);
        }
	return 0;
    }
