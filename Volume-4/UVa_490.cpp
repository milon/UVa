//UVa Problem-490(Rotating Sentences)
//Accepted
//Running time: 0.016 sec
//Author: Milon

#include<cstdio>
#include<cstring>
using namespace std;

char szLines[128][128],szLines1[128][128];

int main(){
    int n,i,j,ii,max,len[128];
    max=0;
    for(n=0;gets(szLines[n]) && *szLines[n];n++){
        len[n]=strlen(szLines[n]);
        if(len[n]>max)
            max=len[n];
        }
    for(i=n-1;i>=0;i--){
        ii=n-i-1;
        for(j=0;j<len[i];j++)
            szLines1[j][ii]=szLines[i][j];
        for(;j<max;j++)
            szLines1[j][ii]=' ';
        }
    for(i=0;i<max;i++)
        printf("%s\n",szLines1[i]);
    return 0;
    }
