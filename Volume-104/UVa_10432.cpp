//UVa Problem-10432(Polygon Inside A Circle)
//Accepted
//Running time: 0.012 sec

#include<cstdio>
#include<cmath>
using namespace std;

const long double pi=2*acos(0.0);   //3.14159265358979

int main(){
    long double r,n,area,b;
    while(scanf("%Lf%Lf",&r,&n)==2){
        b=sin((pi*2)/n);
        area=(pow(r,2)*n*b)/2;
        printf("%.3Lf\n",area);
        }
    return 0;
    }
