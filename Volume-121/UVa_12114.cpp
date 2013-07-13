//UVa Problem-12114(Bachelor Arithmetic)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
using namespace std;

int main(){
    for(int test=1; ;test++){
        int b,s;
        scanf("%d%d",&b,&s);
        if(!b && !s)
            break;
        printf("Case %d: ",test);
        if(b<=1)
            printf(":-\\\n");
        else if(b<=s)
            printf(":-|\n");
        else
            printf(":-(\n");
        }
    return 0;
    }
