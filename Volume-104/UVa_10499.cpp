//UVa Problem-10499(The Land Of Justice)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
using namespace std;

int main(){
    long int n,r;
    while(scanf("%ld",&n)==1){
        if(n<0) break;
        if(n==1) r=0;
        else r=n*25;
        printf("%ld%%\n",r);
        }
    return 0;
    }
