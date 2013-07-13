//UVa Problem-880(Cantor Fractions)
//Accepted
//Running time: 0.284 sec

#include<iostream>
#include<cmath>
using namespace std;

double solve(double a,double b,double c){
    return (-b+sqrt(b*b-4*a*c))/(2*a);
    }

int main(){
    long long in;
    while(cin>>in && in){
        long long n=(long long)ceil(solve(1,1,-2*in));
        long long u=n-(in-n*(n-1)/2)+1;
        long long d=n-u+1;
        cout<<u<<"/"<<d<<endl;
        }
    return 0;
    }
