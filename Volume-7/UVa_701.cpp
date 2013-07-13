//UVa Problem-701(The Archeologists’ Dilemma)
//Accepted
//Running time: 0.340 sec
//Author: Milon

#include<iostream>
#include<cmath>
using namespace std;

double log_2(double n){
    return log(n)/log(2.0);
    }

int main(){
    double a;
    int b,len;
    double m=log_2(10);
    while(cin>>a){
        len=0;
        b=(int)a;
        while(true){
            if(b/10!=0){
                len++;
                b/=10;
                }
            else
                break;
            }
        len+=2;
        double pre,back;
        int e;
        for(int k=len; ;k++){
            pre=log_2(a)+k*m;
            back=log_2(a+1)+k*m;
            e=(int)(ceil(pre));
            if(e<back){
                cout<<e<<endl;
                break;
                }
            }
        }
    return 0;
    }
