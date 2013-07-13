//UVa Problem-10233(Dermuba Triangle)
//Accepted
//Running time: 0.016 sec

#include<cstdio>
#include<cmath>
using namespace std;

#define SQR(n) (n*n)
#define DISTANCE(x,y) sqrt(SQR(x)+SQR(y))

int f(const int n,int *x,int *y){
    int temp=(int)sqrt(n);
    *y=n-SQR(temp);
    *x=temp*3+((*y%2)?1:2);
    *y-=temp;
    }

int main(){
    int n[2],x[2],y[2];
    double sqrt3=sqrt(3);
    while(scanf("%d %d",&n[0],&n[1])==2){
        f(n[0],&x[0],&y[0]);
        f(n[1],&x[1],&y[1]);
        printf("%.3f\n",DISTANCE((double)(x[0]-x[1])/sqrt3,(double)(y[0]-y[1]))*0.5);
        }
    return 0;
    }
