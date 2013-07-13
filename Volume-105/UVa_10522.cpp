//UVa Problem-10522(Height to Area)
//Accepted
//Running time: 0.012 sec

#include<iostream>
#include<cmath>
using namespace std;

double solve(double ha,double hb,double hc){
    double cosA=hb*hc*(1/(hb*hb)+1/(hc*hc)-1/(ha*ha))/2;
    double sinA=sin(acos(cosA));
    return hb*hc/(2*sinA);
    }

int main(){
    int n,kase=0;
    cin>>n;
    double ha,hb,hc;
    while(cin>>ha>>hb>>hc && kase<n){
        double ans=solve(ha,hb,hc);
        if(isnan(ans)){
            cout<<"These are invalid inputs!"<<endl;
            kase++;
            }
        else
            printf("%0.3lf\n",ans);
        }
    return 0;
    }
