//UVa Problem-12279(Emoogle Balance)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
using namespace std;

int main(){
    for(int i=1; ;i++){
        int n;
        scanf("%d", &n);
        if(!n)
            break;
        int a=0,b=0,c;
        while(n--){
            scanf("%d",&c);
            if(c==0)
                ++b;
            else
                ++a;
            }
        printf("Case %d: %d\n", i,a-b);
        }
    return 0;
    }
