//UVa Problem-11666(Logarithms)
//Accepted
//Running time: 0.064 sec

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

const double log_2=log(2);
const double eps=1e-10;

void solve(int n){
    double logn=log(n);
    double L=floor(logn);
    double dif=logn-L;
    if(dif<log_2+eps)
        printf("%.0lf %.8lf\n",L,1-exp(logn-L));
    else
        printf("%.0lf %.8lf\n",L+1,1-exp(logn-L-1));
    }

int main(){
    int n;
    while(cin>>n && n)
        solve(n);
    return 0;
    }
