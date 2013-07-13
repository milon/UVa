//UVa Problem-10260(Soundex)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    char code[22],x;
    int i,j,a[22],len;
    while(gets(code)){
        for(int j=0;j<22;j++)
            a[j]=0;
        len=strlen(code);
        for(i=0;i<len;i++){
            if(code[i]=='B'||code[i]=='F'||code[i]=='P'||code[i]=='V')
                a[i]=1;
            if(code[i]=='C'||code[i]=='G'||code[i]=='J'||code[i]=='K'||
            code[i]=='Q'||code[i]=='S'||code[i]=='X'||code[i]=='Z')
                a[i]=2;
            if(code[i]=='D'||code[i]=='T')
                a[i]=3;
            if(code[i]=='L')
                a[i]=4;
            if(code[i]=='M'||code[i]=='N')
                a[i]=5;
            if(code[i]=='R')
                a[i]=6;
            if(i>0 && a[i]==a[i-1])
                continue;
            else if(a[i]!=0)
                printf("%d",a[i]);
            }
        printf("\n");
        }
    return 0;
    }
