//UVa Problem-621(Secret Research)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    int n,len;
    char s[10000];
    while(scanf("%d\n",&n)==1){
        for(int i=1;i<=n;i++){
            gets(s);
            len=strlen(s);
            if((s[len-2]-48)==3 && (s[len-1]-48)==5)
                printf("-\n");
            else if((s[0]-48)==9 && (s[len-1]-48)==4)
                printf("*\n");
            else if((s[0]-48)==1&&(s[1]-48)==9&&(s[2]-48)==0)
                printf("?\n");
            else
                printf("+\n");
            }
        }
    return 0;
    }
