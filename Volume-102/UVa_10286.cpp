//UVa Problem-10286(Trouble with a Pentagon)
//Accepted
//Running time: 0.060 sec

#include<iostream>
#include<cmath>
using namespace std;

const double PI=2*acos(0.0);

double arg(double n){
    return ((n*PI)/180.0);
    }

const double rate=sin(arg(108))/sin(arg(63));

double solve(double suru){
    return suru*rate;
    }

int main(){
    double suru;
    while(cin>>suru)
        printf("%.10lf\n",solve(suru));
    return 0;
    }
