//UVa Problem-11505(Logo)
//Accepted
//Running time: 0.080 sec

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

const double pi=2*acos(0.0);

int main(){
    int test;
    cin>>test;
    while(test--){
        int command;
        cin>>command;
        double x=0,y=0,t=0;
        for(int i=0;i<command;i++){
            string c;
            double m;
            cin>>c>>m;
            if(c=="fd"){
                x+=(m*cos(t*pi/180));
                y+=(m*sin(t*pi/180));
                }
            else if(c=="lt"){
                t+=m;
                t=fmod(t,360);
                }
            else if(c=="rt"){
                t-=m;
                t=fmod(t,360);
                }
            else{
                x-=(m*cos(t*pi/180));
                y-=(m*sin(t*pi/180));
                }
            }
        printf("%0.lf\n",sqrt(x*x+y*y));
        }
    return 0;
    }
