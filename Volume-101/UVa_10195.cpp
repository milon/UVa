//UVa Problem-10195(The Knights Of The Round Table)
//Accepted
//Running time: 0.008 sec

#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    long double a,b,c,k,r;
    while(scanf("%Lf%Lf%Lf",&a,&b,&c)==3){
        if(a<=0||b<=0||c<=0){
            printf("The radius of the round table is: 0.000\n");
            continue;
            }
        k=(a+b+c)/2;
        r=(sqrt(k*(k-a)*(k-b)*(k-c)))/k;
        printf("The radius of the round table is: %.3Lf\n",r);
        }
    return 0;
    }
