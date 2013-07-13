//UVa Problem-573(The Snail)
//Accepted
//Running time: 0.008 sec
//Author: Milon

#include<iostream>
using namespace std;

int main(){
    double h,u,d,f;
    while(cin>>h>>u>>d>>f && h>0){
        double ih=0;
        double hc=ih+u;
        double hs=hc-d;
        double fa=(u*f)/100.00;
        long day=1;
        int a=0,b=0;
        if(hs<0||hc>h)
            b=1;
        if(hs<0)
            a=1;
        while(b!=1){
            ih=hs;
            u-=fa;
            if(u>=0)
                hc=ih+u;
            else
                hc=ih;
            hs=hc-d;
            day++;
            if(hs<0||hc>=h)
                b=1;
            if(hs<0||(hs<h&&hc==h))
                a=1;
            }
        if(a==0)
            cout<<"success on day "<<day<<"\n";
        else
            cout<<"failure on day "<<day<<"\n";
        }
    return 0;
    }
