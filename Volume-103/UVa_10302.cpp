//UVa Problem-10302(Summation of Polynomials)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    long double n,sum;
    while(scanf("%Lf",&n)==1){
        sum=(n*n*(n+1)*(n+1))/4;
        printf("%.0Lf\n",sum);
        }
    return 0;
    }
