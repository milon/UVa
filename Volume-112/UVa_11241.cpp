//UVa Problem-11241(Humidex)
//Accepted
//Running time: 0.020 sec

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

float cal_h(float e){
    return ((0.5555)*(e-10.0));
    }

float cal_e(float d){
    return (6.11*exp(5417.753*(1.0/273.16-1.0/(d+273.16))));
    }

float TD(float t, float d){
    return (t+cal_h(cal_e(d)));
    }

float discal_h(float h){
    return (h/0.5555+10.0);
    }

float discal_e(float e){
    return (1.0/(1.0/273.16-log(e/6.11)/5417.753)-273.16);
    }

float DH(float d, float h){
    return (h-cal_h(cal_e(d)));
    }

float HT(float h, float t){
    return discal_e(discal_h(h-t));
    }

int main(){
    char c1, c2;
    float n1, n2;
    for(;;){
        cin>>c1;
        if(c1=='E')
            break;
        cin>>n1>>c2>>n2;
        if((c1=='T') && (c2=='D'))
            printf("T %.1f D %.1f H %.1f\n",n1,n2,TD(n1,n2));
        else if((c1=='D') && (c2=='T'))
            printf("T %.1f D %.1f H %.1f\n",n2,n1,TD(n2,n1));
        else if((c1=='D') && (c2=='H'))
            printf("T %.1f D %.1f H %.1f\n",DH(n1,n2),n1,n2);
        else if((c1=='H') && (c2=='D'))
            printf("T %.1f D %.1f H %.1f\n",DH(n2,n1),n2,n1);
        else if((c1=='H') && (c2=='T'))
            printf("T %.1f D %.1f H %.1f\n",n2,HT(n1,n2),n1);
        else if((c1=='T') && (c2=='H'))
            printf("T %.1f D %.1f H %.1f\n",n1,HT(n2,n1),n2);
        }
    return 0;
    }

