//UVa Problem-11817(Tunnelling the Earth)
//Accepted
//Running time: 0.024 sec

#include<iostream>
#include<cmath>
using namespace std;

typedef struct{
    double x,y,z;
    } P;

const double R = 6371009;
const double PI = 2*acos(0.0);

P calc(double a,double b){
    double z = R*sin(a);
    double x = R*cos(a)*cos(b);
    double y=R*cos(a)*sin(b);
    return (P){x,y,z};
    }

double dist(double a,double b,double c){
    return sqrt(a*a+b*b+c*c);
    }

double rad(double sdist){
    double c = (R*R+R*R-sdist*sdist)/(2*R*R);
    return acos(c);
    }

int main(){
    int te;
    cin>>te;
    while(te--){
        P in[2];
        for(int i=0;i<2;i++){
            double a,b;
            cin>>a>>b;
            a=a/180*PI;b=b/180*PI;
            in[i]=calc(a,b);
            }
        double sdist=dist(in[0].x-in[1].x,in[0].y-in[1].y,in[0].z-in[1].z);
        double trad =rad(sdist);
        double cdist=trad*R;
        printf("%.0lf\n",abs(cdist-sdist));
        }
    return 0;
    }
