//UVa Problem-10473(Simple Base Conversion)
//Accepted
//Running time: 0.028 sec

#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;

int main(){
    long n;
    char suru[20];
    suru[1]='\0';
    while(gets(suru)){
        if(suru[0]=='0' && suru[1]=='x'){
            n=strtol(suru,NULL,16);
            cout<<n<<endl;
            }
        else{
            n=atoi(suru);
            if(n<0)
                return 0;
            printf("0x%X\n",atoi(suru));
            }
        suru[1]=='\0';
        }
    return 0;
    }
