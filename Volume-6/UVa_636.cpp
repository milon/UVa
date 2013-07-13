//UVa Problem-636(Squares)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<cstdio>
#include<cmath>
using namespace std;

int com(int n,int b){
    int sum=0;
    int p=0;
    int a;
    while(n){
        sum+=(n%10)*(pow(b,p));
        n/=10;
        p++;
        }
    a=sqrt((double)sum);
    if(a*a==sum)
        return 1;
    return 0;
    }

int big(int n){
    int max=0;
    int k;
    while(n){
        k=n%10;
        if(k>max)
            max=k;
        n/=10;
        }
    return max;
    }

void cal(int n){
    int i,j,k;
    k=big(n);
    for(i=k+1;i<=99;i++)
        if(com(n,i))
            break;
    printf("%d\n",i);
    }

int main(){
    int n;
    while(scanf("%d",&n) && n)
        cal(n);
    return 0;
    }
