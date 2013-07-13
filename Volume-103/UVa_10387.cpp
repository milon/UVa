//UVa Problem-10387(Billiard)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cmath>
using namespace std;

const double rad=180/(2*acos(0.0));

int main(){
    int a,b,s,m,n;
    while(cin>>a>>b>>s>>m>>n){
        if(!a||!b||!s||!m||!n)
            break;
        double ta=a*m,tb=b*n;
        double dist=sqrt(ta*ta+tb*tb);
        double t=dist/(double)s;
        double angle;
        if(m==0 && n==0)
            angle=0;
        else if(m==0)
            angle=90;
        else if(n==0)
            angle=0;
        else
            angle=atan(tb/ta);
        printf("%.2lf %.2lf\n",rad*angle,t);
        }
    return 0;
    }
