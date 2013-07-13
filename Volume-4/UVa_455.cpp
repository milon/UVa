//UVa Problem-455(Periodic Strings)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

int n,i,hossz,p,j;
char s1[90],s2[90],str[90];

int main(){
    scanf("%d",&n);
    gets(str);
    while(n--){
        j=1;
        gets(str);
        gets(str);
        hossz=strlen(str);
        while(true){
            p=1;
            memset(s1,'\0',90);
            memset(s2,'\0',90);
            strncpy(s1,str,j);
            for(i=0;i<hossz;i+=j){
                strncpy(s2,str+i,j);
                if(memcmp(s1,s2,j)){
                    p=0;
                    break;
                    }
                }
            if(p){
                printf("%d\n",j);
                break;
                }
            j++;
            }
        if(n!=0)
        printf("\n");
        }
    return 0;
    }
