//UVa Problem-11714(Blind Sorting)
//Accepted
//Running time: 0.064 sec

#include<cstdio>
using namespace std;

int main(){
    int n,i,ret;
    while(scanf("%d",&n)!=-1){
        ret=0;
        while(n>2){
            ret+=1+n/2;
            n=n/2+n%2;
            }
        printf("%d\n",ret+1);
        }
    return 0;
    }
