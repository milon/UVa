//UVa Problem-10341(Solve It)
//Accepted
//Running time: 0.040 sec

#include<iostream>
#include<cmath>
using namespace std;

const double m=1e-8;

int p,q,r,s,t,u;

double suru(double x){
    return p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;
    }

void milon(){
    double x=suru(0),y=suru(1);
    if((x>0 && y>0) || (x<0 && y<0)){
        cout<<"No solution"<<endl;
        return;
        }
    else if(x==0){
        cout<<"0.0000"<<endl;
        return;
        }
    else if(y==0){
        cout<<"1.0000"<<endl;
        return;
        }
    x=0,y=1;
    while(y-x>=m){
        double ms=x+(y-x)/2;
        double mid=suru(ms);
        if(mid*y>m)
            x=ms;
        else
            y=ms;
        }
    printf("%.4lf\n",x);
    return;
    }

int main(){
    while(cin>>p>>q>>r>>s>>t>>u){
        milon();
        }
    return 0;
    }
