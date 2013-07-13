//UVa Problem-10351(Cutting Diamonds)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cmath>
using namespace std;

const double PI=2*acos(0.0);

int main(){
    int x,y,z,xx,yy,zz,test=0;
    while(cin>>x>>y>>z>>xx>>yy>>zz){
        double a,b,c,dif=0;
        if(x<xx){
            a=y;
            b=z;
            c=xx;
            dif=xx-(xx*2-x*2);
            }
        else if(y<yy){
            a=x;
            b=z;
            c=yy;
            dif=yy-(yy*2-y*2);
            }
        else if(z<zz){
            a=x;
            b=y;
            c=zz;
            dif=zz-(zz*2-z*2);
            }
        else{
            cout<<"Set #"<<++test<<endl;
            printf("%.06lf\n",0);
            continue;
            }
        double a1=sqrt(a*a*(1-(dif*dif)/(c*c)));
        double b1=sqrt(b*b*(1-(dif*dif)/(c*c)));
        cout<<"Set #"<<++test<<endl;
        printf("%.06lf\n",PI/4*a1*b1);
        }
    return 0;
    }

