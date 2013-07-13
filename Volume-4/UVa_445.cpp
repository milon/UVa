//UVa Problem-445(Marvelous Mazes)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
using namespace std;

int main(){
    char a[150];
    while(gets(a)){
        int i=0;
        while(a[i]!=0){
            int frq=0;
            while(a[i]>='0' && a[i]<='9')
                frq+=(a[i++]-'0');
            for(int j=0;j<frq;j++){
                if(a[i]=='b')
                    printf(" ");
                else
                    printf("%c",a[i]);
				}
            if(a[i]=='!')
                printf("\n");
            i++;
			}
        printf("\n");
		}
    return 0;
	}
