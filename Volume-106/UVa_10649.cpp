//UVa Problem-10649(Danger Point)
//Accepted
//Running time: 0.016 sec

#include<iostream>
#include<cmath>
#include<cassert>
using namespace std;

#define double long double
const double pi = acos(-1);
double cos45=cos(pi/4.0),cos135=cos(135.0/180.0*pi);

double solve_eq(double A,double B,double C){
    return (-B +sqrt(B*B-4*A*C+1e-10))/(2*A);
    }

double solve_eq2(double A,double B,double C){
    return (-B -sqrt(B*B-4*A*C+1e-10))/(2*A);
    }

double solve(double D1,double D2){
    double x = solve_eq(2,-2*D2*cos135-2*D1+2*D2*cos45,2*D2*D2-2*D1*D2*cos45);
    if(isnan(x))
        return -1;
    double ans = solve_eq(2,-2*x*cos45-2*(D1-x)*cos135,x*x+(D1-x)*(D1-x)-D1*D1);
    return ans;
    }

int main(){
    double d1,d2;
    while(cin>>d1 >> d2){
        if(d1==0 && d2==0)
            break;
        double ans=solve(d1,d2);
        if(ans>-0.0){
            double tmp=solve(d1,ans);
            if(isnan(tmp))
                exit(1);
            printf("%.6Lf\n",ans);
            }
        else puts("INCORRECT INFORMATION !!!");
        }
    return 0;
    }
