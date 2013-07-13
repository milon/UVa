//UVa Problem-10922(2 the 9s)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cstring>
using namespace std;

char suru[1005],*k;
int s,i;

int main(){
    while(gets(suru)){
        if(strcmp(suru,"0")==0)
            break;
        printf("%s",suru);
        i=0;
        do{
            s=0;
            k=&suru[0];
            while(*k){
                s+=*k-'0';
                k++;
                }
            sprintf(suru,"%d",s);
            i++;
            }while(s%9==0 && s!=9);
        if(s%9==0)
            printf(" is a multiple of 9 and has 9-degree %d.\n",i);
        else
            printf(" is not a multiple of 9.\n");
        }
    return 0;
    }
