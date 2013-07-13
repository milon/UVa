//UVa Problem-11716(Digital Fortress)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main(){
    char line[10001];
    int r,i,j,k,len,t;
    double sqr,root;
    while(scanf("%d\n",&t)==1){
        for(k=1;k<=t;k++){
            gets(line);
            len=strlen(line);
            root=(int)(sqrt(len));
            sqr=root*root;
            if(len!=sqr)
                printf("INVALID\n");
            else{
                int s=0;
                r=(int)root;
                for(i=0;i<r;i++){
                    for(j=i;j<len;j+=r){
                        printf("%c",line[j]);
                        }
                    }
                printf("\n");
                }
            }
        }
    return 0;
    }
