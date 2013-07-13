//UVa Problem-10683(The decadary watch)
//Accepted
//Running time: 0.040 sec

#include<cstdio>
#include<cstring>
using namespace std;

char suru[100];

void Cal(){
    long long a,b,c,d,e,f;
    a=(suru[0]-'0')*10+(suru[1]-'0');
    b=(suru[2]-'0')*10+(suru[3]-'0');
    c=(suru[4]-'0')*10+(suru[5]-'0');
    d=(suru[6]-'0')*10+(suru[7]-'0');
    e=((a*3600)+(b*60)+c)*100+d;
    f=(e*125);
    f=f/108;
    printf("%07lld\n",f);
    }

int main(){
    while(gets(suru)){
        if(!strcmp(suru,"0000000")){
            printf("%s\n",suru);
            continue;
            }
        Cal();
        }
    return 0;
    }
