//UVa Problem-10235(Simply Emirp)
//Accepted
//Running time: 2.940 sec

#include<cstdio>
using namespace std;

long int prime(long int n){
    int i,a=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            a++;
            break;
            }
        }
    if(a>0)
        return 0;
    else
        return 1;
    }

long int reverse(long int n){
    long int x,rev=0;
    while(n>0){
        x=n%10;
        rev=(rev*10)+x;
        n=n/10;
        }
    return rev;
    }

int main(){
    long int n,rev,p,rnp;
    while(scanf("%ld",&n)==1){
        if(n<=1)
            printf("%ld is prime.\n",n);
        else{
            p=prime(n);
            if(p==0)
                printf("%ld is not prime.\n",n);
            else if(p==1){
                rev=reverse(n);
                rnp=prime(rev);
                if(rnp==1 && n>10 && n!=rev)
                    printf("%ld is emirp.\n",n);
                else
                    printf("%ld is prime.\n",n);
                }
            }
        }
    return 0;
    }
