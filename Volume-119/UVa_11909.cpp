//UVa Problem-11909(Soya Milk)
//Accepted
//Running time: 0.012 sec
//Author: Milon

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

const double pi=2*acos(0.0);
const double tmp=pi/180.0;

int main(){
    int l,w,h,g;
    double leche,area,cateto;
    while(cin>>l>>w>>h>>g){
        cateto=l*sin(g*tmp)/sin((90-g)*tmp);
        if(g==90)
            cout<<"0 mL"<<endl;
        else if(cateto<=h){
            cateto=l*sin(g*tmp)/sin((90-g)*tmp);
            area=l*cateto*w/2;
            leche=(l*w*h)-area;
            printf("%0.3lf mL\n",leche);
            }
        else if(g){
            cateto=h*sin((90-g)*tmp)/sin(g*tmp);
            area=h*cateto*w/2;
            printf("%0.3lf mL\n",area);
            }
        else{
            leche=(l*h*w);
            printf("%0.3lf mL\n",leche);
            }
        }
    return 0;
    }
