//UVa Problem-10991(Region)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cstdio>
#include<complex>
#include<cmath>
using namespace std;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n)   REP(i,0,n)
#define pb push_back

const double pi = acos(-1);

double computex(double a,double b,double c){
    return(c*c-a*a-b*b)/(-2*a);
    }

double computey(double r1,double r2,double r3){
    double x=computex(r1+r2,r1+r3,r2+r3);
    return sqrt(-x*x+(r1+r3)*(r1+r3));
    }

double tri(double a,double b,double c){
    double s=(a+b+c)/2.;
    return sqrt(s*(s-a)*(s-b)*(s-c));
    }

double solve(double r1,double r2,double r3){
    double area=tri(r1+r2,r2+r3,r3+r1);
    double x=computex(r1+r2,r1+r3,r2+r3);
    double y=computey(r1,r2,r3);
    double arg1=arg(complex<double>(x,y));
    double arg2=pi-arg(complex<double>(x-(r1+r2),y));
    double arg3=pi-arg1-arg2;
    double area1=arg1/2*r1*r1,area2=arg2/2*r2*r2,area3=arg3/2*r3*r3;
    return area-area1-area2-area3;
    }

int main(){
    int test;
    cin>>test;
    while(test--){
        double r1,r2,r3;
        cin>>r1>>r2>>r3;
        printf("%.6lf\n",solve(r1,r2,r3));
        }
    return 0;
    }
