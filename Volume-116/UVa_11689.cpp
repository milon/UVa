//UVa Problem-11689(Soda Surpler)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main(){
    long int r,i,emp,f,c,x,kase,e,ans;
    scanf("%ld",&kase);
    while(kase--){
        scanf("%ld%ld%ld",&e,&f,&c);
        emp=e+f;
        ans=0;
        r=0;
        while(true){
            x=emp/c;
            ans+=x;
            emp=emp/c+emp%c+r;
            if(emp<c)
                break;
            }
        printf("%ld\n",ans);
        }
    return 0;
    }
