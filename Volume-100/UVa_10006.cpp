//UVa Problem-10006(Carmichael Numbers)
//Accepted
//Running time: 0.048 sec

#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

#define max 65005

char pp[max];

void prime_table(){
    int i,j;
    for(i=2;i<max;i++)
        pp[i]=1;
    for(i=2;i<=sqrt(max);){
        for(j=i+i;j<max;j+=i)
            pp[j]=0;
        for(i++;!pp[i];i++);
        }
    }

int prime(unsigned long n){
    unsigned long q,m,z;
    unsigned long i,y,a;
    q=n;
    for(i=0;i<8;i++){
        m=q;
        y=1;
        a=(rand()%(q-1));
        z=a;
        while(m>0){
            while(!(m%2)){
                z=(z*z)%n;
                m=m/2;
                }
            m-=1;
            y=(y*z)%n;
            }
        if(y!=a)
            return 0;
        }
    return 1;
    }




int main(){
    unsigned long n;
    prime_table();
    while(true){
        scanf("%ld",&n);
        if(n==0)
            break;
        if(!pp[n] && prime(n))
            printf("The number %u is a Carmichael number.\n",n);
        else
            printf("%u is normal.\n",n);
        }
    return 0;
    }
