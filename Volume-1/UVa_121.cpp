//UVa Problem-121(Pipe Fitters)
//Accepted
//Running time: 0.016 sec
//Author: Milon

#include<iostream>
#include<vector>
#include<cmath>
#include<map>
using namespace std;

const double dr=sqrt(3)/2.;

int computegrid(double w,double h){
    int r=0,c=0;
    while(r<=h)
        r++;
    while(c<=w)
        c++;
    r--;
    c--;
    return r*c;
    }

int computeskew(double w,double h){
    int ec=0,oc=0;
    double tmp=0;
    while(tmp<=w){
        ec++;
        tmp+=1;
        }
    ec--;
    tmp=0.5;
    while(tmp<=w){
        oc++;
        tmp+=1;
        }
    oc--;
    int ret=0;
    bool iseven=true;
    double r=0;
    while(true){
        if(r+1>h)
            break;
        r+=dr;
        if(iseven)
            ret+=ec;
        else
            ret+=oc;
        iseven=!iseven;
        }
    return ret;
    }

int main(){
    double w,h;
    while(cin>>w>>h){
        int a=computegrid(w,h);
        int b=max(computeskew(h,w),computeskew(w,h));
        if(a>=b)
            cout<<a<<" grid"<<endl;
        else
            cout<<b<<" skew"<<endl;
        }
    return 0;
    }
