//UVa Problem-594(One Little, Two Little, Three Little Endians)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
using namespace std;

int main(){
    int n,nuevo;
    char *suru,*milon;
    suru=(char*)&n;
    milon=(char*)&nuevo;
    while(scanf("%d",&n)!=EOF){
        *milon=*(suru+3);
        *(milon+1)=*(suru+2);
        *(milon+2)=*(suru+1);
        *(milon+3)=*suru;
        printf("%d converts to %d\n",n,nuevo);
        }
    return 0;
    }
