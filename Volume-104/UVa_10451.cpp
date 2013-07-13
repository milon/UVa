//UVa Problem-10451(Ancient Village Sports)
//Accepted
//Running time: 0.112 sec

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

#define PI 2*acos(0.0)
#define EPS pow(10,-11)

int main(){
    int n,index=0;
    double area, theta,r_big,r_small;
    while(cin>>n>>area){
        if(n<3)
            break;
        theta=2.0*PI/(double)n;
        r_big=sqrt(2.0*area/(double)n/sin(theta));
        r_small=r_big*cos(theta/2.0);
        cout<<"Case "<<++index<<": "<<setprecision(5)<<setiosflags(ios::fixed)<<EPS+r_big*r_big*PI-area<<' '<<EPS+area-r_small*r_small*PI<<endl;
        }
    return 0;
    }
