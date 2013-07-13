//UVa Problem-10214(Trees in a Wood.)
//Accepted
//Running time: 0.292 sec

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int ep[2001];

int eular(int n){
    if(n==0)
        return 0;
    int ret=n;
    for(int x=2;x*x<=n;++x){
        if(!(n%x)){
            ret-=ret/x;
            while(!(n%x))
                n/=x;
            }
        }
    if(n>1)
        ret-=ret/n;
    return ret-1;
    }

int main(){
    for(int i=1;i<2001;i++)
        ep[i]=eular(i)+1;
    int a,b;
    while(cin>>a>>b && a){
        if(a>b)
            swap(a,b);
        double all=((double)(2*a+1)*(double)(2*b+1))-1;
        double cnt=0;
        for(int i=1;i<=a;i++){
            cnt+=(double)ep[i]*(double)(b/i);
            if(b%i!=0){
                for(int j=(b/i)*i+1;j<=b;j++){
                    if(__gcd(j,i)==1)
                        cnt++;
                    }
                }
            }
        cnt=cnt++;
        cnt*=4;
        printf("%.7lf\n",cnt/all);
        }
    return 0;
    }
