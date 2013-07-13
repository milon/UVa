//UVa Problem-10297(Beavergnaw)
//Accepted
//Running time: 0.008 sec

#include<iostream>
#include<cmath>
using namespace std;

const double pi=2*acos(0.0);

double solve(double D,double V){
    double suru=D*D*D-6*V/pi;
    double milon=log(suru)/3;
    return exp(milon);
    }

int main(){
    double D,V;
    while(cin>>D>>V && D && V){
        printf("%.3lf\n",solve(D,V));
        }
    return 0;
    }
