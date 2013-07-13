//UVa Problem-10405(Longest Common Subsequence)
//Accepted
//Running time: 0.124 sec

#include<iostream>
using namespace std;

#define max 1001

int c[max][max];
char array[2][max];

int main(){
    int i,j,n,m;
    char in;
    while(true){
        m=1;
        n=1;
        if(scanf("%c",&in)!=EOF)
            array[0][m++]=in;
        else
            break;
        while((in=getchar())!='\n')
            array[0][m++]=in;
        array[0][m--]='\0';
        while((in=getchar())!='\n')
            array[1][n++]=in;
        array[1][n--]='\0';
        for(i=0;i<max;i++){
            for(j=0;j<max;j++){
                c[i][j]=0;
                }
            }
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                if(array[0][i]==array[1][j])
                    c[i][j]=c[i-1][j-1]+1;
                else
                    c[i][j]=(c[i][j-1]>c[i-1][j])?c[i][j-1]:c[i-1][j];
                }
            }
        cout<<c[m][n]<<endl;
        }
    return 0;
    }
