//UVa Problem-11152(Colourful Flowers)
//Accepted
//Running time: 0.044 sec

#include<cstdio>
#include<cmath>
using namespace std;

#define pi 2*acos(0.0)      //pi=3.141592653589793

int main(){
    long double s,max,a,b,c,v,acsmall,acbig,at,y;
    while(scanf("%Lf %Lf %Lf",&a,&b,&c)==3){
        s=(a+b+c)/2;
        at=sqrt(s*(s-a)*(s-b)*(s-c));
        acsmall=pi*pow((at/s),2);
        v=at-acsmall;
        acbig=pi*pow(((a*b*c)/(4*at)),2);
        y=acbig-(v+acsmall);
        printf("%.4Lf %.4Lf %.4Lf\n",y,v,acsmall);
        }
    return 0;
    }
