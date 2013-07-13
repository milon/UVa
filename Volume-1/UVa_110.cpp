//UVa Problem-110(Meta-Loopless Sorts)
//Accepted
//Running time: 0.076 sec
//Author: Milon

#include<cstdio>
using namespace std;

void printif(int nall,int n,int printarray[]){
    if(n>nall)
        return;
    int i;
    if(n==nall){
        for(i=1;i<=n;i++)
            printf("  ");
        printf("writeln(");
        int print=0;
        for(i=0;i<nall;i++){
            if(print)
                printf(",");
            print=1;
            printf("%c",'a'+printarray[i]);
            }
        printf(")\n");
        return;
        }
    int j;
    for(i=n;i>=0;i--){
        for(j=1;j<=n;j++)
            printf("  ");
        if(i){
            if(i==n)
                printf("if ");
            else
                printf("else if ");
            printf("%c < %c then\n",'a'+printarray[i-1],'a'+n);
            }
        else{
            printf("else\n");
            }
        int new_printarray[10]={0};
        for(j=0;j<i;j++)
            new_printarray[j]=printarray[j];
        new_printarray[j]=n;
        for(j+=1;j<=n;j++)
            new_printarray[j]=printarray[j-1];
        printif(nall,n+1,new_printarray);
        }
    }

int main(){
    int suru;
    while(scanf("%d",&suru)!=EOF){
        int print=0;
        while(suru--){
            if(print)
                printf("\n");
            print=1;
            int n;
            scanf("%d",&n);
            printf("program sort(input,output);\nvar\n");
            int i;
            int comma=0;
            for(i=0;i<n;i++){
                if(comma)
                    printf(",");
                comma=1;
                printf("%c",(char)('a'+i));
                }
            printf(" : integer;\nbegin\n");
            printf("  readln(");
            comma=0;
            for(i=0;i<n;i++){
                if(comma)
                    printf(",");
                comma=1;
                printf("%c",(char)('a'+i));
                }
            printf(");\n");
            int printarray[10]={0};
            printif(n,1,printarray);
            printf("end.\n");
            }
        }
    return 0;
    }
