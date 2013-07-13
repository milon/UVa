//UVa Problem-10789(Prime Frequency)
//Accepted
//Running time: 0.036 sec

#include<cstdio>
#include<cstring>
using namespace std;

#define max 3000

char prime[max+1];

void sieve(){
    int i,j,p,k;
    prime[0]=prime[1]=0;
    prime[2]=1;
    for(i=3;i<=max;i+=2){
        prime[i]=1;
        prime[i+1]=0;
        }
    for(i=3;i<=max;i+=2){
        if(prime[i]==1){
            for(j=i+2*i;j<=max;j+=2*i){
                prime[j]=0;
                }
            }
        }
    }

int main(){
    int n,i,p,m,j,k,len;
    char line[2100];
    sieve();
    while(scanf("%d\n",&n)==1){
        for(i=1;i<=n;i++){
            p=0;
            gets(line);
            len=strlen(line);
            printf("Case %d: ",i);
            for(j=48;j<=57;j++){
                m=0;
                for(k=0;k<len;k++){
                    if(line[k]==j)
                        m++;
                    }
                if(prime[m]==1){
                    printf("%c",j);
                    p++;
                    }
                }
            for(j=65;j<=90;j++){
                m=0;
                for(k=0;k<len;k++){
                    if(line[k]==j)
                        m++;
                    }
                if(prime[m]==1){
                    printf("%c",j);
                    p++;
                    }
                }
            for(j=97;j<=122;j++){
                m=0;
                for(k=0;k<len;k++){
                    if(line[k]==j)
                        m++;
                    }
                if(prime[m]==1){
                    printf("%c",j);
                    p++;
                    }
                }
            if(p==0)
                printf("empty");
            printf("\n");
            }
        }
    return 0;
    }
